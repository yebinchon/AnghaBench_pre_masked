
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_1("attr/.gitignore", "Folder/*/Contained");

 FUNC_0(1, "Folder/Middle/Contained");
 FUNC_0(0, "Folder/Middle/More/More/Contained");

 FUNC_1("attr/.gitignore", "Folder/**/Contained");

 FUNC_0(1, "Folder/Middle/Contained");
 FUNC_0(1, "Folder/Middle/More/More/Contained");

 FUNC_1("attr/.gitignore", "Folder/**/Contained/*/Child");

 FUNC_0(1, "Folder/Middle/Contained/Happy/Child");
 FUNC_0(0, "Folder/Middle/Contained/Not/Happy/Child");
 FUNC_0(1, "Folder/Middle/More/More/Contained/Happy/Child");
 FUNC_0(0, "Folder/Middle/More/More/Contained/Not/Happy/Child");
}
