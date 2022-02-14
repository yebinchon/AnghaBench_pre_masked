
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_diff_delta ;
struct TYPE_2__ {int debug; } ;
typedef TYPE_1__ diff_expects ;


 int FUNC_0 (int const*,float,void*) ;
 int FUNC_1 (int ,int const*,float) ;
 int VAR_0 ;

int FUNC_2(
 const git_diff_delta *VAR_1,
 float VAR_2,
 void *VAR_3)
{
 if (!VAR_3) {
  FUNC_1(VAR_0, VAR_1, VAR_2);
  return 0;
 }

 if (!((diff_expects *)VAR_3)->debug)
  FUNC_1(VAR_0, VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
