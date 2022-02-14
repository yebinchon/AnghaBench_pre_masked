
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mdp4_platform_config {int max_clk; TYPE_2__* iommu; } ;
struct TYPE_3__ {int aperture_start; int aperture_end; } ;
struct TYPE_4__ {TYPE_1__ geometry; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct mdp4_platform_config *FUNC_1(struct platform_device *VAR_1)
{
 static struct mdp4_platform_config VAR_2 = {};


 VAR_2.max_clk = 266667000;
 VAR_2.iommu = FUNC_0(&VAR_0);
 if (VAR_2.iommu) {
  VAR_2.iommu->geometry.aperture_start = 0x1000;
  VAR_2.iommu->geometry.aperture_end = 0xffffffff;
 }

 return &VAR_2;
}
