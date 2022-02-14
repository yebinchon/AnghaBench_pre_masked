
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,char*) ;

void FUNC_4(void)
{
 struct {
  const char *path;
  int expected;
 } VAR_2[] = {

  { "file", 0 },
  { "ign", 1 },
  { "sub", 0 },
  { "sub/file", 0 },
  { "sub/ign", 1 },
  { "sub/ign/file", 1 },
  { "sub/ign/sub", 1 },
  { "sub/ign/sub/file", 1 },
  { "sub/sub", 0 },
  { "sub/sub/file", 0 },
  { "sub/sub/ign", 1 },
  { "sub/sub/sub", 0 },

  { "dir", 1 },
  { "dir/", 1 },
  { "sub/dir", 1 },
  { "sub/dir/", 1 },
  { "sub/dir/file", 1 },
  { "sub/sub/dir", 0 },
  { ((void*)0), 0 }
 }, *VAR_3;

 VAR_1 = FUNC_2("attr");

 for (VAR_3 = VAR_2; VAR_3->path != ((void*)0); VAR_3++)
  FUNC_0(VAR_3->expected, VAR_3->path);


 FUNC_1(FUNC_3(
  VAR_1, VAR_0, ".git/info/exclude"));
 FUNC_1(FUNC_3(
  VAR_1, VAR_0, ".gitignore"));
}
