
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct exynos_dsi_transfer {int* rx_payload; int rx_done; int rx_len; scalar_t__ result; } ;
struct exynos_dsi {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct exynos_dsi*,int ) ;

__attribute__((used)) static void FUNC_2(struct exynos_dsi *VAR_3,
     struct exynos_dsi_transfer *VAR_4)
{
 u8 *VAR_5 = VAR_4->rx_payload + VAR_4->rx_done;
 bool VAR_6 = !VAR_4->rx_done;
 struct device *VAR_7 = VAR_3->dev;
 u16 VAR_8;
 u32 VAR_9;

 if (VAR_6) {
  VAR_9 = FUNC_1(VAR_3, VAR_0);

  switch (VAR_9 & 0x3f) {
  case 128:
  case 130:
   if (VAR_4->rx_len >= 2) {
    VAR_5[1] = VAR_9 >> 16;
    ++VAR_4->rx_done;
   }

  case 129:
  case 131:
   VAR_5[0] = VAR_9 >> 8;
   ++VAR_4->rx_done;
   VAR_4->rx_len = VAR_4->rx_done;
   VAR_4->result = 0;
   goto clear_fifo;
  case 132:
   FUNC_0(VAR_7, "DSI Error Report: 0x%04x\n",
    (VAR_9 >> 8) & 0xffff);
   VAR_4->result = 0;
   goto clear_fifo;
  }

  VAR_8 = (VAR_9 >> 8) & 0xffff;
  if (VAR_8 > VAR_4->rx_len) {
   FUNC_0(VAR_7,
    "response too long (%u > %u bytes), stripping\n",
    VAR_4->rx_len, VAR_8);
   VAR_8 = VAR_4->rx_len;
  } else if (VAR_8 < VAR_4->rx_len)
   VAR_4->rx_len = VAR_8;
 }

 VAR_8 = VAR_4->rx_len - VAR_4->rx_done;
 VAR_4->rx_done += VAR_8;


 while (VAR_8 >= 4) {
  VAR_9 = FUNC_1(VAR_3, VAR_0);
  VAR_5[0] = (VAR_9 >> 0) & 0xff;
  VAR_5[1] = (VAR_9 >> 8) & 0xff;
  VAR_5[2] = (VAR_9 >> 16) & 0xff;
  VAR_5[3] = (VAR_9 >> 24) & 0xff;
  VAR_5 += 4;
  VAR_8 -= 4;
 }

 if (VAR_8) {
  VAR_9 = FUNC_1(VAR_3, VAR_0);
  switch (VAR_8) {
  case 3:
   VAR_5[2] = (VAR_9 >> 16) & 0xff;

  case 2:
   VAR_5[1] = (VAR_9 >> 8) & 0xff;

  case 1:
   VAR_5[0] = VAR_9 & 0xff;
  }
 }

 if (VAR_4->rx_done == VAR_4->rx_len)
  VAR_4->result = 0;

clear_fifo:
 VAR_8 = VAR_2 / 4;
 do {
  VAR_9 = FUNC_1(VAR_3, VAR_0);
  if (VAR_9 == VAR_1)
   break;
 } while (--VAR_8);
}
