
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int*,int ,char*) ;

void FUNC_5(void)
{
 int VAR_1;

 VAR_0 = FUNC_3("empty_standard_repo");
 FUNC_1("empty_standard_repo/.gitignore", "Icon\r\r\n");

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Icon\r"));
 FUNC_0(1, VAR_1);

 FUNC_1("empty_standard_repo/.gitignore", "Ico\rn\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Ico\rn"));
 FUNC_0(1, VAR_1);

 FUNC_1("empty_standard_repo/.gitignore", "Ico\rn\r\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Ico\rn"));
 FUNC_0(1, VAR_1);
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Ico\rn\r"));
 FUNC_0(0, VAR_1);

 FUNC_1("empty_standard_repo/.gitignore", "Ico\rn\r\r\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Ico\rn\r"));
 FUNC_0(1, VAR_1);
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Icon\r"));
 FUNC_0(0, VAR_1);

 FUNC_1("empty_standard_repo/.gitignore", "Icon\r\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Icon\r"));
 FUNC_0(0, VAR_1);
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "Icon"));
 FUNC_0(1, VAR_1);
}
