
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,char*) ;

void FUNC_2(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_1("foo", 0, "foo", ((void*)0));
 FUNC_1("foo/bar", 0, "foo/bar", ((void*)0));


 FUNC_1("/foo/bar", 4, "bar", "/foo");
 FUNC_1("/foo/bar/foobar", 4, "bar/foobar", "/foo");
 FUNC_1("c:/foo/bar/foobar", 6, "bar/foobar", "c:/foo");
 FUNC_1("c:/foo/bar/foobar", 10, "foobar", "c:/foo/bar");


 FUNC_1("/foo", 0, "/foo", "/asdf");
 FUNC_1("/foo/bar", 0, "/foo/bar", "/asdf");


 FUNC_1("c:/foo", 2, "c:/foo", "c:/asdf");
 FUNC_1("c:/foo/bar", 2, "c:/foo/bar", "c:/asdf");







 FUNC_1("/foo/\\bar", 4, "\\bar", "/foo");
 FUNC_1("c:/foo/\\bar", 7, "\\bar", "c:/foo/");



 FUNC_1("c:/foo/bar/foobar", 6, "c:/foo/bar/foobar", "c:/foo");
 FUNC_1("c:/foo/bar/foobar", 10, "c:/foo/bar/foobar", "c:/foo/bar");


 FUNC_1("c:/foo/bar/foobar", 6, "c:/foo/bar/foobar", "c:/foo/");

 FUNC_0(&VAR_1);
}
