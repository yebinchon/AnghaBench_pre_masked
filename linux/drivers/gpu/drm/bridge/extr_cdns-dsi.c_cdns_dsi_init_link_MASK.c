
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns_dsi_output {TYPE_1__* dev; } ;
struct cdns_dsi {int link_initialized; scalar_t__ regs; int dsi_sys_clk; struct cdns_dsi_output output; } ;
struct TYPE_2__ {int lanes; int mode_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ,unsigned long) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct cdns_dsi *VAR_11)
{
 struct cdns_dsi_output *VAR_12 = &VAR_11->output;
 unsigned long VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16;

 if (VAR_11->link_initialized)
  return;

 VAR_15 = 0;
 for (VAR_16 = 1; VAR_16 < VAR_12->dev->lanes; VAR_16++)
  VAR_15 |= FUNC_1(VAR_16);

 if (!(VAR_12->dev->mode_flags & VAR_7))
  VAR_15 |= VAR_0;

 FUNC_6(VAR_15, VAR_11->regs + VAR_5);


 VAR_13 = VAR_9 / FUNC_5(VAR_11->dsi_sys_clk);
 VAR_14 = FUNC_4(VAR_8, VAR_13);
 FUNC_6(FUNC_0(VAR_14) | FUNC_3(VAR_14),
        VAR_11->regs + VAR_6);

 FUNC_6(VAR_2, VAR_11->regs + VAR_3);

 VAR_15 = VAR_1 | VAR_10;
 for (VAR_16 = 0; VAR_16 < VAR_12->dev->lanes; VAR_16++)
  VAR_15 |= FUNC_2(VAR_16);

 FUNC_6(VAR_15, VAR_11->regs + VAR_4);

 VAR_11->link_initialized = 1;
}
