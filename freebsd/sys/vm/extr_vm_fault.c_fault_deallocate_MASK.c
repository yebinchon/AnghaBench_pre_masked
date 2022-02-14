
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct faultstate {scalar_t__ object; scalar_t__ first_object; int * first_m; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct faultstate*) ;
 int FUNC_3 (struct faultstate*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct faultstate *VAR_0)
{

 FUNC_5(VAR_0->object);
 if (VAR_0->object != VAR_0->first_object) {
  FUNC_0(VAR_0->first_object);
  FUNC_6(VAR_0->first_m);
  FUNC_5(VAR_0->first_object);
  FUNC_1(VAR_0->first_object);
  VAR_0->first_m = ((void*)0);
 }
 FUNC_4(VAR_0->first_object);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
