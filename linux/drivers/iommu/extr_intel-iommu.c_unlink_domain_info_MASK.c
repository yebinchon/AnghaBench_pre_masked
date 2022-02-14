
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_domain_info {TYPE_2__* dev; int global; int link; } ;
struct TYPE_3__ {int * iommu; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct device_domain_info *VAR_1)
{
 FUNC_0(&VAR_0);
 FUNC_1(&VAR_1->link);
 FUNC_1(&VAR_1->global);
 if (VAR_1->dev)
  VAR_1->dev->archdata.iommu = ((void*)0);
}
