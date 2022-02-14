
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {scalar_t__ end; scalar_t__ start; scalar_t__ free_after; } ;
struct dmar_domain {scalar_t__ end; int rb_root; } ;


 struct dmar_map_entry* FUNC_0 (int ,int *,struct dmar_map_entry*) ;
 int FUNC_1 (struct dmar_map_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct dmar_domain *VAR_1, struct dmar_map_entry *VAR_2)
{
 struct dmar_map_entry *VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_1->rb_root, VAR_2);
 VAR_2->free_after = (VAR_3 != ((void*)0) ? VAR_3->start : VAR_1->end) -
     VAR_2->end;
 FUNC_1(VAR_2);
}
