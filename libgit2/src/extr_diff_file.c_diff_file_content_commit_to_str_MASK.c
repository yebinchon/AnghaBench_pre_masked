
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int oid ;
typedef int git_submodule ;
typedef int git_oid ;
struct TYPE_6__ {int data; int len; } ;
struct TYPE_7__ {int flags; TYPE_2__ map; TYPE_1__* file; int repo; } ;
typedef TYPE_3__ git_diff_file_content ;
typedef int git_buf ;
struct TYPE_5__ {int flags; int id; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,char*,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (char*,int,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (unsigned int*,int ,int ,int ) ;
 int * FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(
 git_diff_file_content *VAR_6, bool VAR_7)
{
 char VAR_8[VAR_4+1];
 git_buf VAR_9 = VAR_0;
 const char *VAR_10 = "";

 if (VAR_7) {
  int VAR_11 = 0;
  git_submodule *VAR_12 = ((void*)0);
  unsigned int VAR_13 = 0;
  const git_oid *VAR_14;

  if ((VAR_11 = FUNC_9(&VAR_12, VAR_6->repo, VAR_6->file->path)) < 0) {

   if (VAR_11 == VAR_3) {
    FUNC_4();
    VAR_11 = 0;
   }
   return VAR_11;
  }

  if ((VAR_11 = FUNC_10(&VAR_13, VAR_6->repo, VAR_6->file->path, VAR_5)) < 0) {
   FUNC_7(VAR_12);
   return VAR_11;
  }


  if ((VAR_6->file->flags & VAR_1) == 0 &&
   ((VAR_14 = FUNC_11(VAR_12)) != ((void*)0) ||
    (VAR_14 = FUNC_8(VAR_12)) != ((void*)0)))
  {
   FUNC_5(&VAR_6->file->id, VAR_14);
   VAR_6->file->flags |= VAR_1;
  }

  if (FUNC_0(VAR_13))
   VAR_10 = "-dirty";

  FUNC_7(VAR_12);
 }

 FUNC_6(VAR_8, sizeof(VAR_8), &VAR_6->file->id);
 if (FUNC_3(&VAR_9, "Subproject commit %s%s\n", VAR_8, VAR_10) < 0)
  return -1;

 VAR_6->map.len = FUNC_2(&VAR_9);
 VAR_6->map.data = FUNC_1(&VAR_9);
 VAR_6->flags |= VAR_2;

 return 0;
}
