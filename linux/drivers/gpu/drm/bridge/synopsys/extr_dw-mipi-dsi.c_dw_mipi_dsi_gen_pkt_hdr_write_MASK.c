
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_mipi_dsi*,int ,int) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct dw_mipi_dsi *VAR_6, u32 VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10;

 VAR_8 = FUNC_2(VAR_6->base + VAR_1,
     VAR_9, !(VAR_9 & VAR_4), 1000,
     VAR_0);
 if (VAR_8) {
  FUNC_0(VAR_6->dev, "failed to get available command FIFO\n");
  return VAR_8;
 }

 FUNC_1(VAR_6, VAR_2, VAR_7);

 VAR_10 = VAR_3 | VAR_5;
 VAR_8 = FUNC_2(VAR_6->base + VAR_1,
     VAR_9, (VAR_9 & VAR_10) == VAR_10,
     1000, VAR_0);
 if (VAR_8) {
  FUNC_0(VAR_6->dev, "failed to write command FIFO\n");
  return VAR_8;
 }

 return 0;
}
