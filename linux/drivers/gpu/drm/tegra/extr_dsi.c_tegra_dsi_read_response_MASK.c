
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tegra_dsi {int dev; } ;
struct mipi_dsi_msg {int* rx_buf; unsigned int rx_len; } ;
typedef size_t ssize_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 size_t VAR_1 ;





 int FUNC_2 (int ,char*,unsigned int,...) ;
 int FUNC_3 (int ,char*,int) ;
 int * VAR_2 ;
 size_t FUNC_4 (size_t,unsigned int) ;
 int FUNC_5 (struct tegra_dsi*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct tegra_dsi *VAR_3,
           const struct mipi_dsi_msg *VAR_4,
           size_t VAR_5)
{
 u8 *VAR_6 = VAR_4->rx_buf;
 unsigned int VAR_7, VAR_8, VAR_9;
 size_t VAR_10 = 0;
 u16 VAR_11;
 u32 VAR_12;


 VAR_12 = FUNC_5(VAR_3, VAR_0);

 switch (VAR_12 & 0x3f) {
 case 132:
  VAR_11 = (VAR_12 >> 8) & 0xffff;
  FUNC_2(VAR_3->dev, "Acknowledge and error report: %04x\n",
   VAR_11);
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
   if (VAR_11 & FUNC_1(VAR_7))
    FUNC_2(VAR_3->dev, "  %2u: %s\n", VAR_7,
     VAR_2[VAR_7]);
  break;

 case 130:
  VAR_6[0] = (VAR_12 >> 8) & 0xff;
  VAR_10 = 1;
  break;

 case 129:
  VAR_6[0] = (VAR_12 >> 8) & 0xff;
  VAR_6[1] = (VAR_12 >> 16) & 0xff;
  VAR_10 = 2;
  break;

 case 131:
  VAR_10 = ((VAR_12 >> 8) & 0xff00) | ((VAR_12 >> 8) & 0xff);
  break;

 case 128:
  VAR_10 = ((VAR_12 >> 8) & 0xff00) | ((VAR_12 >> 8) & 0xff);
  break;

 default:
  FUNC_3(VAR_3->dev, "unhandled response type: %02x\n",
   VAR_12 & 0x3f);
  return -VAR_1;
 }

 VAR_10 = FUNC_4(VAR_10, VAR_4->rx_len);

 if (VAR_4->rx_buf && VAR_10 > 0) {
  for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_5 - 1; VAR_7++, VAR_8 += 4) {
   u8 *VAR_13 = VAR_4->rx_buf + VAR_8;

   VAR_12 = FUNC_5(VAR_3, VAR_0);

   for (VAR_9 = 0; VAR_9 < 4 && (VAR_8 + VAR_9) < VAR_4->rx_len; VAR_9++)
    VAR_13[VAR_8 + VAR_9] = (VAR_12 >> (VAR_9 << 3)) & 0xff;
  }
 }

 return VAR_10;
}
