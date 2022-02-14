
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_i2c_dev {int * sg_io; int dev; scalar_t__ dma_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mxs_i2c_dev *VAR_2)
{
 if (VAR_2->dma_read) {
  FUNC_0(VAR_2->dev, &VAR_2->sg_io[0], 1, VAR_1);
  FUNC_0(VAR_2->dev, &VAR_2->sg_io[1], 1, VAR_0);
 } else {
  FUNC_0(VAR_2->dev, VAR_2->sg_io, 2, VAR_1);
 }
}
