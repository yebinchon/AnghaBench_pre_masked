
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct dw_hdmi {int reg_shift; int regm; } ;


 int FUNC_0 (int ,int,unsigned int*) ;

__attribute__((used)) static inline u8 FUNC_1(struct dw_hdmi *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = 0;

 FUNC_0(VAR_0->regm, VAR_1 << VAR_0->reg_shift, &VAR_2);

 return VAR_2;
}
