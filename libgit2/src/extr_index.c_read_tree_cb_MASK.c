
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int new_entries; int * old_entries; int entry_cmp; int index; } ;
typedef TYPE_1__ read_tree_data ;
struct TYPE_19__ {scalar_t__ attr; int filename; } ;
typedef TYPE_2__ git_tree_entry ;
struct TYPE_20__ {scalar_t__ mode; scalar_t__ flags_extended; int id; } ;
typedef TYPE_3__ git_index_entry ;
struct TYPE_21__ {int size; int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char const*,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (TYPE_2__ const*) ;
 TYPE_3__* FUNC_7 (int *,size_t) ;
 scalar_t__ FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__**,int ,int ,int *,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (size_t*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(
 const char *VAR_1, const git_tree_entry *VAR_2, void *VAR_3)
{
 read_tree_data *VAR_4 = VAR_3;
 git_index_entry *VAR_5 = ((void*)0), *VAR_6;
 git_buf VAR_7 = VAR_0;
 size_t VAR_8;

 if (FUNC_5(VAR_2))
  return 0;

 if (FUNC_2(&VAR_7, VAR_1, VAR_2->filename) < 0)
  return -1;

 if (FUNC_11(&VAR_5, FUNC_0(VAR_4->index), VAR_7.ptr, ((void*)0), 0) < 0)
  return -1;

 VAR_5->mode = VAR_2->attr;
 FUNC_3(&VAR_5->id, FUNC_6(VAR_2));


 if (VAR_4->old_entries != ((void*)0) &&
  !FUNC_13(
   &VAR_8, VAR_4->old_entries, VAR_4->entry_cmp, VAR_7.ptr, 0, 0) &&
  (VAR_6 = FUNC_7(VAR_4->old_entries, VAR_8)) != ((void*)0) &&
  VAR_5->mode == VAR_6->mode &&
  FUNC_4(&VAR_5->id, &VAR_6->id))
 {
  FUNC_10(VAR_5, VAR_6);
  VAR_5->flags_extended = 0;
 }

 FUNC_9(VAR_5, VAR_7.size);
 FUNC_1(&VAR_7);

 if (FUNC_8(VAR_4->new_entries, VAR_5) < 0) {
  FUNC_12(VAR_5);
  return -1;
 }

 return 0;
}
