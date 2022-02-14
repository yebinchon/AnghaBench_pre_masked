
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(git_reference *VAR_3, void *VAR_4)
{
 git_revwalk *VAR_5 = (git_revwalk *)VAR_4;
 int VAR_6;

 if (FUNC_3(VAR_3) != VAR_2) {
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_6 = FUNC_4(VAR_5, FUNC_2(VAR_3));


 if (VAR_6 == VAR_0 || VAR_6 == VAR_1) {
  FUNC_0();
  VAR_6 = 0;
 }

 FUNC_1(VAR_3);

 return VAR_6;
}
