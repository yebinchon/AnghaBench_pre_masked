
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_fpga_priv {int slcr; int clk; } ;
struct fpga_manager {struct zynq_fpga_priv* priv; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct zynq_fpga_priv*,int ,int,int,int ,int ) ;
 int FUNC_4 (struct zynq_fpga_priv*,int ) ;
 int FUNC_5 (struct zynq_fpga_priv*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct fpga_manager *VAR_11,
     struct fpga_image_info *VAR_12)
{
 struct zynq_fpga_priv *VAR_13 = VAR_11->priv;
 int VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_1(VAR_13->clk);
 if (VAR_14)
  return VAR_14;


 FUNC_5(VAR_13, VAR_0,
  FUNC_4(VAR_13, VAR_0) & ~VAR_1);

 VAR_14 = FUNC_3(VAR_13, VAR_6, VAR_15,
         VAR_15 & VAR_7,
         VAR_4,
         VAR_5);

 FUNC_0(VAR_13->clk);

 if (VAR_14)
  return VAR_14;


 if (!(VAR_12->flags & VAR_2)) {

  FUNC_2(VAR_13->slcr, VAR_10,
        VAR_8);


  FUNC_2(VAR_13->slcr, VAR_9,
        VAR_3);
 }

 return 0;
}
