
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int big ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,int,int *) ;

void FUNC_5(void)
{
 const char *VAR_1 = "16a0123456789abcdef4b775213c23a8bd74f5e0";
 git_oid VAR_2;
 char VAR_3[VAR_0 + 1 + 3];

 FUNC_2(FUNC_3(&VAR_2, VAR_1));

 FUNC_4(VAR_3, sizeof(VAR_3), &VAR_2);
 FUNC_1(VAR_1, VAR_3);

 FUNC_4(VAR_3, VAR_0 + 1, &VAR_2);
 FUNC_1(VAR_1, VAR_3);

 FUNC_0(VAR_3, 1, &VAR_2, "1");
 FUNC_0(VAR_3, 2, &VAR_2, "16");
 FUNC_0(VAR_3, 3, &VAR_2, "16a");
 FUNC_0(VAR_3, 4, &VAR_2, "16a0");
 FUNC_0(VAR_3, 5, &VAR_2, "16a01");

 FUNC_0(VAR_3, VAR_0, &VAR_2, VAR_1);
 FUNC_0(
  VAR_3, VAR_0 - 1, &VAR_2, "16a0123456789abcdef4b775213c23a8bd74f5e");
 FUNC_0(
  VAR_3, VAR_0 - 2, &VAR_2, "16a0123456789abcdef4b775213c23a8bd74f5");
 FUNC_0(
  VAR_3, VAR_0 - 3, &VAR_2, "16a0123456789abcdef4b775213c23a8bd74f");
}
