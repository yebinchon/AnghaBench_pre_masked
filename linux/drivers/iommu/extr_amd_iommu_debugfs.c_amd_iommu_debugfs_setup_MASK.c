
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_iommu {int index; void* debugfs; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,void*) ;
 void* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;

void FUNC_4(struct amd_iommu *VAR_4)
{
 char VAR_5[VAR_0 + 1];

 FUNC_1(&VAR_2);
 if (!VAR_1)
  VAR_1 = FUNC_0("amd",
             VAR_3);
 FUNC_2(&VAR_2);

 FUNC_3(VAR_5, VAR_0, "iommu%02d", VAR_4->index);
 VAR_4->debugfs = FUNC_0(VAR_5, VAR_1);
}
