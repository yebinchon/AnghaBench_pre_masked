
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct obj*,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,struct proto_ioc_busdma*) ;
 int FUNC_2 (struct proto_ioc_busdma*,int ,int) ;
 int FUNC_3 (struct obj*) ;
 struct obj* FUNC_4 (int,int ) ;

int
FUNC_5(int VAR_7)
{
 struct proto_ioc_busdma VAR_8;
 struct obj *VAR_9;

 VAR_9 = FUNC_4(VAR_7, VAR_3);
 if (VAR_9 == ((void*)0))
  return (VAR_6);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.request = VAR_5;
 VAR_8.key = VAR_9->key;
 if (FUNC_1(VAR_9->fd, VAR_4, &VAR_8) == -1)
  return (VAR_6);

 FUNC_0(VAR_9, VAR_2, 1);
 FUNC_0(VAR_9, VAR_1, 0);
 FUNC_0(VAR_9, VAR_0, 0);
 VAR_9->parent->refcnt--;
 FUNC_3(VAR_9);
 return (0);
}
