
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int file; } ;
struct TYPE_4__ {int nr; struct object_array_entry* objects; } ;
struct rev_info {int max_parents; TYPE_3__ diffopt; TYPE_1__ pending; } ;
struct patch_ids {int dummy; } ;
struct option {int dummy; } ;
struct object_array_entry {TYPE_2__* item; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {int dummy; } ;
struct branch {int dummy; } ;
struct TYPE_5__ {int oid; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int*) ;
 struct option FUNC_3 (int*,int ) ;
 int VAR_0 ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,struct rev_info*,int ) ;
 struct branch* FUNC_6 (int *) ;
 char* FUNC_7 (struct branch*,int *) ;
 int VAR_1 ;
 int FUNC_8 (struct commit*,struct commit_list**) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct patch_ids*) ;
 int FUNC_12 (struct rev_info*,struct patch_ids*) ;
 struct commit* FUNC_13 (struct rev_info*) ;
 scalar_t__ FUNC_14 (struct commit*,struct patch_ids*) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (int,char const**,char const*,struct option*,int ,int ) ;
 scalar_t__ FUNC_17 (struct rev_info*) ;
 int FUNC_18 (char,struct commit*,int,int,int ) ;
 int FUNC_19 (int ,struct rev_info*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_20 (int ,struct option*) ;

int FUNC_21(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 struct rev_info VAR_7;
 struct patch_ids VAR_8;
 struct commit *VAR_9;
 struct commit_list *VAR_10 = ((void*)0);
 struct branch *VAR_11;
 const char *VAR_12;
 const char *VAR_13 = "HEAD";
 const char *VAR_14 = ((void*)0);
 int VAR_15 = 0, VAR_16 = 0;

 struct option VAR_17[] = {
  FUNC_2(&VAR_16),
  FUNC_3(&VAR_15, FUNC_0("be verbose")),
  FUNC_1()
 };

 VAR_4 = FUNC_16(VAR_4, VAR_5, VAR_6, VAR_17, VAR_1, 0);

 switch (VAR_4) {
 case 3:
  VAR_14 = VAR_5[2];

 case 2:
  VAR_13 = VAR_5[1];

 case 1:
  VAR_12 = VAR_5[0];
  break;
 default:
  VAR_11 = FUNC_6(((void*)0));
  VAR_12 = FUNC_7(VAR_11, ((void*)0));
  if (!VAR_12) {
   FUNC_10(VAR_2, "%s", FUNC_4("Could not find a tracked"
     " remote branch, please"
     " specify <upstream> manually.\n"));
   FUNC_20(VAR_1, VAR_17);
  }
 }

 FUNC_19(VAR_3, &VAR_7, VAR_6);
 VAR_7.max_parents = 1;

 if (FUNC_5(VAR_13, &VAR_7, 0))
  FUNC_9(FUNC_4("unknown commit %s"), VAR_13);
 if (FUNC_5(VAR_12, &VAR_7, VAR_0))
  FUNC_9(FUNC_4("unknown commit %s"), VAR_12);


 if (VAR_7.pending.nr == 2) {
  struct object_array_entry *VAR_18 = VAR_7.pending.objects;
  if (FUNC_15(&VAR_18[0].item->oid, &VAR_18[1].item->oid))
   return 0;
 }

 FUNC_12(&VAR_7, &VAR_8);

 if (VAR_14 && FUNC_5(VAR_14, &VAR_7, VAR_0))
  FUNC_9(FUNC_4("unknown commit %s"), VAR_14);


 if (FUNC_17(&VAR_7))
  FUNC_9(FUNC_4("revision walk setup failed"));
 while ((VAR_9 = FUNC_13(&VAR_7)) != ((void*)0)) {
  FUNC_8(VAR_9, &VAR_10);
 }

 while (VAR_10) {
  char VAR_19 = '+';

  VAR_9 = VAR_10->item;
  if (FUNC_14(VAR_9, &VAR_8))
   VAR_19 = '-';
  FUNC_18(VAR_19, VAR_9, VAR_15, VAR_16, VAR_7.diffopt.file);
  VAR_10 = VAR_10->next;
 }

 FUNC_11(&VAR_8);
 return 0;
}
