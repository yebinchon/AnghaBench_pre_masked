
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_filebuf ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_11__ {int id_str; } ;
typedef TYPE_3__ git_annotated_commit ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_7(
 git_repository *VAR_5,
 const git_annotated_commit *VAR_6[],
 size_t VAR_7)
{
 git_filebuf VAR_8 = VAR_2;
 git_buf VAR_9 = VAR_0;
 size_t VAR_10;
 int VAR_11 = 0;

 FUNC_0(VAR_5 && VAR_6);

 if ((VAR_11 = FUNC_2(&VAR_9, VAR_5->gitdir, VAR_4)) < 0 ||
  (VAR_11 = FUNC_5(&VAR_8, VAR_9.ptr, VAR_1, VAR_3)) < 0)
  goto cleanup;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if ((VAR_11 = FUNC_6(&VAR_8, "%s\n", VAR_6[VAR_10]->id_str)) < 0)
   goto cleanup;
 }

 VAR_11 = FUNC_4(&VAR_8);

cleanup:
 if (VAR_11 < 0)
  FUNC_3(&VAR_8);

 FUNC_1(&VAR_9);

 return VAR_11;
}
