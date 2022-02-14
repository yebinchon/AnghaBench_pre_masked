
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*,int ,int*) ;

__attribute__((used)) static void FUNC_3(
 git_config *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4 > 0) {
  FUNC_1(FUNC_2(VAR_3, VAR_1, ((void*)0), VAR_2, &VAR_6));
  FUNC_0(VAR_4, VAR_6);
 } else {
  FUNC_0(VAR_0,
   FUNC_2(VAR_3, VAR_1, ((void*)0), VAR_2, &VAR_6));
 }

 VAR_6 = 0;

 if (VAR_5 > 0) {
  FUNC_1(FUNC_2(VAR_3, VAR_1, "example", VAR_2, &VAR_6));
  FUNC_0(VAR_5, VAR_6);
 } else {
  FUNC_0(VAR_0,
   FUNC_2(VAR_3, VAR_1, "example", VAR_2, &VAR_6));
 }
}
