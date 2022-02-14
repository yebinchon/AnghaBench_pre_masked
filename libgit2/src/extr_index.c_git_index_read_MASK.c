
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dirty; int stamp; int tree_pool; int * tree; int index_file_path; int on_disk; } ;
typedef TYPE_1__ git_index ;
typedef int git_futils_filestamp ;
struct TYPE_11__ {int size; int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;

int FUNC_11(git_index *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5;
 git_buf VAR_6 = VAR_0;
 git_futils_filestamp VAR_7 = VAR_2->stamp;

 if (!VAR_2->index_file_path)
  return FUNC_1(-1,
   "failed to read index: The index is in-memory only");

 VAR_2->on_disk = FUNC_8(VAR_2->index_file_path);

 if (!VAR_2->on_disk) {
  if (VAR_3 && (VAR_4 = FUNC_7(VAR_2)) < 0)
   return VAR_4;

  VAR_2->dirty = 0;
  return 0;
 }

 if ((VAR_5 = FUNC_4(&VAR_7, VAR_2->index_file_path) < 0) ||
     ((VAR_5 = FUNC_0(VAR_2)) < 0)) {
  FUNC_3(
   VAR_1,
   "failed to read index: '%s' no longer exists",
   VAR_2->index_file_path);
  return VAR_5;
 }

 if (!VAR_5 && !VAR_3)
  return 0;

 VAR_4 = FUNC_6(&VAR_6, VAR_2->index_file_path);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->tree = ((void*)0);
 FUNC_9(&VAR_2->tree_pool);

 VAR_4 = FUNC_7(VAR_2);

 if (!VAR_4)
  VAR_4 = FUNC_10(VAR_2, VAR_6.ptr, VAR_6.size);

 if (!VAR_4) {
  FUNC_5(&VAR_2->stamp, &VAR_7);
  VAR_2->dirty = 0;
 }

 FUNC_2(&VAR_6);
 return VAR_4;
}
