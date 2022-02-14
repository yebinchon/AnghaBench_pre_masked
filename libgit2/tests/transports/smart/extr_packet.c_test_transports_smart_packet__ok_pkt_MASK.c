
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 FUNC_1("0007ok\n");
 FUNC_0("0007ok ", "");
 FUNC_0("0008ok \n", "");
 FUNC_0("0008ok x", "x");
 FUNC_0("0009ok x\n", "x");
 FUNC_1("001OK ref/foo/bar");
 FUNC_0("0012ok ref/foo/bar", "ref/foo/bar");
 FUNC_1("0013OK ref/foo/bar\n");
 FUNC_0("0013ok ref/foo/bar\n", "ref/foo/bar");
}
