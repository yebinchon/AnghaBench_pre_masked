
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_lvds {int pclk; int dev; TYPE_1__* soc_data; int grf; } ;
struct TYPE_2__ {int grf_soc_con7; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rockchip_lvds*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rockchip_lvds *VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 FUNC_2(VAR_9, VAR_5, VAR_6);
 FUNC_2(VAR_9, VAR_7, VAR_8);
 VAR_11 = VAR_2 | VAR_4 | VAR_0 | VAR_1 | VAR_3;
 VAR_11 |= VAR_11 << 16;
 VAR_10 = FUNC_4(VAR_9->grf, VAR_9->soc_data->grf_soc_con7, VAR_11);
 if (VAR_10 != 0)
  FUNC_0(VAR_9->dev, "Could not write to GRF: %d\n", VAR_10);

 FUNC_3(VAR_9->dev);
 FUNC_1(VAR_9->pclk);
}
