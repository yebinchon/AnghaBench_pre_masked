
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int flags; int tag; } ;
struct TYPE_4__ {TYPE_1__ md; } ;
struct proto_ioc_busdma {int result; TYPE_2__ u; int request; } ;
struct obj {int refcnt; int oid; int key; struct obj* parent; int fd; } ;
typedef int ioc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct proto_ioc_busdma*) ;
 int FUNC_1 (struct proto_ioc_busdma*,int ,int) ;
 struct obj* FUNC_2 (int ) ;
 int FUNC_3 (struct obj*) ;
 struct obj* FUNC_4 (int,int ) ;

int
FUNC_5(int VAR_4, u_int VAR_5)
{
 struct proto_ioc_busdma VAR_6;
 struct obj *VAR_7, *VAR_8;

 VAR_8 = FUNC_4(VAR_4, VAR_1);
 if (VAR_8 == ((void*)0))
  return (-1);

 VAR_7 = FUNC_2(VAR_0);
 if (VAR_7 == ((void*)0))
  return (-1);

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.request = VAR_3;
 VAR_6.u.md.tag = VAR_8->key;
 VAR_6.u.md.flags = VAR_5;
 if (FUNC_0(VAR_8->fd, VAR_2, &VAR_6) == -1) {
  FUNC_3(VAR_7);
  return (-1);
 }

 VAR_7->refcnt = 1;
 VAR_7->fd = VAR_8->fd;
 VAR_7->parent = VAR_8;
 VAR_8->refcnt++;
 VAR_7->key = VAR_6.result;
 return (VAR_7->oid);
}
