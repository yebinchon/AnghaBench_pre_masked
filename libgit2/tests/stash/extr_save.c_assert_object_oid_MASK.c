
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_object_t ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int **,int ,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(const char* VAR_2, const char* VAR_3, git_object_t VAR_4)
{
 int VAR_5;
 git_object *VAR_6;

 VAR_5 = FUNC_6(&VAR_6, VAR_1, VAR_2);

 if (!VAR_3) {
  FUNC_0(VAR_0, VAR_5);
  return;
 } else
  FUNC_0(0, VAR_5);

 FUNC_1(FUNC_5(FUNC_3(VAR_6), VAR_3));
 FUNC_0(VAR_4, FUNC_4(VAR_6));
 FUNC_2(VAR_6);
}
