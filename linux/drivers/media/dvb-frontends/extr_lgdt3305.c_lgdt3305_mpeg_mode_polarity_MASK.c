
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgdt3305_state {TYPE_1__* cfg; } ;
typedef enum lgdt3305_tp_valid_polarity { ____Placeholder_lgdt3305_tp_valid_polarity } lgdt3305_tp_valid_polarity ;
typedef enum lgdt3305_tp_clock_mode { ____Placeholder_lgdt3305_tp_clock_mode } lgdt3305_tp_clock_mode ;
typedef enum lgdt3305_tp_clock_edge { ____Placeholder_lgdt3305_tp_clock_edge } lgdt3305_tp_clock_edge ;
struct TYPE_2__ {int tpclk_edge; int tpclk_mode; int tpvalid_polarity; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int*) ;
 int FUNC_3 (struct lgdt3305_state*) ;
 int FUNC_4 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lgdt3305_state *VAR_1)
{
 u8 VAR_2;
 int VAR_3;
 enum lgdt3305_tp_clock_edge VAR_4 = VAR_1->cfg->tpclk_edge;
 enum lgdt3305_tp_clock_mode VAR_5 = VAR_1->cfg->tpclk_mode;
 enum lgdt3305_tp_valid_polarity VAR_6 = VAR_1->cfg->tpvalid_polarity;

 FUNC_0("edge = %d, valid = %d\n", VAR_4, VAR_6);

 VAR_3 = FUNC_2(VAR_1, VAR_0, &VAR_2);
 if (FUNC_1(VAR_3))
  goto fail;

 VAR_2 &= ~0x09;

 if (VAR_4)
  VAR_2 |= 0x08;
 if (VAR_5)
  VAR_2 |= 0x40;
 if (VAR_6)
  VAR_2 |= 0x01;

 VAR_3 = FUNC_4(VAR_1, VAR_0, VAR_2);
 if (FUNC_1(VAR_3))
  goto fail;

 VAR_3 = FUNC_3(VAR_1);
fail:
 return VAR_3;
}
