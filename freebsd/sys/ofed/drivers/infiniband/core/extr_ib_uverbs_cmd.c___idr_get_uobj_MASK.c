
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct ib_uobject {int ref; struct ib_ucontext* context; } ;
struct ib_ucontext {int dummy; } ;


 struct ib_uobject* FUNC_0 (struct idr*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct ib_uobject *FUNC_4(struct idr *VAR_0, int VAR_1,
      struct ib_ucontext *VAR_2)
{
 struct ib_uobject *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {
  if (VAR_3->context == VAR_2)
   FUNC_1(&VAR_3->ref);
  else
   VAR_3 = ((void*)0);
 }
 FUNC_3();

 return VAR_3;
}
