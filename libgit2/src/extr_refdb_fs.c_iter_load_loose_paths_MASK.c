
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {char* glob; int loose; int pool; } ;
typedef TYPE_1__ refdb_fs_iter ;
struct TYPE_20__ {int commonpath; int iterator_flags; } ;
typedef TYPE_2__ refdb_fs_backend ;
struct TYPE_21__ {int flags; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_22__ {int path; } ;
typedef TYPE_4__ git_index_entry ;
struct TYPE_23__ {int ptr; } ;
typedef TYPE_5__ git_buf ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,char*,int ) ;
 int FUNC_4 (TYPE_5__*,char const*,size_t) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,char const*) ;
 int FUNC_7 (TYPE_5__*,size_t) ;
 int FUNC_8 (TYPE_4__ const**,int *) ;
 int FUNC_9 (int **,int ,TYPE_3__*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *,char*) ;
 size_t FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_15(refdb_fs_backend *VAR_4, refdb_fs_iter *VAR_5)
{
 int VAR_6 = 0;
 git_buf VAR_7 = VAR_0;
 git_iterator *VAR_8 = ((void*)0);
 git_iterator_options VAR_9 = VAR_2;
 const git_index_entry *VAR_10 = ((void*)0);
 const char *VAR_11 = VAR_3;
 size_t VAR_12 = FUNC_13(VAR_11);

 if (!VAR_4->commonpath)
  return 0;

 VAR_9.flags = VAR_4->iterator_flags;

 if (VAR_5->glob) {
  const char *VAR_13 = ((void*)0);
  const char *VAR_14;
  for (VAR_14 = VAR_5->glob; *VAR_14; ++VAR_14) {
   switch (*VAR_14) {
   case '?':
   case '*':
   case '[':
   case '\\':
    break;
   case '/':
    VAR_13 = VAR_14;

   default:
    continue;
   }
   break;
  }
  if (VAR_13) {
   VAR_11 = VAR_5->glob;
   VAR_12 = (VAR_13 - VAR_11) + 1;
  }
 }

 if ((VAR_6 = FUNC_3(&VAR_7, "%s/", VAR_4->commonpath)) < 0 ||
  (VAR_6 = FUNC_4(&VAR_7, VAR_11, VAR_12)) < 0) {
  FUNC_2(&VAR_7);
  return VAR_6;
 }

 if ((VAR_6 = FUNC_9(&VAR_8, VAR_7.ptr, &VAR_9)) < 0) {
  FUNC_2(&VAR_7);
  return (VAR_5->glob && VAR_6 == VAR_1)? 0 : VAR_6;
 }

 VAR_6 = FUNC_6(&VAR_7, VAR_11);

 while (!VAR_6 && !FUNC_8(&VAR_10, VAR_8)) {
  const char *VAR_15;
  char *VAR_16;

  FUNC_7(&VAR_7, VAR_12);
  FUNC_5(&VAR_7, VAR_10->path);
  VAR_15 = FUNC_1(&VAR_7);

  if (FUNC_0(VAR_15, ".lock") == 0 ||
   (VAR_5->glob && FUNC_14(VAR_5->glob, VAR_15, 0) != 0))
   continue;

  VAR_16 = FUNC_11(&VAR_5->pool, VAR_15);
  if (!VAR_16)
   VAR_6 = -1;
  else
   VAR_6 = FUNC_12(&VAR_5->loose, VAR_16);
 }

 FUNC_10(VAR_8);
 FUNC_2(&VAR_7);

 return VAR_6;
}
