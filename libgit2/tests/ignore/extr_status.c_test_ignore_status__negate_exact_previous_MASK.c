
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

 FUNC_1("empty_standard_repo/.gitignore", "*.com\ntags\n!tags/\n.buildpath");
 FUNC_1("empty_standard_repo/.buildpath", "");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, ".buildpath"));
 FUNC_0(1, VAR_1);
}
