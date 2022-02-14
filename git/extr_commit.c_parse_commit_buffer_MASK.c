
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit_graft {scalar_t__ nr_parent; struct object_id* parent; } ;
struct TYPE_4__ {int parsed; int oid; } ;
struct commit {int date; TYPE_1__ object; struct commit_list* parents; } ;
struct TYPE_6__ {struct commit_list* next; } ;
struct TYPE_5__ {int hexsz; } ;


 TYPE_3__* FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct repository*,struct commit*) ;
 struct commit* FUNC_4 (struct repository*,struct object_id*) ;
 struct commit_graft* FUNC_5 (struct repository*,int *) ;
 int FUNC_6 (struct repository*,struct object_id*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,char const*) ;
 int FUNC_10 (struct commit*,int ) ;
 TYPE_2__* VAR_1 ;

int FUNC_11(struct repository *VAR_2, struct commit *VAR_3, const void *VAR_4, unsigned long VAR_5, int VAR_6)
{
 const char *VAR_7 = VAR_4;
 const char *VAR_8 = VAR_4;
 struct object_id VAR_9;
 struct commit_list **VAR_10;
 struct commit_graft *VAR_11;
 const int VAR_12 = VAR_1->hexsz + 5;
 const int VAR_13 = VAR_1->hexsz + 7;

 if (VAR_3->object.parsed)
  return 0;
 VAR_3->object.parsed = 1;
 VAR_7 += VAR_5;
 if (VAR_7 <= VAR_8 + VAR_12 + 1 || FUNC_7(VAR_8, "tree ", 5) ||
   VAR_8[VAR_12] != '\n')
  return FUNC_1("bogus commit object %s", FUNC_8(&VAR_3->object.oid));
 if (FUNC_2(VAR_8 + 5, &VAR_9) < 0)
  return FUNC_1("bad tree pointer in commit %s",
        FUNC_8(&VAR_3->object.oid));
 FUNC_10(VAR_3, FUNC_6(VAR_2, &VAR_9));
 VAR_8 += VAR_12 + 1;
 VAR_10 = &VAR_3->parents;

 VAR_11 = FUNC_5(VAR_2, &VAR_3->object.oid);
 while (VAR_8 + VAR_13 < VAR_7 && !FUNC_7(VAR_8, "parent ", 7)) {
  struct commit *VAR_14;

  if (VAR_7 <= VAR_8 + VAR_13 + 1 ||
      FUNC_2(VAR_8 + 7, &VAR_9) ||
      VAR_8[VAR_13] != '\n')
   return FUNC_1("bad parents in commit %s", FUNC_8(&VAR_3->object.oid));
  VAR_8 += VAR_13 + 1;




  if (VAR_11 && (VAR_11->nr_parent < 0 || VAR_0))
   continue;
  VAR_14 = FUNC_4(VAR_2, &VAR_9);
  if (VAR_14)
   VAR_10 = &FUNC_0(VAR_14, VAR_10)->next;
 }
 if (VAR_11) {
  int VAR_15;
  struct commit *VAR_16;
  for (VAR_15 = 0; VAR_15 < VAR_11->nr_parent; VAR_15++) {
   VAR_16 = FUNC_4(VAR_2,
         &VAR_11->parent[VAR_15]);
   if (!VAR_16)
    continue;
   VAR_10 = &FUNC_0(VAR_16, VAR_10)->next;
  }
 }
 VAR_3->date = FUNC_9(VAR_8, VAR_7);

 if (VAR_6)
  FUNC_3(VAR_2, VAR_3);

 return 0;
}
