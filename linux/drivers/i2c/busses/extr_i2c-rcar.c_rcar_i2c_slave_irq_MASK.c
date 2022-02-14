
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rcar_i2c_priv {int slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (struct rcar_i2c_priv*,int ) ;
 int FUNC_2 (struct rcar_i2c_priv*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct rcar_i2c_priv *VAR_17)
{
 u32 VAR_18, VAR_19;
 u8 VAR_20;

 VAR_18 = FUNC_1(VAR_17, VAR_9) & 0xff;
 VAR_19 = VAR_18 & FUNC_1(VAR_17, VAR_8);

 if (!VAR_19)
  return 0;


 if (VAR_19 & VAR_10) {

  if (VAR_18 & VAR_16) {
   FUNC_0(VAR_17->slave, VAR_2, &VAR_20);
   FUNC_2(VAR_17, VAR_6, VAR_20);
   FUNC_2(VAR_17, VAR_8, VAR_12 | VAR_15 | VAR_10);
  } else {
   FUNC_0(VAR_17->slave, VAR_5, &VAR_20);
   FUNC_1(VAR_17, VAR_6);
   FUNC_2(VAR_17, VAR_8, VAR_13 | VAR_15 | VAR_10);
  }

  FUNC_2(VAR_17, VAR_9, ~VAR_10 & 0xff);
 }


 if (VAR_19 & VAR_15) {
  FUNC_0(VAR_17->slave, VAR_3, &VAR_20);
  FUNC_2(VAR_17, VAR_8, VAR_10 | VAR_15);
  FUNC_2(VAR_17, VAR_9, ~VAR_15 & 0xff);
 }


 if (VAR_19 & VAR_13) {
  int VAR_21;

  VAR_20 = FUNC_1(VAR_17, VAR_6);
  VAR_21 = FUNC_0(VAR_17->slave, VAR_4, &VAR_20);

  FUNC_2(VAR_17, VAR_7, VAR_14 | VAR_11 | (VAR_21 < 0 ? VAR_0 : 0));
  FUNC_2(VAR_17, VAR_9, ~VAR_13 & 0xff);
 }


 if (VAR_19 & VAR_12) {
  FUNC_0(VAR_17->slave, VAR_1, &VAR_20);
  FUNC_2(VAR_17, VAR_6, VAR_20);
  FUNC_2(VAR_17, VAR_9, ~VAR_12 & 0xff);
 }

 return 1;
}
