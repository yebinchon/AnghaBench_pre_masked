
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct blame_scoreboard {int no_whole_file_rename; struct repository* repo; int reverse; int copy_score; int move_score; int ignore_list; int num_commits; struct rev_info* revs; } ;
struct blame_origin {struct blame_entry* suspects; struct blame_origin* previous; int blob_oid; struct commit* commit; } ;
struct blame_entry {struct blame_entry* next; } ;
typedef int sg_buf ;


 int FUNC_0 (struct blame_origin**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct blame_entry* FUNC_1 (struct blame_entry*,struct blame_entry*) ;
 int FUNC_2 (struct blame_origin*) ;
 int FUNC_3 (struct blame_origin*) ;
 int FUNC_4 (struct blame_scoreboard*,struct blame_entry*) ;
 int FUNC_5 (struct blame_origin*) ;
 int FUNC_6 (struct blame_scoreboard*,struct blame_entry**,struct blame_entry**,int ) ;
 int FUNC_7 (struct blame_scoreboard*,struct blame_entry***,struct blame_entry**,struct blame_origin*,struct commit*,struct blame_origin*,int) ;
 int FUNC_8 (struct blame_scoreboard*,struct blame_entry***,struct blame_entry**,struct blame_origin*,struct blame_origin*) ;
 struct blame_origin* FUNC_9 (struct repository*,struct commit*,struct blame_origin*) ;
 struct blame_origin* FUNC_10 (struct repository*,struct commit*,struct blame_origin*) ;
 struct commit_list* FUNC_11 (struct rev_info*,struct commit*,int ) ;
 int FUNC_12 (struct blame_origin**) ;
 int FUNC_13 (struct blame_origin**,int ,int) ;
 int FUNC_14 (struct rev_info*,struct commit*,int ) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (struct commit*) ;
 int FUNC_18 (struct blame_scoreboard*,struct blame_origin*,struct blame_origin*,int) ;
 int FUNC_19 (struct blame_scoreboard*,struct blame_origin*,struct blame_origin*) ;
 struct blame_origin** FUNC_20 (int,int) ;

__attribute__((used)) static void FUNC_21(struct blame_scoreboard *VAR_3, struct blame_origin *VAR_4, int VAR_5)
{
 struct rev_info *VAR_6 = VAR_3->revs;
 int VAR_7, VAR_8, VAR_9;
 struct commit *VAR_10 = VAR_4->commit;
 struct commit_list *VAR_11;
 struct blame_origin *VAR_12[VAR_0];
 struct blame_origin *VAR_13, **VAR_14 = VAR_12;
 struct blame_entry *VAR_15 = ((void*)0);
 struct blame_entry *VAR_16, **VAR_17 = &VAR_16;

 VAR_9 = FUNC_14(VAR_6, VAR_10, VAR_3->reverse);
 if (!VAR_9)
  goto finish;
 else if (VAR_9 < FUNC_0(VAR_12))
  FUNC_13(VAR_12, 0, sizeof(VAR_12));
 else
  VAR_14 = FUNC_20(VAR_9, sizeof(*VAR_14));





 for (VAR_8 = 0; VAR_8 < 2 - VAR_3->no_whole_file_rename; VAR_8++) {
  struct blame_origin *(*VAR_18)(struct repository *, struct commit *, struct blame_origin *);
  VAR_18 = VAR_8 ? FUNC_10 : FUNC_9;

  for (VAR_7 = 0, VAR_11 = FUNC_11(VAR_6, VAR_10, VAR_3->reverse);
       VAR_7 < VAR_9 && VAR_11;
       VAR_11 = VAR_11->next, VAR_7++) {
   struct commit *VAR_19 = VAR_11->item;
   int VAR_20, VAR_21;

   if (VAR_14[VAR_7])
    continue;
   if (FUNC_17(VAR_19))
    continue;
   VAR_13 = VAR_18(VAR_3->repo, VAR_19, VAR_4);
   if (!VAR_13)
    continue;
   if (FUNC_15(&VAR_13->blob_oid, &VAR_4->blob_oid)) {
    FUNC_19(VAR_3, VAR_4, VAR_13);
    FUNC_2(VAR_13);
    goto finish;
   }
   for (VAR_20 = VAR_21 = 0; VAR_20 < VAR_7; VAR_20++)
    if (VAR_14[VAR_20] &&
        FUNC_15(&VAR_14[VAR_20]->blob_oid, &VAR_13->blob_oid)) {
     VAR_21 = 1;
     break;
    }
   if (!VAR_21)
    VAR_14[VAR_7] = VAR_13;
   else
    FUNC_2(VAR_13);
  }
 }

 VAR_3->num_commits++;
 for (VAR_7 = 0, VAR_11 = FUNC_11(VAR_6, VAR_10, VAR_3->reverse);
      VAR_7 < VAR_9 && VAR_11;
      VAR_11 = VAR_11->next, VAR_7++) {
  struct blame_origin *VAR_22 = VAR_14[VAR_7];
  if (!VAR_22)
   continue;
  if (!VAR_4->previous) {
   FUNC_3(VAR_22);
   VAR_4->previous = VAR_22;
  }
  FUNC_18(VAR_3, VAR_4, VAR_22, 0);
  if (!VAR_4->suspects)
   goto finish;
 }




 if (FUNC_16(&VAR_3->ignore_list, &VAR_10->object.oid)) {
  for (VAR_7 = 0, VAR_11 = FUNC_11(VAR_6, VAR_10, VAR_3->reverse);
       VAR_7 < VAR_9 && VAR_11;
       VAR_11 = VAR_11->next, VAR_7++) {
   struct blame_origin *VAR_23 = VAR_14[VAR_7];

   if (!VAR_23)
    continue;
   FUNC_18(VAR_3, VAR_4, VAR_23, 1);





   FUNC_5(VAR_23);
   if (!VAR_4->suspects)
    goto finish;
  }
 }




 if (VAR_5 & VAR_2) {
  FUNC_6(VAR_3, &VAR_15, &VAR_4->suspects, VAR_3->move_score);
  if (VAR_4->suspects) {
   for (VAR_7 = 0, VAR_11 = FUNC_11(VAR_6, VAR_10, VAR_3->reverse);
        VAR_7 < VAR_9 && VAR_11;
        VAR_11 = VAR_11->next, VAR_7++) {
    struct blame_origin *VAR_24 = VAR_14[VAR_7];
    if (!VAR_24)
     continue;
    FUNC_8(VAR_3, &VAR_17, &VAR_15, VAR_4, VAR_24);
    if (!VAR_4->suspects)
     break;
   }
  }
 }




 if (VAR_5 & VAR_1) {
  if (VAR_3->copy_score > VAR_3->move_score)
   FUNC_6(VAR_3, &VAR_15, &VAR_4->suspects, VAR_3->copy_score);
  else if (VAR_3->copy_score < VAR_3->move_score) {
   VAR_4->suspects = FUNC_1(VAR_4->suspects, VAR_15);
   VAR_15 = ((void*)0);
   FUNC_6(VAR_3, &VAR_15, &VAR_4->suspects, VAR_3->copy_score);
  }
  if (!VAR_4->suspects)
   goto finish;

  for (VAR_7 = 0, VAR_11 = FUNC_11(VAR_6, VAR_10, VAR_3->reverse);
       VAR_7 < VAR_9 && VAR_11;
       VAR_11 = VAR_11->next, VAR_7++) {
   struct blame_origin *VAR_25 = VAR_14[VAR_7];
   FUNC_7(VAR_3, &VAR_17, &VAR_15,
         VAR_4, VAR_11->item, VAR_25, VAR_5);
   if (!VAR_4->suspects)
    goto finish;
  }
 }

finish:
 *VAR_17 = ((void*)0);
 FUNC_4(VAR_3, VAR_16);






 if (VAR_15) {
  struct blame_entry **VAR_26 = &VAR_15;
  while (*VAR_26)
   VAR_26 = &(*VAR_26)->next;
  *VAR_26 = VAR_4->suspects;
  VAR_4->suspects = VAR_15;
 }
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  if (VAR_14[VAR_7]) {
   if (!VAR_14[VAR_7]->suspects)
    FUNC_5(VAR_14[VAR_7]);
   FUNC_2(VAR_14[VAR_7]);
  }
 }
 FUNC_5(VAR_4);
 if (VAR_12 != VAR_14)
  FUNC_12(VAR_14);
}
