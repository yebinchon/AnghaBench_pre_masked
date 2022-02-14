
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int git_oid ;
struct TYPE_13__ {scalar_t__ path; scalar_t__ file_size; int id; int mode; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_14__ {int tree; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int *,void const*,size_t) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__**,TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__**,int,int,int,int) ;
 int FUNC_11 (int ) ;

int FUNC_12(
    git_index *VAR_3, const git_index_entry *VAR_4,
    const void *VAR_5, size_t VAR_6)
{
 git_index_entry *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 git_oid VAR_9;

 FUNC_1(VAR_3 && VAR_4->path);

 if (FUNC_0(VAR_3) == ((void*)0))
  return FUNC_2(-1,
   "could not initialize index entry. "
   "Index is not backed up by an existing repository.");

 if (!FUNC_11(VAR_4->mode)) {
  FUNC_4(VAR_1, "invalid filemode");
  return -1;
 }

 if (VAR_6 > VAR_2) {
  FUNC_4(VAR_1, "buffer is too large");
  return -1;
 }

 if (FUNC_8(&VAR_7, VAR_3, VAR_4) < 0)
  return -1;

 VAR_8 = FUNC_3(&VAR_9, FUNC_0(VAR_3), VAR_5, VAR_6);
 if (VAR_8 < 0) {
  FUNC_9(VAR_7);
  return VAR_8;
 }

 FUNC_5(&VAR_7->id, &VAR_9);
 VAR_7->file_size = (uint32_t)VAR_6;

 if ((VAR_8 = FUNC_10(VAR_3, &VAR_7, 1, 1, 1, 1)) < 0)
  return VAR_8;


 if ((VAR_8 = FUNC_7(VAR_3, VAR_7->path)) < 0 && VAR_8 != VAR_0)
  return VAR_8;

 FUNC_6(VAR_3->tree, VAR_7->path);
 return 0;
}
