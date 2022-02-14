
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_long ;
typedef int u_int ;
struct TYPE_3__ {void* size; void* base; int op; } ;
struct TYPE_4__ {TYPE_1__ sync; } ;
struct proto_ioc_busdma {TYPE_2__ u; int key; int request; } ;
struct obj {int fd; int key; } ;
typedef int ioc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct proto_ioc_busdma*) ;
 int FUNC_1 (struct proto_ioc_busdma*,int ,int) ;
 struct obj* FUNC_2 (int,int ) ;

int
FUNC_3(int VAR_4, u_int VAR_5, u_long VAR_6, u_long VAR_7)
{
 struct proto_ioc_busdma VAR_8;
 struct obj *VAR_9;

 VAR_9 = FUNC_2(VAR_4, VAR_0);
 if (VAR_9 == ((void*)0))
  return (VAR_3);

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.request = VAR_2;
 VAR_8.key = VAR_9->key;
 VAR_8.u.sync.op = VAR_5;
 VAR_8.u.sync.base = VAR_6;
 VAR_8.u.sync.size = VAR_7;
 if (FUNC_0(VAR_9->fd, VAR_1, &VAR_8) == -1)
  return (VAR_3);

 return (0);
}
