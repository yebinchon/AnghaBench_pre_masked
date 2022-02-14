
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct btmrvl_sdio_card {TYPE_1__* reg; int func; } ;
struct TYPE_2__ {int card_fw_status1; int card_fw_status0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct btmrvl_sdio_card *VAR_1, u16 *VAR_2)
{
 u8 VAR_3, VAR_4;
 int VAR_5;

 *VAR_2 = 0;

 VAR_3 = FUNC_0(VAR_1->func, VAR_1->reg->card_fw_status0, &VAR_5);
 if (VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1->func, VAR_1->reg->card_fw_status1, &VAR_5);
 if (VAR_5)
  return -VAR_0;

 *VAR_2 = (((u16) VAR_4) << 8) | VAR_3;

 return 0;
}
