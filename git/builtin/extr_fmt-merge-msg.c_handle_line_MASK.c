
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {struct src_data* util; } ;
struct src_data {int head_status; int is_local_branch; int generic; int r_branch; int tag; int branch; int oid; } ;
struct origin_data {int head_status; int is_local_branch; int generic; int r_branch; int tag; int branch; int oid; } ;
struct object_id {int dummy; } ;
struct merge_parents {int dummy; } ;
struct TYPE_2__ {unsigned int hexsz; } ;


 int FUNC_0 (struct merge_parents*,struct object_id*,int *) ;
 int FUNC_1 (char*,struct object_id*) ;
 int FUNC_2 (struct src_data*) ;
 int FUNC_3 (int *,struct object_id*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char*,char const**) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 struct string_list_item* FUNC_7 (int *,char const*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char*,char*) ;
 TYPE_1__* VAR_2 ;
 struct string_list_item* FUNC_10 (int *,char*) ;
 void* FUNC_11 (int,int) ;
 char* FUNC_12 (char const*,int) ;
 char* FUNC_13 (char*,char const*,char*) ;

__attribute__((used)) static int FUNC_14(char *VAR_3, struct merge_parents *VAR_4)
{
 int VAR_5, VAR_6 = FUNC_8(VAR_3);
 struct origin_data *VAR_7;
 char *VAR_8;
 const char *VAR_9;
 struct src_data *VAR_10;
 struct string_list_item *VAR_11;
 int VAR_12 = 0;
 struct object_id VAR_13;
 const unsigned VAR_14 = VAR_2->hexsz;

 if (VAR_6 < VAR_14 + 3 || VAR_3[VAR_14] != '\t')
  return 1;

 if (FUNC_5(VAR_3 + VAR_14 + 1, "not-for-merge"))
  return 0;

 if (VAR_3[VAR_14 + 1] != '\t')
  return 2;

 VAR_5 = FUNC_1(VAR_3, &VAR_13);
 if (VAR_5)
  return 3;

 if (!FUNC_0(VAR_4, &VAR_13, ((void*)0)))
  return 0;

 VAR_7 = FUNC_11(1, sizeof(struct origin_data));
 FUNC_3(&VAR_7->oid, &VAR_13);

 if (VAR_3[VAR_6 - 1] == '\n')
  VAR_3[VAR_6 - 1] = 0;
 VAR_3 += VAR_14 + 2;






 VAR_8 = FUNC_9(VAR_3, " of ");
 if (VAR_8) {
  *VAR_8 = 0;
  VAR_8 += 4;
  VAR_12 = 0;
 } else {
  VAR_8 = VAR_3;
  VAR_12 = 1;
 }

 VAR_11 = FUNC_10(&VAR_1, VAR_8);
 if (!VAR_11) {
  VAR_11 = FUNC_7(&VAR_1, VAR_8);
  VAR_11->util = FUNC_11(1, sizeof(struct src_data));
  FUNC_2(VAR_11->util);
 }
 VAR_10 = VAR_11->util;

 if (VAR_12) {
  VAR_9 = VAR_8;
  VAR_10->head_status |= 1;
 } else if (FUNC_5(VAR_3, "branch ")) {
  VAR_7->is_local_branch = 1;
  VAR_9 = VAR_3 + 7;
  FUNC_7(&VAR_10->branch, VAR_9);
  VAR_10->head_status |= 2;
 } else if (FUNC_5(VAR_3, "tag ")) {
  VAR_9 = VAR_3;
  FUNC_7(&VAR_10->tag, VAR_9 + 4);
  VAR_10->head_status |= 2;
 } else if (FUNC_4(VAR_3, "remote-tracking branch ", &VAR_9)) {
  FUNC_7(&VAR_10->r_branch, VAR_9);
  VAR_10->head_status |= 2;
 } else {
  VAR_9 = VAR_8;
  FUNC_7(&VAR_10->generic, VAR_3);
  VAR_10->head_status |= 2;
 }

 if (!FUNC_6(".", VAR_8) || !FUNC_6(VAR_8, VAR_9)) {
  int VAR_15 = FUNC_8(VAR_9);
  if (VAR_9[0] == '\'' && VAR_9[VAR_15 - 1] == '\'')
   VAR_9 = FUNC_12(VAR_9 + 1, VAR_15 - 2);
 } else
  VAR_9 = FUNC_13("%s of %s", VAR_9, VAR_8);
 if (FUNC_6(".", VAR_8))
  VAR_7->is_local_branch = 0;
 FUNC_7(&VAR_0, VAR_9)->util = VAR_7;
 return 0;
}
