
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mipi_dsi_msg {int flags; } ;
struct dw_mipi_dsi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dw_mipi_dsi*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_mipi_dsi *VAR_7,
       const struct mipi_dsi_msg *VAR_8)
{
 bool VAR_9 = VAR_8->flags & VAR_5;
 u32 VAR_10 = 0;

 if (VAR_8->flags & VAR_4)
  VAR_10 |= VAR_0;
 if (VAR_9)
  VAR_10 |= VAR_1;

 FUNC_0(VAR_7, VAR_3, VAR_9 ? 0 : VAR_6);
 FUNC_0(VAR_7, VAR_2, VAR_10);
}
