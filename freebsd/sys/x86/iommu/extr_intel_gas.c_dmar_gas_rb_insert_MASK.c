
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {int dummy; } ;
struct dmar_domain {int rb_root; } ;


 struct dmar_map_entry* FUNC_0 (int ,int *,struct dmar_map_entry*) ;
 struct dmar_map_entry* FUNC_1 (int ,int *,struct dmar_map_entry*) ;
 int VAR_0 ;
 int FUNC_2 (struct dmar_domain*,struct dmar_map_entry*) ;

__attribute__((used)) static bool
FUNC_3(struct dmar_domain *VAR_1, struct dmar_map_entry *VAR_2)
{
 struct dmar_map_entry *VAR_3, *VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_1->rb_root, VAR_2);
 FUNC_2(VAR_1, VAR_2);
 VAR_3 = FUNC_1(VAR_0, &VAR_1->rb_root, VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_1, VAR_3);
 return (VAR_4 == ((void*)0));
}
