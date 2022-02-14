
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl08x_phy_chan {scalar_t__ reg_control; scalar_t__ base; scalar_t__ pl080s; scalar_t__ ftdmac020; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct pl08x_phy_chan *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 if (VAR_8->ftdmac020) {
  VAR_10 = FUNC_0(VAR_8->base + VAR_2);

  VAR_9 = FUNC_0(VAR_8->reg_control);
  VAR_9 &= VAR_0;
  VAR_9 >>= VAR_1;
 } else if (VAR_8->pl080s) {
  VAR_9 = FUNC_0(VAR_8->base + VAR_3);
  VAR_10 = VAR_9 & VAR_4;

  VAR_9 = FUNC_0(VAR_8->reg_control);
  VAR_9 &= VAR_5;
  VAR_9 >>= VAR_6;
 } else {

  VAR_9 = FUNC_0(VAR_8->reg_control);
  VAR_10 = VAR_9 & VAR_7;

  VAR_9 &= VAR_5;
  VAR_9 >>= VAR_6;
 }

 switch (VAR_9) {
 case 128:
  break;
 case 130:
  VAR_10 *= 2;
  break;
 case 129:
  VAR_10 *= 4;
  break;
 }
 return VAR_10;
}
