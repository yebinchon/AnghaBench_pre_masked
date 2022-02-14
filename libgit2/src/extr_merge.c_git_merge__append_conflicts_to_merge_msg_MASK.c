
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
struct TYPE_11__ {char* path; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
typedef int git_filebuf ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (TYPE_2__ const*) ;
 size_t FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,char const*) ;

int FUNC_11(
 git_repository *VAR_5,
 git_index *VAR_6)
{
 git_filebuf VAR_7 = VAR_2;
 git_buf VAR_8 = VAR_0;
 const char *VAR_9 = ((void*)0);
 size_t VAR_10;
 int VAR_11;

 if (!FUNC_9(VAR_6))
  return 0;

 if ((VAR_11 = FUNC_1(&VAR_8, VAR_5->gitdir, VAR_4)) < 0 ||
  (VAR_11 = FUNC_4(&VAR_7, VAR_8.ptr, VAR_1, VAR_3)) < 0)
  goto cleanup;

 FUNC_5(&VAR_7, "\nConflicts:\n");

 for (VAR_10 = 0; VAR_10 < FUNC_7(VAR_6); VAR_10++) {
  const git_index_entry *VAR_12 = FUNC_8(VAR_6, VAR_10);

  if (!FUNC_6(VAR_12))
   continue;

  if (VAR_9 == ((void*)0) || FUNC_10(VAR_12->path, VAR_9) != 0)
   FUNC_5(&VAR_7, "\t%s\n", VAR_12->path);

  VAR_9 = VAR_12->path;
 }

 VAR_11 = FUNC_3(&VAR_7);

cleanup:
 if (VAR_11 < 0)
  FUNC_2(&VAR_7);

 FUNC_0(&VAR_8);

 return VAR_11;
}
