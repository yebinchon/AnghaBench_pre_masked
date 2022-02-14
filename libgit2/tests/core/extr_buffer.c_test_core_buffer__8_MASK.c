
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char*,char*,char*,char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char,int,char*) ;
 scalar_t__ FUNC_9 (int *) ;

void FUNC_10(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_8(&VAR_1, '/', 1, "foo");
 FUNC_4(FUNC_9(&VAR_1) == 0);
 FUNC_5("foo", FUNC_6(&VAR_1));

 FUNC_8(&VAR_1, '/', 1, "bar");
 FUNC_4(FUNC_9(&VAR_1) == 0);
 FUNC_5("foo/bar", FUNC_6(&VAR_1));

 FUNC_8(&VAR_1, '/', 1, "baz");
 FUNC_4(FUNC_9(&VAR_1) == 0);
 FUNC_5("foo/bar/baz", FUNC_6(&VAR_1));

 FUNC_7(&VAR_1);

 FUNC_0(((void*)0), "", "");
 FUNC_0(((void*)0), "a", "a");
 FUNC_0(((void*)0), "/a", "/a");
 FUNC_0("", "", "");
 FUNC_0("", "a", "a");
 FUNC_0("", "/a", "/a");
 FUNC_0("a", "", "a/");
 FUNC_0("a", "/", "a/");
 FUNC_0("a", "b", "a/b");
 FUNC_0("/", "a", "/a");
 FUNC_0("/", "", "/");
 FUNC_0("/a", "/b", "/a/b");
 FUNC_0("/a", "/b/", "/a/b/");
 FUNC_0("/a/", "b/", "/a/b/");
 FUNC_0("/a/", "/b/", "/a/b/");
 FUNC_0("/a/", "//b/", "/a/b/");
 FUNC_0("/abcd", "/defg", "/abcd/defg");
 FUNC_0("/abcd", "/defg/", "/abcd/defg/");
 FUNC_0("/abcd/", "defg/", "/abcd/defg/");
 FUNC_0("/abcd/", "/defg/", "/abcd/defg/");

 FUNC_3("abcd", 0, "efg", "abcd/efg");
 FUNC_3("abcd", 1, "efg", "bcd/efg");
 FUNC_3("abcd", 2, "efg", "cd/efg");
 FUNC_3("abcd", 3, "efg", "d/efg");
 FUNC_3("abcd", 4, "efg", "efg");
 FUNC_3("abc/", 2, "efg", "c/efg");
 FUNC_3("abc/", 3, "efg", "/efg");
 FUNC_3("abc/", 4, "efg", "efg");
 FUNC_3("abcd", 3, "", "d/");
 FUNC_3("abcd", 4, "", "");
 FUNC_3("abc/", 2, "", "c/");
 FUNC_3("abc/", 3, "", "/");
 FUNC_3("abc/", 4, "", "");

 FUNC_1("", "", "");
 FUNC_1("", "a", "a");
 FUNC_1("", "/a", "/a");
 FUNC_1("a", "", "a/");
 FUNC_1("a", "/", "a/");
 FUNC_1("a", "b", "a/b");
 FUNC_1("/", "a", "/a");
 FUNC_1("/", "", "/");
 FUNC_1("/a", "/b", "/a/b");
 FUNC_1("/a", "/b/", "/a/b/");
 FUNC_1("/a/", "b/", "/a/b/");
 FUNC_1("/a/", "/b/", "/a/b/");
 FUNC_1("/abcd", "/defg", "/abcd/defg");
 FUNC_1("/abcd", "/defg/", "/abcd/defg/");
 FUNC_1("/abcd/", "defg/", "/abcd/defg/");
 FUNC_1("/abcd/", "/defg/", "/abcd/defg/");

 FUNC_2("", "", "", "", "");
 FUNC_2("", "a", "", "", "a;");
 FUNC_2("a", "", "", "", "a;");
 FUNC_2("", "", "", "a", "a");
 FUNC_2("a", "b", "", ";c;d;", "a;b;c;d;");
 FUNC_2("a", "b", "", ";c;d", "a;b;c;d");
 FUNC_2("abcd", "efgh", "ijkl", "mnop", "abcd;efgh;ijkl;mnop");
 FUNC_2("abcd;", "efgh;", "ijkl;", "mnop;", "abcd;efgh;ijkl;mnop;");
 FUNC_2(";abcd;", ";efgh;", ";ijkl;", ";mnop;", ";abcd;efgh;ijkl;mnop;");
}
