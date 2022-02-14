
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi {int mode_flags; scalar_t__ vpg_horizontal; scalar_t__ vpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dw_mipi_dsi*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_mipi_dsi *VAR_9)
{
 u32 VAR_10;






 VAR_10 = VAR_1;

 if (VAR_9->mode_flags & VAR_2)
  VAR_10 |= VAR_4;
 else if (VAR_9->mode_flags & VAR_3)
  VAR_10 |= VAR_6;
 else
  VAR_10 |= VAR_5;
 FUNC_0(VAR_9, VAR_0, VAR_10);
}
