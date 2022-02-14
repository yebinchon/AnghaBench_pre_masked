
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct merge_options {char* ancestor; TYPE_1__* repo; int branch2; int branch1; } ;
struct lock_file {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int FUNC_2 (struct merge_options*,int ,...) ;
 struct commit* FUNC_3 (TYPE_1__*,struct object_id const*,int ) ;
 int FUNC_4 (struct merge_options*,struct commit*,struct commit*,struct commit_list*,struct commit**) ;
 int FUNC_5 (struct object_id const*) ;
 int FUNC_6 (TYPE_1__*,struct lock_file*,int ) ;
 int FUNC_7 (struct lock_file*) ;
 scalar_t__ FUNC_8 (int ,struct lock_file*,int) ;

int FUNC_9(struct merge_options *VAR_4,
       const struct object_id *VAR_5,
       const struct object_id *VAR_6,
       int VAR_7,
       const struct object_id **VAR_8,
       struct commit **VAR_9)
{
 int VAR_10;
 struct lock_file VAR_11 = VAR_2;
 struct commit *VAR_12 = FUNC_3(VAR_4->repo, VAR_5, VAR_4->branch1);
 struct commit *VAR_13 = FUNC_3(VAR_4->repo, VAR_6, VAR_4->branch2);
 struct commit_list *VAR_14 = ((void*)0);

 if (VAR_8) {
  int VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15) {
   struct commit *VAR_16;
   if (!(VAR_16 = FUNC_3(VAR_4->repo, VAR_8[VAR_15],
          FUNC_5(VAR_8[VAR_15]))))
    return FUNC_2(VAR_4, FUNC_0("Could not parse object '%s'"),
        FUNC_5(VAR_8[VAR_15]));
   FUNC_1(VAR_16, &VAR_14);
  }
  if (VAR_7 == 1)
   VAR_4->ancestor = "constructed merge base";
 }

 FUNC_6(VAR_4->repo, &VAR_11, VAR_1);
 VAR_10 = FUNC_4(VAR_4, VAR_12, VAR_13, VAR_14,
    VAR_9);
 if (VAR_10 < 0) {
  FUNC_7(&VAR_11);
  return VAR_10;
 }

 if (FUNC_8(VAR_4->repo->index, &VAR_11,
          VAR_0 | VAR_3))
  return FUNC_2(VAR_4, FUNC_0("Unable to write index."));

 return VAR_10 ? 0 : 1;
}
