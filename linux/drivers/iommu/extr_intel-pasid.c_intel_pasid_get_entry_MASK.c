
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pasid_table {struct pasid_dir_entry* table; } ;
struct pasid_entry {int dummy; } ;
struct pasid_dir_entry {int val; } ;
struct device_domain_info {TYPE_2__* iommu; } ;
struct TYPE_3__ {struct device_domain_info* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct TYPE_4__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 struct pasid_entry* FUNC_2 (int ) ;
 struct pasid_entry* FUNC_3 (struct pasid_dir_entry*) ;
 int FUNC_4 (struct device*) ;
 struct pasid_table* FUNC_5 (struct device*) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct pasid_entry*) ;

struct pasid_entry *FUNC_9(struct device *VAR_4, int VAR_5)
{
 struct device_domain_info *VAR_6;
 struct pasid_table *VAR_7;
 struct pasid_dir_entry *VAR_8;
 struct pasid_entry *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_5(VAR_4);
 if (FUNC_0(!VAR_7 || VAR_5 < 0 ||
      VAR_5 >= FUNC_4(VAR_4)))
  return ((void*)0);

 VAR_8 = VAR_7->table;
 VAR_6 = VAR_4->archdata.iommu;
 VAR_10 = VAR_5 >> VAR_0;
 VAR_11 = VAR_5 & VAR_1;

 FUNC_6(&VAR_3);
 VAR_9 = FUNC_3(&VAR_8[VAR_10]);
 if (!VAR_9) {
  VAR_9 = FUNC_2(VAR_6->iommu->node);
  if (!VAR_9) {
   FUNC_7(&VAR_3);
   return ((void*)0);
  }

  FUNC_1(VAR_8[VAR_10].val,
      (u64)FUNC_8(VAR_9) | VAR_2);
 }
 FUNC_7(&VAR_3);

 return &VAR_9[VAR_11];
}
