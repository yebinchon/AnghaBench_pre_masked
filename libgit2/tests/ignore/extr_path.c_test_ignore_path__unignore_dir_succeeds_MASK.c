
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_1("attr/.gitignore",
  "*.c\n"
  "!src/*.c\n");
 FUNC_0(0, "src/foo.c");
 FUNC_0(1, "src/foo/foo.c");
}
