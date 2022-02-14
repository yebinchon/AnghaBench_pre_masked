
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sun6i_dsi {int regs; } ;
struct mipi_dsi_msg {int tx_len; int * tx_buf; } ;
typedef int crc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct sun6i_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_8 (struct sun6i_dsi*) ;
 int FUNC_9 (struct sun6i_dsi*) ;
 int FUNC_10 (struct sun6i_dsi*,int ) ;

__attribute__((used)) static int FUNC_11(struct sun6i_dsi *VAR_4,
        const struct mipi_dsi_msg *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 u8 *VAR_8;
 u16 VAR_9;

 FUNC_5(VAR_4->regs, FUNC_0(0),
       FUNC_7(VAR_4, VAR_5));

 VAR_8 = FUNC_2(VAR_5->tx_len + sizeof(VAR_9), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_3(VAR_8, VAR_5->tx_buf, VAR_5->tx_len);
 VAR_7 += VAR_5->tx_len;

 VAR_9 = FUNC_6(VAR_8, VAR_5->tx_len);
 FUNC_3((u8 *)VAR_8 + VAR_5->tx_len, &VAR_9, sizeof(VAR_9));
 VAR_7 += sizeof(VAR_9);

 FUNC_4(VAR_4->regs, FUNC_0(1), VAR_8, VAR_7);
 FUNC_5(VAR_4->regs, VAR_3, VAR_7 + 4 - 1);
 FUNC_1(VAR_8);

 FUNC_10(VAR_4, VAR_0);

 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6 < 0) {
  FUNC_8(VAR_4);
  return VAR_6;
 }






 return VAR_5->tx_len;
}
