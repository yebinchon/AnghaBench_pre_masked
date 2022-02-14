
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {int head_idx; int index_only; int merge; int fn; int * dst_index; int * src_index; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef int opts ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct tree_desc*,int ,int ) ;
 int FUNC_5 (struct unpack_trees_options*,int ,int) ;
 int VAR_0 ;
 int FUNC_6 (struct tree*) ;
 struct tree* FUNC_7 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int,struct tree_desc*,struct unpack_trees_options*) ;

__attribute__((used)) static void FUNC_9(const struct commit *VAR_2)
{
 struct tree *VAR_3;
 struct unpack_trees_options VAR_4;
 struct tree_desc VAR_5;

 if (!VAR_2) {
  FUNC_2();
  return;
 }

 FUNC_5(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.head_idx = 1;
 VAR_4.index_only = 1;
 VAR_4.merge = 1;
 VAR_4.src_index = &VAR_1;
 VAR_4.dst_index = &VAR_1;

 VAR_4.fn = VAR_0;
 VAR_3 = FUNC_7(&VAR_2->object.oid);
 if (!VAR_3)
  FUNC_1(FUNC_0("failed to unpack HEAD tree object"));
 FUNC_6(VAR_3);
 FUNC_4(&VAR_5, VAR_3->buffer, VAR_3->size);
 if (FUNC_8(1, &VAR_5, &VAR_4))
  FUNC_3(128);
}
