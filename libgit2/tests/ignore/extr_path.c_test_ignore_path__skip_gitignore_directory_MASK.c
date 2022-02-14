
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 FUNC_3("attr/.git/info/exclude", "/NewFolder\n/NewFolder/NewFolder");
 FUNC_6("attr/.gitignore");
 FUNC_1(!FUNC_4("attr/.gitignore"));
 FUNC_5("attr/.gitignore", 0777);
 FUNC_2("attr/.gitignore/garbage.txt", "new_file\n");

 FUNC_0(0, "File.txt");
 FUNC_0(1, "NewFolder");
 FUNC_0(1, "NewFolder/NewFolder");
 FUNC_0(1, "NewFolder/NewFolder/File.txt");
}
