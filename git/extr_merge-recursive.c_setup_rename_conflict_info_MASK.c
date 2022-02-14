
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rename_conflict_info {int rename_type; struct rename* ren2; struct rename* ren1; } ;
struct rename {scalar_t__ branch; TYPE_1__* dst_entry; } ;
struct merge_options {scalar_t__ branch1; } ;
typedef enum rename_type { ____Placeholder_rename_type } rename_type ;
struct TYPE_2__ {struct rename_conflict_info* rename_conflict_info; scalar_t__ processed; } ;


 struct rename_conflict_info* FUNC_0 (int,int) ;

__attribute__((used)) static inline void FUNC_1(enum rename_type VAR_0,
           struct merge_options *VAR_1,
           struct rename *VAR_2,
           struct rename *VAR_3)
{
 struct rename_conflict_info *VAR_4;
 if (VAR_3 && VAR_2->branch != VAR_1->branch1) {
  FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
  return;
 }

 VAR_4 = FUNC_0(1, sizeof(struct rename_conflict_info));
 VAR_4->rename_type = VAR_0;
 VAR_4->ren1 = VAR_2;
 VAR_4->ren2 = VAR_3;

 VAR_4->ren1->dst_entry->processed = 0;
 VAR_4->ren1->dst_entry->rename_conflict_info = VAR_4;
 if (VAR_3) {
  VAR_4->ren2->dst_entry->rename_conflict_info = VAR_4;
 }
}
