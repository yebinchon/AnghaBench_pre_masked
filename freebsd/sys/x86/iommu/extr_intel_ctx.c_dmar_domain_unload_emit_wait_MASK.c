
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {int dummy; } ;
struct dmar_domain {int batch_no; } ;


 int * FUNC_0 (struct dmar_map_entry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(struct dmar_domain *VAR_2,
    struct dmar_map_entry *VAR_3)
{

 if (FUNC_0(VAR_3, VAR_0) == ((void*)0))
  return (1);
 return (VAR_2->batch_no++ % VAR_1 == 0);
}
