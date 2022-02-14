
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_sdio_card {int rx_unit; TYPE_1__* reg; int func; } ;
struct TYPE_2__ {int card_rx_unit; } ;


 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct btmrvl_sdio_card *VAR_0)
{
 u8 VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->func, VAR_0->reg->card_rx_unit, &VAR_2);
 if (!VAR_2)
  VAR_0->rx_unit = VAR_1;

 return VAR_2;
}
