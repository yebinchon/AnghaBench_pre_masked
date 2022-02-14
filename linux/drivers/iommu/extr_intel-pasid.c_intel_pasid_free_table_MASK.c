
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pasid_table {int max_pasid; int order; struct pasid_dir_entry* table; int dev; } ;
struct pasid_entry {int dummy; } ;
struct pasid_dir_entry {int dummy; } ;
struct device_domain_info {struct pasid_table* pasid_table; } ;
struct TYPE_2__ {struct device_domain_info* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device_domain_info*,struct pasid_table*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (struct pasid_entry*) ;
 struct pasid_entry* FUNC_4 (struct pasid_dir_entry*) ;
 int FUNC_5 (struct pasid_table*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct device *VAR_1)
{
 struct device_domain_info *VAR_2;
 struct pasid_table *VAR_3;
 struct pasid_dir_entry *VAR_4;
 struct pasid_entry *VAR_5;
 int VAR_6, VAR_7;

 VAR_2 = VAR_1->archdata.iommu;
 if (!VAR_2 || !FUNC_0(VAR_1) || !VAR_2->pasid_table)
  return;

 VAR_3 = VAR_2->pasid_table;
 FUNC_1(VAR_2, VAR_3);

 if (!FUNC_6(&VAR_3->dev))
  return;


 VAR_4 = VAR_3->table;
 VAR_7 = VAR_3->max_pasid >> VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = FUNC_4(&VAR_4[VAR_6]);
  FUNC_3(VAR_5);
 }

 FUNC_2((unsigned long)VAR_3->table, VAR_3->order);
 FUNC_5(VAR_3);
}
