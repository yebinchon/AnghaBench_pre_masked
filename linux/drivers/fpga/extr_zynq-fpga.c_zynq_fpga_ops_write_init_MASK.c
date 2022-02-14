
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_fpga_priv {int clk; int slcr; } ;
struct fpga_manager {int dev; struct zynq_fpga_priv* priv; } ;
struct fpga_image_info {int flags; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char const*,size_t) ;
 int FUNC_5 (struct zynq_fpga_priv*,int ,int,int,int ,int ) ;
 int FUNC_6 (struct zynq_fpga_priv*,int ) ;
 int FUNC_7 (struct zynq_fpga_priv*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct fpga_manager *VAR_23,
        struct fpga_image_info *VAR_24,
        const char *VAR_25, size_t VAR_26)
{
 struct zynq_fpga_priv *VAR_27;
 u32 VAR_28, VAR_29;
 int VAR_30;

 VAR_27 = VAR_23->priv;

 VAR_30 = FUNC_1(VAR_27->clk);
 if (VAR_30)
  return VAR_30;


 if (VAR_24->flags & VAR_8) {
  VAR_28 = FUNC_6(VAR_27, VAR_0);
  if (!(VAR_28 & VAR_5)) {
   FUNC_2(&VAR_23->dev,
    "System not secure, can't use crypted bitstreams\n");
   VAR_30 = -VAR_7;
   goto out_err;
  }
 }


 if (!(VAR_24->flags & VAR_9)) {
  if (!FUNC_4(VAR_25, VAR_26)) {
   FUNC_2(&VAR_23->dev,
    "Invalid bitstream, could not find a sync word. Bitstream must be a byte swapped .bin file\n");
   VAR_30 = -VAR_7;
   goto out_err;
  }


  FUNC_3(VAR_27->slcr, VAR_17,
        VAR_10);


  FUNC_3(VAR_27->slcr, VAR_18,
        VAR_13);

  FUNC_3(VAR_27->slcr, VAR_18,
        VAR_14);







  VAR_28 = FUNC_6(VAR_27, VAR_0);
  VAR_28 |= VAR_4;

  FUNC_7(VAR_27, VAR_0, VAR_28);

  VAR_30 = FUNC_5(VAR_27, VAR_21, VAR_29,
          VAR_29 & VAR_22,
          VAR_11,
          VAR_12);
  if (VAR_30) {
   FUNC_2(&VAR_23->dev, "Timeout waiting for PCFG_INIT\n");
   goto out_err;
  }

  VAR_28 = FUNC_6(VAR_27, VAR_0);
  VAR_28 &= ~VAR_4;

  FUNC_7(VAR_27, VAR_0, VAR_28);

  VAR_30 = FUNC_5(VAR_27, VAR_21, VAR_29,
          !(VAR_29 & VAR_22),
          VAR_11,
          VAR_12);
  if (VAR_30) {
   FUNC_2(&VAR_23->dev, "Timeout waiting for !PCFG_INIT\n");
   goto out_err;
  }

  VAR_28 = FUNC_6(VAR_27, VAR_0);
  VAR_28 |= VAR_4;

  FUNC_7(VAR_27, VAR_0, VAR_28);

  VAR_30 = FUNC_5(VAR_27, VAR_21, VAR_29,
          VAR_29 & VAR_22,
          VAR_11,
          VAR_12);
  if (VAR_30) {
   FUNC_2(&VAR_23->dev, "Timeout waiting for PCFG_INIT\n");
   goto out_err;
  }
 }






 VAR_28 = FUNC_6(VAR_27, VAR_0);
 if (VAR_24->flags & VAR_8)
  FUNC_7(VAR_27, VAR_0,
    (VAR_2 | VAR_1
     | VAR_3 | VAR_28));
 else
  FUNC_7(VAR_27, VAR_0,
    (VAR_2 | VAR_1
     | VAR_28));



 VAR_29 = FUNC_6(VAR_27, VAR_21);
 if ((VAR_29 & VAR_20) ||
     (VAR_29 & VAR_19) != VAR_19) {
  FUNC_2(&VAR_23->dev, "DMA command queue not right\n");
  VAR_30 = -VAR_6;
  goto out_err;
 }


 VAR_28 = FUNC_6(VAR_27, VAR_15);
 FUNC_7(VAR_27, VAR_15, (~VAR_16 & VAR_28));

 FUNC_0(VAR_27->clk);

 return 0;

out_err:
 FUNC_0(VAR_27->clk);

 return VAR_30;
}
