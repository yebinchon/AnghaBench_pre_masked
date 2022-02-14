
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int khiter_t ;
typedef int git_idxmap ;


 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;

int FUNC_3(git_idxmap *VAR_1, size_t VAR_2)
{
 if (!FUNC_0(VAR_2) ||
     FUNC_2(VAR_0, VAR_1, (khiter_t)VAR_2) < 0) {
  FUNC_1();
  return -1;
 }
 return 0;
}
