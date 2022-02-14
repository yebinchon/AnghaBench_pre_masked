
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int iommu_dev; int coherent_walk; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,size_t,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, size_t VAR_2,
      struct io_pgtable_cfg *VAR_3)
{
 if (!VAR_3->coherent_walk)
  FUNC_1(VAR_3->iommu_dev, FUNC_0(VAR_1),
     VAR_2, VAR_0);
 FUNC_2((unsigned long)VAR_1, FUNC_3(VAR_2));
}
