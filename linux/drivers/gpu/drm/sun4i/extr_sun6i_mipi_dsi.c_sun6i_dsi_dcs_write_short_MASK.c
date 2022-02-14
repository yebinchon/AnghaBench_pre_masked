
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dsi {int regs; } ;
struct mipi_dsi_msg {int tx_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct sun6i_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_4 (struct sun6i_dsi*,int ) ;

__attribute__((used)) static int FUNC_5(struct sun6i_dsi *VAR_2,
         const struct mipi_dsi_msg *VAR_3)
{
 FUNC_1(VAR_2->regs, FUNC_0(0),
       FUNC_3(VAR_2, VAR_3));
 FUNC_2(VAR_2->regs, VAR_1,
     0xff, (4 - 1));

 FUNC_4(VAR_2, VAR_0);

 return VAR_3->tx_len;
}
