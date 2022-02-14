
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int regs; } ;
struct sun8i_mixer {TYPE_2__ engine; TYPE_1__* cfg; } ;
struct TYPE_3__ {int vi_num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sun8i_mixer*,int) ;

void FUNC_4(struct sun8i_mixer *VAR_2, int VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6;

 if (FUNC_1(VAR_3 < VAR_2->cfg->vi_num))
  return;

 VAR_6 = FUNC_3(VAR_2, VAR_3);

 if (VAR_4)
  VAR_5 = VAR_1 |
        VAR_0;
 else
  VAR_5 = 0;

 FUNC_2(VAR_2->engine.regs, FUNC_0(VAR_6), VAR_5);
}
