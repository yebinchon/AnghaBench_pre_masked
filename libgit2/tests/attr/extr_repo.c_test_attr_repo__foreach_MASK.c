
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,char*,int *,int*) ;

void FUNC_4(void)
{
 int VAR_4;

 VAR_4 = 0;
 FUNC_2(FUNC_3(
  VAR_3, 0, "root_test1", &VAR_2, &VAR_4));
 FUNC_0(VAR_4 == 2);

 VAR_4 = 0;
 FUNC_2(FUNC_3(VAR_3, 0, "sub/subdir_test1",
  &VAR_2, &VAR_4));
 FUNC_0(VAR_4 == 4);

 VAR_4 = 0;
 FUNC_2(FUNC_3(VAR_3, 0, "sub/subdir_test2.txt",
  &VAR_2, &VAR_4));
 FUNC_0(VAR_4 == 6);

 VAR_4 = 2;
 FUNC_1(
  VAR_0, FUNC_3(
   VAR_3, 0, "sub/subdir_test1", &VAR_1, &VAR_4)
 );
}
