
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_pgtable_cfg {int coherent_walk; struct device* iommu_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct io_pgtable_cfg cfg; } ;
struct arm_v7s_io_pgtable {int l2_tables; TYPE_1__ iop; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,int ,size_t,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ,void*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, int VAR_2,
     struct arm_v7s_io_pgtable *VAR_3)
{
 struct io_pgtable_cfg *VAR_4 = &VAR_3->iop.cfg;
 struct device *VAR_5 = VAR_4->iommu_dev;
 size_t VAR_6 = FUNC_0(VAR_2);

 if (!VAR_4->coherent_walk)
  FUNC_2(VAR_5, FUNC_1(VAR_1), VAR_6,
     VAR_0);
 if (VAR_2 == 1)
  FUNC_3((unsigned long)VAR_1, FUNC_4(VAR_6));
 else
  FUNC_5(VAR_3->l2_tables, VAR_1);
}
