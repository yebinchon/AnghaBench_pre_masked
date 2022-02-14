
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evconnlistener {int refcnt; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* destroy ) (struct evconnlistener*) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct evconnlistener*) ;
 int FUNC_2 (struct evconnlistener*) ;
 int FUNC_3 (struct evconnlistener*) ;

__attribute__((used)) static int
FUNC_4(struct evconnlistener *VAR_1)
{
 int VAR_2 = --VAR_1->refcnt;
 if (VAR_2 == 0) {
  VAR_1->ops->destroy(VAR_1);
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->lock, VAR_0);
  FUNC_2(VAR_1);
  return 1;
 } else {
  FUNC_1(VAR_1);
  return 0;
 }
}
