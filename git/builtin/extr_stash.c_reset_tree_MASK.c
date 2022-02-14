
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int head_idx; int merge; int reset; int update; int fn; int * dst_index; int * src_index; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
typedef int opts ;


 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lock_file*,int ) ;
 int FUNC_3 (struct tree_desc*,int ,int ) ;
 int FUNC_4 (struct unpack_trees_options*,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct tree*) ;
 struct tree* FUNC_6 (struct object_id*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int,struct tree_desc*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_10 (int *,struct lock_file*,int ) ;

__attribute__((used)) static int FUNC_11(struct object_id *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = 1;
 struct unpack_trees_options VAR_11;
 struct tree_desc VAR_12[VAR_3];
 struct tree *VAR_13;
 struct lock_file VAR_14 = VAR_2;

 FUNC_7(((void*)0));
 if (FUNC_8(VAR_4))
  return -1;

 FUNC_2(&VAR_14, VAR_1);

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));

 VAR_13 = FUNC_6(VAR_7);
 if (FUNC_5(VAR_13))
  return -1;

 FUNC_3(VAR_12, VAR_13->buffer, VAR_13->size);

 VAR_11.head_idx = 1;
 VAR_11.src_index = &VAR_6;
 VAR_11.dst_index = &VAR_6;
 VAR_11.merge = 1;
 VAR_11.reset = VAR_9;
 VAR_11.update = VAR_8;
 VAR_11.fn = VAR_5;

 if (FUNC_9(VAR_10, VAR_12, &VAR_11))
  return -1;

 if (FUNC_10(&VAR_6, &VAR_14, VAR_0))
  return FUNC_1(FUNC_0("unable to write new index file"));

 return 0;
}
