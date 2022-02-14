
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_di {int dummy; } ;
struct ipu_dc_priv {scalar_t__ dc_reg; } ;
struct ipu_dc {scalar_t__ di; scalar_t__ base; struct ipu_dc_priv* priv; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipu_dc*,int ,int,int) ;
 int FUNC_3 (struct ipu_dc*,int,int ,int ,int,int ,int,int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ipu_di*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

int FUNC_8(struct ipu_dc *VAR_15, struct ipu_di *VAR_16, bool VAR_17,
  u32 VAR_18, u32 VAR_19)
{
 struct ipu_dc_priv *VAR_20 = VAR_15->priv;
 int VAR_21, VAR_22;
 u32 VAR_23 = 0;
 int VAR_24;

 VAR_15->di = FUNC_5(VAR_16);

 VAR_24 = FUNC_4(VAR_18);







 VAR_22 = VAR_17 ? 6 : 5;


 if (VAR_15->di)
  VAR_21 = 5;
 else
  VAR_21 = 0;

 if (VAR_17) {
  FUNC_2(VAR_15, VAR_8, VAR_21, 3);
  FUNC_2(VAR_15, VAR_2, VAR_21, 2);
  FUNC_2(VAR_15, VAR_5, VAR_21, 1);


  FUNC_3(VAR_15, VAR_21, FUNC_1(0), 0, VAR_24, VAR_13, 0, VAR_22, 1);
 } else {
  FUNC_2(VAR_15, VAR_8, VAR_21 + 2, 3);
  FUNC_2(VAR_15, VAR_2, VAR_21 + 3, 2);
  FUNC_2(VAR_15, VAR_5, VAR_21 + 1, 1);


  FUNC_3(VAR_15, VAR_21 + 2, FUNC_1(0), 0, VAR_24, VAR_13, 8, VAR_22, 1);
  FUNC_3(VAR_15, VAR_21 + 3, FUNC_1(0), 0, VAR_24, VAR_13, 4, VAR_22, 0);
  FUNC_3(VAR_15, VAR_21 + 4, VAR_14, 0, VAR_24, VAR_12, 0, 0, 1);
  FUNC_3(VAR_15, VAR_21 + 1, FUNC_1(0), 0, VAR_24, VAR_13, 0, VAR_22, 1);
 }

 FUNC_2(VAR_15, VAR_6, 0, 0);
 FUNC_2(VAR_15, VAR_7, 0, 0);
 FUNC_2(VAR_15, VAR_0, 0, 0);
 FUNC_2(VAR_15, VAR_1, 0, 0);
 FUNC_2(VAR_15, VAR_4, 0, 0);
 FUNC_2(VAR_15, VAR_3, 0, 0);

 VAR_23 = FUNC_6(VAR_15->base + VAR_10);
 if (VAR_17)
  VAR_23 |= VAR_11;
 else
  VAR_23 &= ~VAR_11;
 FUNC_7(VAR_23, VAR_15->base + VAR_10);

 FUNC_7(0x0, VAR_15->base + VAR_9);
 FUNC_7(VAR_19, VAR_20->dc_reg + FUNC_0(VAR_15->di));

 return 0;
}
