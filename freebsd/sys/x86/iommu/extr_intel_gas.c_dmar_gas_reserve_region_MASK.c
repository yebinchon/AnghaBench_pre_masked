
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {int flags; void* end; void* start; } ;
struct dmar_domain {int dummy; } ;
typedef void* dmar_gaddr_t ;


 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmar_map_entry* FUNC_2 (struct dmar_domain*,int ) ;
 int FUNC_3 (struct dmar_domain*,struct dmar_map_entry*,int ) ;
 int FUNC_4 (struct dmar_domain*,struct dmar_map_entry*) ;

int
FUNC_5(struct dmar_domain *VAR_3, dmar_gaddr_t VAR_4,
    dmar_gaddr_t VAR_5)
{
 struct dmar_map_entry *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_2);
 VAR_6->start = VAR_4;
 VAR_6->end = VAR_5;
 FUNC_0(VAR_3);
 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_0);
 if (VAR_7 == 0)
  VAR_6->flags |= VAR_1;
 FUNC_1(VAR_3);
 if (VAR_7 != 0)
  FUNC_4(VAR_3, VAR_6);
 return (VAR_7);
}
