
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mtk_dsi {scalar_t__ regs; } ;
struct mipi_dsi_msg {int rx_len; scalar_t__ tx_buf; int rx_buf; int type; } ;
struct mipi_dsi_host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 struct mtk_dsi* FUNC_3 (struct mipi_dsi_host*) ;
 int FUNC_4 (int ,void*,int) ;
 scalar_t__ FUNC_5 (struct mtk_dsi*,struct mipi_dsi_msg const*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_9(struct mipi_dsi_host *VAR_7,
         const struct mipi_dsi_msg *VAR_8)
{
 struct mtk_dsi *VAR_9 = FUNC_3(VAR_7);
 u32 VAR_10, VAR_11;
 u8 VAR_12[16];
 void *VAR_13;
 u8 VAR_14 = VAR_0;

 if (FUNC_8(VAR_9->regs + VAR_1) & VAR_6) {
  FUNC_0("dsi engine is not command mode\n");
  return -VAR_3;
 }

 if (FUNC_2(VAR_8->type))
  VAR_14 |= VAR_5;

 if (FUNC_5(VAR_9, VAR_8, VAR_14) < 0)
  return -VAR_4;

 if (!FUNC_2(VAR_8->type))
  return 0;

 if (!VAR_8->rx_buf) {
  FUNC_0("dsi receive buffer size may be NULL\n");
  return -VAR_3;
 }

 for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
  *(VAR_12 + VAR_11) = FUNC_7(VAR_9->regs + VAR_2 + VAR_11);

 VAR_10 = FUNC_6(VAR_12[0], VAR_12);

 if (VAR_10 > 2)
  VAR_13 = &VAR_12[4];
 else
  VAR_13 = &VAR_12[1];

 if (VAR_10 > 10)
  VAR_10 = 10;

 if (VAR_10 > VAR_8->rx_len)
  VAR_10 = VAR_8->rx_len;

 if (VAR_10)
  FUNC_4(VAR_8->rx_buf, VAR_13, VAR_10);

 FUNC_1("dsi get %d byte data from the panel address(0x%x)\n",
   VAR_10, *((u8 *)(VAR_8->tx_buf)));

 return VAR_10;
}
