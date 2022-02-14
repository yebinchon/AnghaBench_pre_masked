
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int,int) ;

void FUNC_1(void)
{
 FUNC_0("-adobe-courier-bold-o-normal--12-120-75-75-m-70-iso8859-1", "-*-*-*-*-*-*-12-*-*-*-m-*-*-*", 1, 1, 1, 1);
 FUNC_0("-adobe-courier-bold-o-normal--12-120-75-75-X-70-iso8859-1", "-*-*-*-*-*-*-12-*-*-*-m-*-*-*", 0, 0, 0, 0);
 FUNC_0("-adobe-courier-bold-o-normal--12-120-75-75-/-70-iso8859-1", "-*-*-*-*-*-*-12-*-*-*-m-*-*-*", 0, 0, 0, 0);
 FUNC_0("XXX/adobe/courier/bold/o/normal//12/120/75/75/m/70/iso8859/1", "XXX/*/*/*/*/*/*/12/*/*/*/m/*/*/*", 1, 1, 1, 1);
 FUNC_0("XXX/adobe/courier/bold/o/normal//12/120/75/75/X/70/iso8859/1", "XXX/*/*/*/*/*/*/12/*/*/*/m/*/*/*", 0, 0, 0, 0);
 FUNC_0("abcd/abcdefg/abcdefghijk/abcdefghijklmnop.txt", "**/*a*b*g*n*t", 1, 1, 1, 1);
 FUNC_0("abcd/abcdefg/abcdefghijk/abcdefghijklmnop.txtz", "**/*a*b*g*n*t", 0, 0, 0, 0);
 FUNC_0("foo", "*/*/*", 0, 0, 0, 0);
 FUNC_0("foo/bar", "*/*/*", 0, 0, 0, 0);
 FUNC_0("foo/bba/arr", "*/*/*", 1, 1, 1, 1);
 FUNC_0("foo/bb/aa/rr", "*/*/*", 0, 0, 1, 1);
 FUNC_0("foo/bb/aa/rr", "**/**/**", 1, 1, 1, 1);
 FUNC_0("abcXdefXghi", "*X*i", 1, 1, 1, 1);
 FUNC_0("ab/cXd/efXg/hi", "*X*i", 0, 0, 1, 1);
 FUNC_0("ab/cXd/efXg/hi", "*/*X*/*/*i", 1, 1, 1, 1);
 FUNC_0("ab/cXd/efXg/hi", "**/*X*/**/*i", 1, 1, 1, 1);
}
