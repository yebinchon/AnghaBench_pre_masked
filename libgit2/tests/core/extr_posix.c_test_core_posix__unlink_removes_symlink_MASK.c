
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

void FUNC_12(void)
{
 if (!FUNC_8(FUNC_5()))
  FUNC_4();

 FUNC_1("file", "Dummy file.");
 FUNC_2(FUNC_6("dir", 0777, 0));

 FUNC_3(FUNC_10("file", "file-symlink"));
 FUNC_3(FUNC_10("dir", "dir-symlink"));

 FUNC_3(FUNC_11("file-symlink"));
 FUNC_3(FUNC_11("dir-symlink"));

 FUNC_0(FUNC_7("file"));
 FUNC_0(FUNC_7("dir"));

 FUNC_3(FUNC_11("file"));
 FUNC_3(FUNC_9("dir"));
}
