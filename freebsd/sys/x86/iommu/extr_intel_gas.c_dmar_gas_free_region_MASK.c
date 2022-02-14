
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {int flags; } ;
struct dmar_domain {int last_place; int first_place; int rb_root; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 struct dmar_map_entry* FUNC_2 (int ,int *,struct dmar_map_entry*) ;
 struct dmar_map_entry* FUNC_3 (int ,int *,struct dmar_map_entry*) ;
 int VAR_3 ;
 int FUNC_4 (struct dmar_domain*,int ) ;
 int FUNC_5 (struct dmar_domain*,struct dmar_map_entry*) ;

void
FUNC_6(struct dmar_domain *VAR_4, struct dmar_map_entry *VAR_5)
{
 struct dmar_map_entry *VAR_6, *VAR_7;

 FUNC_0(VAR_4);
 FUNC_1((VAR_5->flags & (VAR_1 | VAR_2 |
     VAR_0)) == VAR_2,
     ("non-RMRR entry %p %p", VAR_4, VAR_5));

 VAR_7 = FUNC_3(VAR_3, &VAR_4->rb_root, VAR_5);
 VAR_6 = FUNC_2(VAR_3, &VAR_4->rb_root, VAR_5);
 FUNC_5(VAR_4, VAR_5);
 VAR_5->flags &= ~VAR_2;

 if (VAR_7 == ((void*)0))
  FUNC_4(VAR_4, VAR_4->first_place);
 if (VAR_6 == ((void*)0))
  FUNC_4(VAR_4, VAR_4->last_place);
}
