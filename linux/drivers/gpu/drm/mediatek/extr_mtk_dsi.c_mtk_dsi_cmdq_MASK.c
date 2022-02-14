
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct mtk_dsi {scalar_t__ regs; } ;
struct mipi_dsi_msg {char* tx_buf; int type; int tx_len; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (struct mtk_dsi*,scalar_t__,size_t,int) ;
 int FUNC_2 (char const,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_dsi *VAR_10, const struct mipi_dsi_msg *VAR_11)
{
 const char *VAR_12 = VAR_11->tx_buf;
 u8 VAR_13, VAR_14, VAR_15, VAR_16 = VAR_11->type;
 u32 VAR_17, VAR_18, VAR_19;

 if (FUNC_0(VAR_16))
  VAR_13 = VAR_0;
 else
  VAR_13 = (VAR_11->tx_len > 2) ? VAR_8 : VAR_9;

 if (VAR_11->tx_len > 2) {
  VAR_14 = 1 + (VAR_11->tx_len + 3) / 4;
  VAR_15 = 4;
  VAR_18 = VAR_2 | VAR_5 | VAR_3 | VAR_4;
  VAR_17 = (VAR_11->tx_len << 16) | (VAR_16 << 8) | VAR_13;
 } else {
  VAR_14 = 1;
  VAR_15 = 2;
  VAR_18 = VAR_2 | VAR_5;
  VAR_17 = (VAR_16 << 8) | VAR_13;
 }

 for (VAR_19 = 0; VAR_19 < VAR_11->tx_len; VAR_19++)
  FUNC_2(VAR_12[VAR_19], VAR_10->regs + VAR_6 + VAR_15 + VAR_19);

 FUNC_1(VAR_10, VAR_6, VAR_18, VAR_17);
 FUNC_1(VAR_10, VAR_7, VAR_1, VAR_14);
}
