
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shallow_info {int* ours; int* theirs; int nr_theirs; int nr_ours; struct oid_array* shallow; } ;
struct oid_array {int nr; int * oid; } ;
struct commit_graft {scalar_t__ nr_parent; } ;


 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct commit_graft* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct shallow_info*,int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*) ;
 int VAR_1 ;

void FUNC_5(struct shallow_info *VAR_2, struct oid_array *VAR_3)
{
 int VAR_4;
 FUNC_4(&VAR_1, "shallow: prepare_shallow_info\n");
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->shallow = VAR_3;
 if (!VAR_3)
  return;
 FUNC_0(VAR_2->ours, VAR_3->nr);
 FUNC_0(VAR_2->theirs, VAR_3->nr);
 for (VAR_4 = 0; VAR_4 < VAR_3->nr; VAR_4++) {
  if (FUNC_1(VAR_3->oid + VAR_4)) {
   struct commit_graft *VAR_5;
   VAR_5 = FUNC_2(VAR_0,
          &VAR_3->oid[VAR_4]);
   if (VAR_5 && VAR_5->nr_parent < 0)
    continue;
   VAR_2->ours[VAR_2->nr_ours++] = VAR_4;
  } else
   VAR_2->theirs[VAR_2->nr_theirs++] = VAR_4;
 }
}
