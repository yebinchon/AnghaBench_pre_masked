
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;

void FUNC_13(void)
{
 if (!FUNC_9(FUNC_5()))
  FUNC_4();

 FUNC_2(FUNC_6("a/b", 0777));
 FUNC_2(FUNC_6("dir-target", 0777));
 FUNC_1("dir-target/file", "Contents");
 FUNC_1("file-target", "Contents");
 FUNC_3(FUNC_11("dir-target", "a/symlink"));
 FUNC_3(FUNC_11("file-target", "a/b/symlink"));

 FUNC_2(FUNC_7("a", ((void*)0), VAR_0));

 FUNC_0(FUNC_8("dir-target"));
 FUNC_0(FUNC_8("file-target"));

 FUNC_3(FUNC_12("dir-target/file"));
 FUNC_3(FUNC_10("dir-target"));
 FUNC_3(FUNC_12("file-target"));
}
