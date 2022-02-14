
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dmar_unit {int tlb_flush_entries; scalar_t__ qi_enabled; } ;
struct dmar_map_entry {scalar_t__ start; scalar_t__ end; TYPE_1__* domain; int flags; int gseq; } ;
struct TYPE_3__ {struct dmar_unit* dmar; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int *,struct dmar_map_entry*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct dmar_map_entry*,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__) ;

void
FUNC_6(struct dmar_map_entry *VAR_2, bool VAR_3)
{
 struct dmar_unit *VAR_4;

 VAR_4 = VAR_2->domain->dmar;
 if (VAR_4->qi_enabled) {
  FUNC_0(VAR_4);
  FUNC_4(VAR_2->domain, VAR_2->start,
      VAR_2->end - VAR_2->start, &VAR_2->gseq, 1);
  if (!VAR_3)
   VAR_2->flags |= VAR_0;
  FUNC_2(&VAR_4->tlb_flush_entries, VAR_2, VAR_1);
  FUNC_1(VAR_4);
 } else {
  FUNC_5(VAR_2->domain, VAR_2->start,
      VAR_2->end - VAR_2->start);
  FUNC_3(VAR_2, VAR_3);
 }
}
