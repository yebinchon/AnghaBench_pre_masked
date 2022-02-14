
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socfpga_fpga_priv {int dummy; } ;
struct fpga_manager {int dev; struct socfpga_fpga_priv* priv; } ;
struct fpga_image_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fpga_manager*) ;
 int FUNC_2 (struct socfpga_fpga_priv*,int ,int ) ;
 scalar_t__ FUNC_3 (struct socfpga_fpga_priv*,int ) ;
 int FUNC_4 (struct socfpga_fpga_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_8,
        struct fpga_image_info *VAR_9,
        const char *VAR_10, size_t VAR_11)
{
 struct socfpga_fpga_priv *VAR_12 = VAR_8->priv;
 int VAR_13;

 if (VAR_9->flags & VAR_2) {
  FUNC_0(&VAR_8->dev, "Partial reconfiguration not supported.\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_8);
 if (VAR_13)
  return VAR_13;


 if (FUNC_3(VAR_12, VAR_7))
  return -VAR_1;


 FUNC_4(VAR_12, VAR_5,
       VAR_6);


 FUNC_2(VAR_12, VAR_4,
          VAR_3);

 return 0;
}
