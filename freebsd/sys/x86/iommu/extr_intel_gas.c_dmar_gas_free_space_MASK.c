
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {int flags; } ;
struct dmar_domain {int dummy; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct dmar_domain*) ;
 int FUNC_3 (struct dmar_domain*,struct dmar_map_entry*) ;

void
FUNC_4(struct dmar_domain *VAR_4, struct dmar_map_entry *VAR_5)
{

 FUNC_0(VAR_4);
 FUNC_1((VAR_5->flags & (VAR_1 | VAR_2 |
     VAR_0)) == VAR_0,
     ("permanent entry %p %p", VAR_4, VAR_5));

 FUNC_3(VAR_4, VAR_5);
 VAR_5->flags &= ~VAR_0;




}
