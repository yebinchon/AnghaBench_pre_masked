
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int member_0; } ;
struct TYPE_11__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
struct TYPE_12__ {TYPE_5__* index; int file; int should_write; } ;
typedef TYPE_3__ git_indexwriter ;
struct TYPE_13__ {int on_disk; int checksum; scalar_t__ dirty; int index_file_path; int stamp; int reuc; int entries; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_5__*,int *) ;

int FUNC_8(git_indexwriter *VAR_1)
{
 int VAR_2;
 git_oid VAR_3 = {{ 0 }};

 if (!VAR_1->should_write)
  return 0;

 FUNC_6(&VAR_1->index->entries);
 FUNC_6(&VAR_1->index->reuc);

 if ((VAR_2 = FUNC_7(&VAR_3, VAR_1->index, &VAR_1->file)) < 0) {
  FUNC_4(VAR_1);
  return VAR_2;
 }

 if ((VAR_2 = FUNC_1(&VAR_1->file)) < 0)
  return VAR_2;

 if ((VAR_2 = FUNC_2(
  &VAR_1->index->stamp, VAR_1->index->index_file_path)) < 0) {
  FUNC_0(VAR_0, "could not read index timestamp");
  return -1;
 }

 VAR_1->index->dirty = 0;
 VAR_1->index->on_disk = 1;
 FUNC_5(&VAR_1->index->checksum, &VAR_3);

 FUNC_3(VAR_1->index);
 VAR_1->index = ((void*)0);

 return 0;
}
