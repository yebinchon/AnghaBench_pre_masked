
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {struct dmar_domain* domain; } ;
struct dmar_domain {int entries_cnt; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct dmar_map_entry*) ;

void
FUNC_3(struct dmar_domain *VAR_1, struct dmar_map_entry *VAR_2)
{

 FUNC_0(VAR_1 == VAR_2->domain,
     ("mismatched free domain %p entry %p entry->domain %p", VAR_1,
     VAR_2, VAR_2->domain));
 FUNC_1(&VAR_1->entries_cnt, 1);
 FUNC_2(VAR_0, VAR_2);
}
