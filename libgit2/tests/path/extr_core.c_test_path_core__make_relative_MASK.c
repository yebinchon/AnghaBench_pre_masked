
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,int ) ;

void FUNC_1(void)
{
 FUNC_0("foo.c", "/path/to/foo.c", "/path/to", 0);
 FUNC_0("bar/foo.c", "/path/to/bar/foo.c", "/path/to", 0);
 FUNC_0("foo.c", "/path/to/foo.c", "/path/to/", 0);

 FUNC_0("", "/path/to", "/path/to", 0);
 FUNC_0("", "/path/to", "/path/to/", 0);

 FUNC_0("../", "/path/to", "/path/to/foo", 0);

 FUNC_0("../foo.c", "/path/to/foo.c", "/path/to/bar", 0);
 FUNC_0("../bar/foo.c", "/path/to/bar/foo.c", "/path/to/baz", 0);

 FUNC_0("../../foo.c", "/path/to/foo.c", "/path/to/foo/bar", 0);
 FUNC_0("../../foo/bar.c", "/path/to/foo/bar.c", "/path/to/bar/foo", 0);

 FUNC_0("../../foo.c", "/foo.c", "/bar/foo", 0);

 FUNC_0("foo.c", "/path/to/foo.c", "/path/to/", 0);
 FUNC_0("../foo.c", "/path/to/foo.c", "/path/to/bar/", 0);

 FUNC_0("foo.c", "d:/path/to/foo.c", "d:/path/to", 0);

 FUNC_0("../foo", "/foo", "/bar", 0);
 FUNC_0("path/to/foo.c", "/path/to/foo.c", "/", 0);
 FUNC_0("../foo", "path/to/foo", "path/to/bar", 0);

 FUNC_0("/path/to/foo.c", "/path/to/foo.c", "d:/path/to", VAR_0);
 FUNC_0("d:/path/to/foo.c", "d:/path/to/foo.c", "/path/to", VAR_0);

 FUNC_0("/path/to/foo.c", "/path/to/foo.c", "not-a-rooted-path", VAR_0);
 FUNC_0("not-a-rooted-path", "not-a-rooted-path", "/path/to", VAR_0);

 FUNC_0("/path", "/path", "pathtofoo", VAR_0);
 FUNC_0("path", "path", "pathtofoo", VAR_0);
}
