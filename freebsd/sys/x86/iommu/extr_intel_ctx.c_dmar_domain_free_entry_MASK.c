
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {int flags; struct dmar_domain* domain; } ;
struct dmar_domain {int dummy; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int VAR_0 ;
 int FUNC_2 (struct dmar_domain*,struct dmar_map_entry*) ;
 int FUNC_3 (struct dmar_domain*,struct dmar_map_entry*) ;
 int FUNC_4 (struct dmar_domain*,struct dmar_map_entry*) ;

void
FUNC_5(struct dmar_map_entry *VAR_1, bool VAR_2)
{
 struct dmar_domain *VAR_3;

 VAR_3 = VAR_1->domain;
 FUNC_0(VAR_3);
 if ((VAR_1->flags & VAR_0) != 0)
  FUNC_3(VAR_3, VAR_1);
 else
  FUNC_4(VAR_3, VAR_1);
 FUNC_1(VAR_3);
 if (VAR_2)
  FUNC_2(VAR_3, VAR_1);
 else
  VAR_1->flags = 0;
}
