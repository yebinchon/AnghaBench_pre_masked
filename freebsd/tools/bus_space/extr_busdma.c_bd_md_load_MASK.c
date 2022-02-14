
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct TYPE_3__ {uintptr_t virt_addr; uintptr_t phys_addr; uintptr_t bus_addr; int virt_size; int flags; } ;
struct TYPE_4__ {TYPE_1__ md; } ;
struct proto_ioc_busdma {TYPE_2__ u; int key; int request; } ;
struct obj {int fd; int key; } ;
typedef int ioc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct obj*,int ,uintptr_t,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,struct proto_ioc_busdma*) ;
 int FUNC_2 (struct proto_ioc_busdma*,int ,int) ;
 struct obj* FUNC_3 (int,int ) ;

int
FUNC_4(int VAR_7, void *VAR_8, u_long VAR_9, u_int VAR_10)
{
 struct proto_ioc_busdma VAR_11;
 struct obj *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_7, VAR_3);
 if (VAR_12 == ((void*)0))
  return (VAR_6);

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.request = VAR_5;
 VAR_11.key = VAR_12->key;
 VAR_11.u.md.flags = VAR_10;
 VAR_11.u.md.virt_addr = (uintptr_t)VAR_8;
 VAR_11.u.md.virt_size = VAR_9;
 if (FUNC_1(VAR_12->fd, VAR_4, &VAR_11) == -1)
  return (VAR_6);

 VAR_13 = FUNC_0(VAR_12, VAR_2, VAR_11.u.md.virt_addr, VAR_9);
 VAR_13 = FUNC_0(VAR_12, VAR_1, VAR_11.u.md.phys_addr, VAR_9);
 VAR_13 = FUNC_0(VAR_12, VAR_0, VAR_11.u.md.bus_addr, VAR_9);
 return (VAR_13);
}
