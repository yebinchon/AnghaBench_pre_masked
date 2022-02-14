
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_ioc_busdma {int key; int request; } ;
struct obj {int refcnt; int fd; TYPE_1__* parent; int key; } ;
typedef int ioc ;
struct TYPE_2__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,struct proto_ioc_busdma*) ;
 int FUNC_2 (struct proto_ioc_busdma*,int ,int) ;
 int FUNC_3 (struct obj*) ;
 struct obj* FUNC_4 (int,int ) ;

int
FUNC_5(int VAR_5)
{
 struct proto_ioc_busdma VAR_6;
 struct obj *VAR_7, *VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_1);
 if (VAR_8 == ((void*)0))
  return (VAR_4);
 if (VAR_8->refcnt > 1)
  return (VAR_0);

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.request = VAR_3;
 VAR_6.key = VAR_8->key;
 if (FUNC_1(VAR_8->fd, VAR_2, &VAR_6) == -1)
  return (VAR_4);

 if (VAR_8->parent != ((void*)0))
  VAR_8->parent->refcnt--;
 else
  FUNC_0(VAR_8->fd);
 FUNC_3(VAR_8);
 return (0);
}
