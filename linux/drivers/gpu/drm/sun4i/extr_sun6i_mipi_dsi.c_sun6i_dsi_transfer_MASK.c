
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dsi {int regs; } ;
struct mipi_dsi_msg {int type; int rx_len; } ;
struct mipi_dsi_host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sun6i_dsi* FUNC_0 (struct mipi_dsi_host*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sun6i_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_3 (struct sun6i_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_4 (struct sun6i_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_5 (struct sun6i_dsi*) ;
 int FUNC_6 (struct sun6i_dsi*) ;

__attribute__((used)) static ssize_t FUNC_7(struct mipi_dsi_host *VAR_5,
      const struct mipi_dsi_msg *VAR_6)
{
 struct sun6i_dsi *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 < 0)
  FUNC_5(VAR_7);

 FUNC_1(VAR_7->regs, VAR_1,
       VAR_3 |
       VAR_2 |
       VAR_4);

 switch (VAR_6->type) {
 case 130:
 case 129:
 case 128:
  VAR_8 = FUNC_4(VAR_7, VAR_6);
  break;

 case 132:
  VAR_8 = FUNC_3(VAR_7, VAR_6);
  break;

 case 131:
  if (VAR_6->rx_len == 1) {
   VAR_8 = FUNC_2(VAR_7, VAR_6);
   break;
  }


 default:
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
