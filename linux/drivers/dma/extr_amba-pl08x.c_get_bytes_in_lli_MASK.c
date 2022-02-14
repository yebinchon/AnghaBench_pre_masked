
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl08x_phy_chan {scalar_t__ pl080s; scalar_t__ ftdmac020; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;




__attribute__((used)) static u32 FUNC_0(struct pl08x_phy_chan *VAR_9, const u32 *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_9->ftdmac020) {
  VAR_11 = VAR_10[VAR_8];
  VAR_12 = VAR_11 & VAR_2;

  VAR_11 = VAR_10[VAR_8];
  VAR_11 &= VAR_0;
  VAR_11 >>= VAR_1;
 } else if (VAR_9->pl080s) {
  VAR_11 = VAR_10[VAR_4];
  VAR_12 = VAR_11 & VAR_3;

  VAR_11 = VAR_10[VAR_8];
  VAR_11 &= VAR_5;
  VAR_11 >>= VAR_6;
 } else {

  VAR_11 = VAR_10[VAR_8];
  VAR_12 = VAR_11 & VAR_7;

  VAR_11 &= VAR_5;
  VAR_11 >>= VAR_6;
 }

 switch (VAR_11) {
 case 128:
  break;
 case 130:
  VAR_12 *= 2;
  break;
 case 129:
  VAR_12 *= 4;
  break;
 }
 return VAR_12;
}
