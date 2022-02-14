
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_intel_i2c_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct psb_intel_i2c_chan*,int ) ;
 int FUNC_1 (struct psb_intel_i2c_chan*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void *VAR_3)
{
 struct psb_intel_i2c_chan *VAR_4 = VAR_3;
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_5 |= VAR_0;
 FUNC_1(VAR_4, VAR_1, VAR_5);
 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_5 = (FUNC_0(VAR_4, VAR_2) & VAR_0) ? 1 : 0;

 return VAR_5;
}
