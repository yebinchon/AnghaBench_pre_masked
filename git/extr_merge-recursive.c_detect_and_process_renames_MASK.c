
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct string_list {int dummy; } ;
struct rename_info {int * merge_renames; int * head_renames; } ;
struct merge_options {scalar_t__ detect_directory_renames; int branch2; int branch1; TYPE_1__* priv; } ;
struct hashmap {int dummy; } ;
struct diff_queue_struct {int dummy; } ;
struct TYPE_2__ {int call_depth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hashmap*) ;
 struct diff_queue_struct* FUNC_1 (struct merge_options*,struct tree*,struct tree*) ;
 struct hashmap* FUNC_2 (struct diff_queue_struct*) ;
 void* FUNC_3 (struct merge_options*,int ,struct diff_queue_struct*,struct hashmap*,struct hashmap*,struct tree*,struct tree*,struct tree*,struct tree*,struct string_list*,int*) ;
 int FUNC_4 (struct merge_options*,struct hashmap*,struct tree*,struct hashmap*,struct tree*) ;
 int FUNC_5 (struct diff_queue_struct*,struct hashmap*) ;
 int FUNC_6 (struct merge_options*) ;
 int FUNC_7 (struct merge_options*,int *,int *) ;
 struct hashmap* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct merge_options *VAR_2,
          struct tree *VAR_3,
          struct tree *VAR_4,
          struct tree *VAR_5,
          struct string_list *VAR_6,
          struct rename_info *VAR_7)
{
 struct diff_queue_struct *VAR_8, *VAR_9;
 struct hashmap *VAR_10, *VAR_11;
 int VAR_12 = 1;

 VAR_7->head_renames = ((void*)0);
 VAR_7->merge_renames = ((void*)0);

 if (!FUNC_6(VAR_2))
  return 1;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_5);

 if ((VAR_2->detect_directory_renames == VAR_1) ||
     (VAR_2->detect_directory_renames == VAR_0 &&
      !VAR_2->priv->call_depth)) {
  VAR_10 = FUNC_2(VAR_8);
  VAR_11 = FUNC_2(VAR_9);

  FUNC_4(VAR_2,
       VAR_10, VAR_4,
       VAR_11, VAR_5);
 } else {
  VAR_10 = FUNC_8(sizeof(*VAR_10));
  VAR_11 = FUNC_8(sizeof(*VAR_11));
  FUNC_0(VAR_10);
  FUNC_0(VAR_11);
 }

 VAR_7->head_renames = FUNC_3(VAR_2, VAR_2->branch1, VAR_8,
     VAR_11, VAR_10, VAR_4,
     VAR_3, VAR_4, VAR_5, VAR_6,
     &VAR_12);
 if (VAR_12 < 0)
  goto cleanup;
 VAR_7->merge_renames = FUNC_3(VAR_2, VAR_2->branch2, VAR_9,
     VAR_10, VAR_11, VAR_5,
     VAR_3, VAR_4, VAR_5, VAR_6,
     &VAR_12);
 if (VAR_12 < 0)
  goto cleanup;
 VAR_12 &= FUNC_7(VAR_2, VAR_7->head_renames, VAR_7->merge_renames);

cleanup:





 FUNC_5(VAR_8, VAR_10);
 FUNC_5(VAR_9, VAR_11);

 return VAR_12;
}
