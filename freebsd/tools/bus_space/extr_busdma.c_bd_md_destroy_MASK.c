
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_ioc_busdma {int key; int request; } ;
struct obj {TYPE_1__* parent; int fd; int key; } ;
typedef int ioc ;
struct TYPE_2__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct proto_ioc_busdma*) ;
 int FUNC_1 (struct proto_ioc_busdma*,int ,int) ;
 int FUNC_2 (struct obj*) ;
 struct obj* FUNC_3 (int,int ) ;

int
FUNC_4(int VAR_4)
{
 struct proto_ioc_busdma VAR_5;
 struct obj *VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_6 == ((void*)0))
  return (VAR_3);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.request = VAR_2;
 VAR_5.key = VAR_6->key;
 if (FUNC_0(VAR_6->fd, VAR_1, &VAR_5) == -1)
  return (VAR_3);

 VAR_6->parent->refcnt--;
 FUNC_2(VAR_6);
 return (0);
}
