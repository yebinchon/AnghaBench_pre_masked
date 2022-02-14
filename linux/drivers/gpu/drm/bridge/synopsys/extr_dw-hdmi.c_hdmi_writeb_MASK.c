
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dw_hdmi {int reg_shift; int regm; } ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct dw_hdmi *VAR_0, u8 VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->regm, VAR_2 << VAR_0->reg_shift, VAR_1);
}
