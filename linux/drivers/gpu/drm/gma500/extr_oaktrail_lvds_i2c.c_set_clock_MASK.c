
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_intel_i2c_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct psb_intel_i2c_chan*,int ) ;
 int FUNC_1 (struct psb_intel_i2c_chan*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void *VAR_3, int VAR_4)
{
 struct psb_intel_i2c_chan *VAR_5 = VAR_3;
 u32 VAR_6;

 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_5, VAR_1);
  VAR_6 |= VAR_0;
  FUNC_1(VAR_5, VAR_1, VAR_6);
 } else {
  VAR_6 = FUNC_0(VAR_5, VAR_1);
  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_5, VAR_1, VAR_6);
  VAR_6 = FUNC_0(VAR_5, VAR_2);
  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_5, VAR_2, VAR_6);
 }
}
