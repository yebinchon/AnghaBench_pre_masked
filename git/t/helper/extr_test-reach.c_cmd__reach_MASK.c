
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; int* buf; } ;
struct repository {int dummy; } ;
struct ref_filter {int with_commit_tag_algo; } ;
struct object_id {int dummy; } ;
struct object_array {int dummy; } ;
struct object {int dummy; } ;
struct contains_cache {int dummy; } ;
struct commit_list {TYPE_3__* item; struct commit_list* next; } ;
struct TYPE_4__ {int const flags; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_5__ {int flags; struct object_id oid; } ;
struct TYPE_6__ {TYPE_2__ object; } ;


 int FUNC_0 (struct commit**,int) ;
 int FUNC_1 (struct commit**,int,int) ;
 scalar_t__ VAR_0 ;
 struct object_array VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct object*,int *,struct object_array*) ;
 int FUNC_4 (struct commit_list*,struct commit_list*,int) ;
 int FUNC_5 (struct object_array*,int,int,int ,int ) ;
 int FUNC_6 (struct ref_filter*,struct commit*,struct commit_list*,struct contains_cache*) ;
 int FUNC_7 (struct commit*,struct commit_list**) ;
 struct object* FUNC_8 (struct object*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int) ;
 struct commit_list* FUNC_11 (struct commit*,int,struct commit**) ;
 scalar_t__ FUNC_12 (int*,struct object_id*) ;
 struct commit_list* FUNC_13 (struct commit**,int,struct commit**,int,int const) ;
 int FUNC_14 (struct commit*,struct commit*) ;
 int FUNC_15 (struct contains_cache*) ;
 int FUNC_16 (struct commit*,struct commit_list*) ;
 struct commit* FUNC_17 (struct repository*,struct object*,int ,int ) ;
 int FUNC_18 (struct object_id*) ;
 int FUNC_19 (struct object_id*,struct object_id*) ;
 struct object* FUNC_20 (struct repository*,struct object_id*) ;
 int FUNC_21 (struct commit_list*) ;
 int FUNC_22 (char*,...) ;
 struct commit_list* FUNC_23 (struct commit_list*) ;
 int FUNC_24 (struct object_id*,struct object_id*) ;
 int FUNC_25 () ;
 int VAR_4 ;
 scalar_t__ FUNC_26 (struct strbuf*,int ) ;
 int FUNC_27 (struct strbuf*) ;
 int FUNC_28 (char const*,char*) ;
 struct repository* VAR_5 ;

int FUNC_29(int VAR_6, const char **VAR_7)
{
 struct object_id VAR_8, VAR_9;
 struct commit *VAR_10, *VAR_11;
 struct commit_list *VAR_12, *VAR_13;
 struct object_array VAR_14 = VAR_1;
 struct commit **VAR_15, **VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 struct strbuf VAR_21 = VAR_3;
 struct repository *VAR_22 = VAR_5;

 FUNC_25();

 if (VAR_6 < 2)
  FUNC_10(1);

 VAR_10 = VAR_11 = ((void*)0);
 VAR_12 = VAR_13 = ((void*)0);
 VAR_17 = VAR_19 = 0;
 VAR_18 = VAR_20 = 16;
 FUNC_0(VAR_15, VAR_18);
 FUNC_0(VAR_16, VAR_20);

 while (FUNC_26(&VAR_21, VAR_4) != VAR_0) {
  struct object_id VAR_23;
  struct object *VAR_24;
  struct object *VAR_25;
  struct commit *VAR_26;
  if (VAR_21.len < 3)
   continue;

  if (FUNC_12(VAR_21.buf + 2, &VAR_23))
   FUNC_9("failed to resolve %s", VAR_21.buf + 2);

  VAR_24 = FUNC_20(VAR_22, &VAR_23);
  VAR_25 = FUNC_8(VAR_24);

  if (!VAR_25)
   FUNC_9("failed to load commit for input %s resulting in oid %s\n",
       VAR_21.buf, FUNC_18(&VAR_23));

  VAR_26 = FUNC_17(VAR_22, VAR_25, VAR_2, 0);

  if (!VAR_26)
   FUNC_9("failed to load commit for input %s resulting in oid %s\n",
       VAR_21.buf, FUNC_18(&VAR_23));

  switch (VAR_21.buf[0]) {
   case 'A':
    FUNC_19(&VAR_8, &VAR_23);
    VAR_10 = VAR_26;
    break;

   case 'B':
    FUNC_19(&VAR_9, &VAR_23);
    VAR_11 = VAR_26;
    break;

   case 'X':
    FUNC_7(VAR_26, &VAR_12);
    FUNC_1(VAR_15, VAR_17 + 1, VAR_18);
    VAR_15[VAR_17++] = VAR_26;
    FUNC_3(VAR_24, ((void*)0), &VAR_14);
    break;

   case 'Y':
    FUNC_7(VAR_26, &VAR_13);
    FUNC_1(VAR_16, VAR_19 + 1, VAR_20);
    VAR_16[VAR_19++] = VAR_26;
    break;

   default:
    FUNC_9("unexpected start of line: %c", VAR_21.buf[0]);
  }
 }
 FUNC_27(&VAR_21);

 if (!FUNC_28(VAR_7[1], "ref_newer"))
  FUNC_22("%s(A,B):%d\n", VAR_7[1], FUNC_24(&VAR_8, &VAR_9));
 else if (!FUNC_28(VAR_7[1], "in_merge_bases"))
  FUNC_22("%s(A,B):%d\n", VAR_7[1], FUNC_14(VAR_10, VAR_11));
 else if (!FUNC_28(VAR_7[1], "is_descendant_of"))
  FUNC_22("%s(A,X):%d\n", VAR_7[1], FUNC_16(VAR_10, VAR_12));
 else if (!FUNC_28(VAR_7[1], "get_merge_bases_many")) {
  struct commit_list *VAR_27 = FUNC_11(VAR_10, VAR_17, VAR_15);
  FUNC_22("%s(A,X):\n", VAR_7[1]);
  FUNC_21(VAR_27);
 } else if (!FUNC_28(VAR_7[1], "reduce_heads")) {
  struct commit_list *VAR_28 = FUNC_23(VAR_12);
  FUNC_22("%s(X):\n", VAR_7[1]);
  FUNC_21(VAR_28);
 } else if (!FUNC_28(VAR_7[1], "can_all_from_reach")) {
  FUNC_22("%s(X,Y):%d\n", VAR_7[1], FUNC_4(VAR_12, VAR_13, 1));
 } else if (!FUNC_28(VAR_7[1], "can_all_from_reach_with_flag")) {
  struct commit_list *VAR_29 = VAR_13;

  while (VAR_29) {
   VAR_29->item->object.flags |= 2;
   VAR_29 = VAR_29->next;
  }

  FUNC_22("%s(X,_,_,0,0):%d\n", VAR_7[1], FUNC_5(&VAR_14, 2, 4, 0, 0));
 } else if (!FUNC_28(VAR_7[1], "commit_contains")) {
  struct ref_filter VAR_30;
  struct contains_cache VAR_31;
  FUNC_15(&VAR_31);

  if (VAR_6 > 2 && !FUNC_28(VAR_7[2], "--tag"))
   VAR_30.with_commit_tag_algo = 1;
  else
   VAR_30.with_commit_tag_algo = 0;

  FUNC_22("%s(_,A,X,_):%d\n", VAR_7[1], FUNC_6(&VAR_30, VAR_10, VAR_12, &VAR_31));
 } else if (!FUNC_28(VAR_7[1], "get_reachable_subset")) {
  const int VAR_32 = 1;
  int VAR_33, VAR_34 = 0;
  struct commit_list *VAR_35;
  struct commit_list *VAR_36 = FUNC_13(VAR_15, VAR_17,
        VAR_16, VAR_19,
        VAR_32);
  FUNC_22("get_reachable_subset(X,Y)\n");
  for (VAR_35 = VAR_36; VAR_35; VAR_35 = VAR_35->next) {
   if (!(VAR_36->item->object.flags & VAR_32))
    FUNC_9(FUNC_2("commit %s is not marked reachable"),
        FUNC_18(&VAR_36->item->object.oid));
   VAR_34++;
  }
  for (VAR_33 = 0; VAR_33 < VAR_19; VAR_33++) {
   if (VAR_16[VAR_33]->object.flags & VAR_32)
    VAR_34--;
  }

  if (VAR_34 < 0)
   FUNC_9(FUNC_2("too many commits marked reachable"));

  FUNC_21(VAR_36);
 }

 FUNC_10(0);
}
