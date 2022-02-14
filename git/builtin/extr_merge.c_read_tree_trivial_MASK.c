
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int head_idx; int update; int verbose_update; int trivial_merges_only; int merge; int fn; int * dst_index; int * src_index; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct object_id {int dummy; } ;
typedef int opts ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tree_desc*,int ,int ) ;
 int FUNC_2 (struct unpack_trees_options*,int ,int) ;
 int FUNC_3 (struct tree*) ;
 struct tree* FUNC_4 (struct object_id*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int,struct tree_desc*,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_6(struct object_id *VAR_4, struct object_id *VAR_5,
        struct object_id *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct tree *VAR_9[VAR_0];
 struct tree_desc VAR_10[VAR_0];
 struct unpack_trees_options VAR_11;

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.head_idx = 2;
 VAR_11.src_index = &VAR_2;
 VAR_11.dst_index = &VAR_2;
 VAR_11.update = 1;
 VAR_11.verbose_update = 1;
 VAR_11.trivial_merges_only = 1;
 VAR_11.merge = 1;
 VAR_9[VAR_8] = FUNC_4(VAR_4);
 if (!VAR_9[VAR_8++])
  return -1;
 VAR_9[VAR_8] = FUNC_4(VAR_5);
 if (!VAR_9[VAR_8++])
  return -1;
 VAR_9[VAR_8] = FUNC_4(VAR_6);
 if (!VAR_9[VAR_8++])
  return -1;
 VAR_11.fn = VAR_3;
 FUNC_0(&VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_3(VAR_9[VAR_7]);
  FUNC_1(VAR_10+VAR_7, VAR_9[VAR_7]->buffer, VAR_9[VAR_7]->size);
 }
 if (FUNC_5(VAR_8, VAR_10, &VAR_11))
  return -1;
 return 0;
}
