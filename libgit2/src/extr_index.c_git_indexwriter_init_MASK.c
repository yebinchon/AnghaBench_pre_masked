
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int should_write; int file; TYPE_2__* index; } ;
typedef TYPE_1__ git_indexwriter ;
struct TYPE_7__ {int index_file_path; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ,int ,int ) ;

int FUNC_4(
 git_indexwriter *VAR_4,
 git_index *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5);

 VAR_4->index = VAR_5;

 if (!VAR_5->index_file_path)
  return FUNC_1(-1,
   "failed to write index: The index is in-memory only");

 if ((VAR_6 = FUNC_3(
  &VAR_4->file, VAR_5->index_file_path, VAR_2, VAR_3)) < 0) {

  if (VAR_6 == VAR_0)
   FUNC_2(VAR_1, "the index is locked; this might be due to a concurrent or crashed process");

  return VAR_6;
 }

 VAR_4->should_write = 1;

 return 0;
}
