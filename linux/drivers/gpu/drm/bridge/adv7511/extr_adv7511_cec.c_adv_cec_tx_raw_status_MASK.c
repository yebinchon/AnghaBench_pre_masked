
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adv7511 {scalar_t__ type; int cec_adap; int regmap_cec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ,int,int,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct adv7511 *VAR_13, u8 VAR_14)
{
 unsigned int VAR_15 = VAR_13->type == VAR_5 ?
     VAR_6 : 0;
 unsigned int VAR_16;

 if (FUNC_2(VAR_13->regmap_cec,
   VAR_3 + VAR_15, &VAR_16))
  return;

 if ((VAR_16 & 0x01) == 0)
  return;

 if (VAR_14 & VAR_0) {
  FUNC_0(VAR_13->cec_adap,
       VAR_7);
  return;
 }
 if (VAR_14 & VAR_2) {
  u8 VAR_17;
  u8 VAR_18 = 0;
  u8 VAR_19 = 0;
  u8 VAR_20 = 0;
  unsigned int VAR_21;





  VAR_17 = VAR_10;
  if (FUNC_2(VAR_13->regmap_cec,
       VAR_4 + VAR_15, &VAR_21)) {
   VAR_18 = 1;
   VAR_17 |= VAR_8;
  } else {
   VAR_19 = VAR_21 & 0xf;
   if (VAR_19)
    VAR_17 |= VAR_11;
   VAR_20 = VAR_21 >> 4;
   if (VAR_20)
    VAR_17 |= VAR_9;
  }
  FUNC_1(VAR_13->cec_adap, VAR_17,
      0, VAR_19, VAR_20, VAR_18);
  return;
 }
 if (VAR_14 & VAR_1) {
  FUNC_0(VAR_13->cec_adap, VAR_12);
  return;
 }
}
