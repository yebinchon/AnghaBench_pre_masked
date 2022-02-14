
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct btmrvl_sdio_card {int rx_unit; TYPE_1__* reg; int func; } ;
struct TYPE_2__ {int card_rx_len; } ;


 scalar_t__ FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct btmrvl_sdio_card *VAR_0, u16 *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0->func, VAR_0->reg->card_rx_len, &VAR_3);
 if (!VAR_3)
  *VAR_1 = (u16) VAR_2 << VAR_0->rx_unit;

 return VAR_3;
}
