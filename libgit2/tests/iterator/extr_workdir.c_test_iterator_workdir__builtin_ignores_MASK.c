
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* start; char* end; int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_9__ {scalar_t__ mode; int path; } ;
typedef TYPE_2__ git_index_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char const*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__ const**,int *) ;
 int FUNC_7 (TYPE_2__ const**,int *) ;
 int FUNC_8 (TYPE_2__ const**,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int) ;

void FUNC_13(void)
{
 git_iterator *VAR_6;
 git_iterator_options VAR_7 = VAR_3;
 const git_index_entry *VAR_8;
 int VAR_9;
 static struct {
  const char *path;
  bool ignored;
 } VAR_10[] = {
  { "dir/", 1 },
  { "file", 0 },
  { "ign", 1 },
  { "macro_bad", 0 },
  { "macro_test", 0 },
  { "root_test1", 0 },
  { "root_test2", 0 },
  { "root_test3", 0 },
  { "root_test4.txt", 0 },
  { "sub/", 0 },
  { "sub/.gitattributes", 0 },
  { "sub/abc", 0 },
  { "sub/dir/", 1 },
  { "sub/file", 0 },
  { "sub/ign/", 1 },
  { "sub/sub/", 0 },
  { "sub/sub/.gitattributes", 0 },
  { "sub/sub/dir", 0 },
  { "sub/sub/file", 0 },
  { ((void*)0), 0 }
 };

 VAR_5 = FUNC_5("attr");

 FUNC_4(FUNC_12("attr/sub/sub/.git", 0777));
 FUNC_3("attr/sub/.git", "whatever");

 VAR_7.flags = VAR_2;
 VAR_7.start = "dir";
 VAR_7.end = "sub/sub/file";

 FUNC_4(FUNC_10(
  &VAR_6, VAR_5, ((void*)0), ((void*)0), &VAR_7));
 FUNC_4(FUNC_8(&VAR_8, VAR_6));

 for (VAR_9 = 0; VAR_8 != ((void*)0); ++VAR_9) {
  int VAR_11 = FUNC_9(VAR_6);

  FUNC_2(VAR_10[VAR_9].path, VAR_8->path);
  FUNC_1(VAR_11 == VAR_10[VAR_9].ignored, VAR_10[VAR_9].path);

  if (!VAR_11 &&
   (VAR_8->mode == VAR_1 ||
    VAR_8->mode == VAR_0))
  {

   FUNC_4(FUNC_7(&VAR_8, VAR_6));
  } else {
   int VAR_12 = FUNC_6(&VAR_8, VAR_6);
   FUNC_0(!VAR_12 || VAR_12 == VAR_4);
  }
 }

 FUNC_0(VAR_10[VAR_9].path == ((void*)0));

 FUNC_11(VAR_6);
}
