
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_clk_pll {int tuner_addr; int tuner_en_addr; TYPE_1__* data; } ;
struct TYPE_2__ {int tuner_en_bit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mtk_clk_pll *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->tuner_en_addr) {
  VAR_2 = FUNC_1(VAR_1->tuner_en_addr) | FUNC_0(VAR_1->data->tuner_en_bit);
  FUNC_2(VAR_2, VAR_1->tuner_en_addr);
 } else if (VAR_1->tuner_addr) {
  VAR_2 = FUNC_1(VAR_1->tuner_addr) | VAR_0;
  FUNC_2(VAR_2, VAR_1->tuner_addr);
 }
}
