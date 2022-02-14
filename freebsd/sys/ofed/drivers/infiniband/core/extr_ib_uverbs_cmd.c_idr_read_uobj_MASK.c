
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct ib_uobject {int live; int mutex; } ;
struct ib_ucontext {int dummy; } ;


 int VAR_0 ;
 struct ib_uobject* FUNC_0 (struct idr*,int,struct ib_ucontext*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ib_uobject*) ;

__attribute__((used)) static struct ib_uobject *FUNC_4(struct idr *VAR_1, int VAR_2,
     struct ib_ucontext *VAR_3, int VAR_4)
{
 struct ib_uobject *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_4)
  FUNC_2(&VAR_5->mutex, VAR_0);
 else
  FUNC_1(&VAR_5->mutex);
 if (!VAR_5->live) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
