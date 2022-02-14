
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_1(
  "attr/.gitignore",
  "*.foo\n"
  "**.bar\n"
 );

 FUNC_0(1, ".foo");
 FUNC_0(1, "xyz.foo");
 FUNC_0(1, ".bar");
 FUNC_0(1, "x.bar");
 FUNC_0(1, "xyz.bar");

 FUNC_0(1, "test/.foo");
 FUNC_0(1, "test/x.foo");
 FUNC_0(1, "test/xyz.foo");
 FUNC_0(1, "test/.bar");
 FUNC_0(1, "test/x.bar");
 FUNC_0(1, "test/xyz.bar");
}
