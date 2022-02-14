
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_dma_phy {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct s3c24xx_dma_phy *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->base + VAR_0);
 return VAR_3 & VAR_1;
}
