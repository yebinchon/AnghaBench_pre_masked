
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {int dev; struct a10_fpga_priv* priv; } ;
struct fpga_image_info {int flags; } ;
struct a10_fpga_priv {int regmap; } ;


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
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct a10_fpga_priv*,int) ;
 int FUNC_4 (struct a10_fpga_priv*) ;
 int FUNC_5 (struct fpga_manager*,unsigned int,char const*,size_t) ;
 int FUNC_6 (struct a10_fpga_priv*,unsigned int) ;
 int FUNC_7 (struct a10_fpga_priv*) ;

__attribute__((used)) static int FUNC_8(struct fpga_manager *VAR_17,
           struct fpga_image_info *VAR_18,
           const char *VAR_19, size_t VAR_20)
{
 struct a10_fpga_priv *VAR_21 = VAR_17->priv;
 unsigned int VAR_22;
 u32 VAR_23, VAR_24, VAR_25;
 int VAR_26;

 if (VAR_18->flags & VAR_16)
  VAR_22 = VAR_14;
 else
  return -VAR_15;


 VAR_23 = FUNC_4(VAR_21);
 VAR_23 &= VAR_10;
 VAR_23 >>= VAR_11;
 if ((VAR_23 != 0) && (VAR_23 != 1)) {
  FUNC_0(&VAR_17->dev, "Fail: invalid msel=%d\n", VAR_23);
  return -VAR_15;
 }


 VAR_24 = FUNC_4(VAR_21);
 VAR_25 = VAR_12 |
        VAR_13;
 if ((VAR_24 & VAR_25) != VAR_25)
  return -VAR_15;


 FUNC_6(VAR_21, VAR_22);


 VAR_26 = FUNC_5(VAR_17, VAR_22, VAR_19, VAR_20);
 if (VAR_26)
  return VAR_26;





 FUNC_2(VAR_21->regmap, VAR_5,
       VAR_6);


 FUNC_1(VAR_21->regmap, VAR_9,
      VAR_8,
      VAR_8);





 FUNC_2(VAR_21->regmap, VAR_0,
       VAR_3 |
       VAR_4 |
       VAR_2 |
       VAR_1);


 FUNC_1(VAR_21->regmap, VAR_5,
      VAR_6, 0);


 FUNC_3(VAR_21, 256);


 FUNC_1(VAR_21->regmap, VAR_5,
      VAR_7,
      VAR_7);


 FUNC_3(VAR_21, 0x7ff);


 return FUNC_7(VAR_21);
}
