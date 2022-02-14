
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,int ,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 struct stat VAR_3;
 bool VAR_4;

 FUNC_1("testCAPS", "whatever\n", 0, VAR_1 | VAR_2, 0666);
 VAR_4 = (FUNC_3("Testcaps", &VAR_3) == 0);
 FUNC_2(FUNC_4("testCAPS"));

 FUNC_0(
  "core.ignorecase", VAR_4 ? 1 : VAR_0);
}
