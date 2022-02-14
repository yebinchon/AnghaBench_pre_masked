
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_oid ;
struct TYPE_12__ {scalar_t__ file_size; int mode; int id; int mtime; int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_13__ {scalar_t__ size; int mode; int id; } ;
typedef TYPE_2__ git_diff_file ;
struct TYPE_14__ {int diff; int respect_filemode; int index; int repo; } ;
typedef TYPE_3__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__ const*,int ,int *) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int **,int ,int ) ;
 scalar_t__ FUNC_9 (unsigned int*,int ,int ,int ) ;
 int * FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int *,TYPE_2__ const*,TYPE_2__ const*) ;

__attribute__((used)) static bool FUNC_13(
 checkout_data *VAR_2,
 const git_diff_file *VAR_3,
 const git_diff_file *VAR_4,
 const git_index_entry *VAR_5)
{
 git_oid VAR_6;
 const git_index_entry *VAR_7;


 if (VAR_5->mode == VAR_0) {
  git_submodule *VAR_8;
  unsigned int VAR_9 = 0;
  const git_oid *VAR_10 = ((void*)0);
  bool VAR_11 = 0;

  if (FUNC_8(&VAR_8, VAR_2->repo, VAR_5->path) < 0) {
   FUNC_3();
   return 1;
  }

  if (FUNC_9(&VAR_9, VAR_2->repo, VAR_5->path, VAR_1) < 0 ||
   FUNC_0(VAR_9))
   VAR_11 = 1;
  else if ((VAR_10 = FUNC_10(VAR_8)) == ((void*)0))
   VAR_11 = 0;
  else
   VAR_11 = (FUNC_6(&VAR_3->id, VAR_10) != 0);

  FUNC_7(VAR_8);
  return VAR_11;
 }
 VAR_7 = FUNC_4(VAR_2->index, VAR_5->path, 0);

 if (VAR_7 != ((void*)0) &&
  FUNC_5(&VAR_5->mtime, &VAR_7->mtime) &&
  VAR_5->file_size == VAR_7->file_size &&
  !FUNC_11(VAR_5->mode, VAR_7->mode, VAR_2->respect_filemode)) {


  return !FUNC_12(&VAR_7->id, VAR_3, VAR_4) ||
   FUNC_11(VAR_3->mode, VAR_7->mode, VAR_2->respect_filemode);
 }




 if (VAR_3->size && VAR_5->file_size != VAR_3->size)
  return 1;


 if (FUNC_1(VAR_5->mode))
  return 0;

 if (FUNC_11(VAR_3->mode, VAR_5->mode, VAR_2->respect_filemode))
  return 1;

 if (FUNC_2(&VAR_6, VAR_2->diff, VAR_5, VAR_5->mode, ((void*)0)) < 0)
  return 0;




 return !FUNC_12(&VAR_6, VAR_3, VAR_4);
}
