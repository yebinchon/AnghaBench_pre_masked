
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns_dsi_output {TYPE_1__* dev; int phy_opts; } ;
struct cdns_dsi {scalar_t__ regs; int dphy; struct cdns_dsi_output output; } ;
struct TYPE_2__ {int lanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int,int,int,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct cdns_dsi *VAR_12)
{
 struct cdns_dsi_output *VAR_13 = &VAR_12->output;
 u32 VAR_14;





 FUNC_7(VAR_2 | VAR_6 | VAR_0 | VAR_3 |
        VAR_1 | VAR_5,
        VAR_12->regs + VAR_7);

 FUNC_3(VAR_12->dphy);
 FUNC_5(VAR_12->dphy, VAR_10);
 FUNC_2(VAR_12->dphy, &VAR_13->phy_opts);
 FUNC_4(VAR_12->dphy);


 FUNC_7(VAR_11, VAR_12->regs + VAR_9);
 FUNC_7(VAR_2 | VAR_0 | VAR_3 | VAR_1,
        VAR_12->regs + VAR_7);
 FUNC_1(FUNC_6(VAR_12->regs + VAR_8, VAR_14,
     VAR_14 & VAR_11, 100, 100));

 FUNC_7(VAR_2 | VAR_0 | VAR_3 | VAR_1 |
        FUNC_0(VAR_13->dev->lanes) | VAR_4,
        VAR_12->regs + VAR_7);
}
