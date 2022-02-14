
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_fpga_priv {int flags; int dev; } ;
struct zynqmp_eemi_ops {int (* fpga_load ) (int ,size_t,int ) ;} ;
struct fpga_manager {struct zynqmp_fpga_priv* priv; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zynqmp_eemi_ops const*) ;
 int VAR_4 ;
 char* FUNC_1 (int ,size_t,int *,int ) ;
 int FUNC_2 (int ,size_t,char*,int ) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 () ;
 struct zynqmp_eemi_ops* FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct fpga_manager *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 const struct zynqmp_eemi_ops *VAR_8 = FUNC_6();
 struct zynqmp_fpga_priv *VAR_9;
 dma_addr_t VAR_10;
 u32 VAR_11 = 0;
 char *VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_8) || !VAR_8->fpga_load)
  return -VAR_1;

 VAR_9 = VAR_5->priv;

 VAR_12 = FUNC_1(VAR_9->dev, VAR_7, &VAR_10, VAR_3);
 if (!VAR_12)
  return -VAR_0;

 FUNC_3(VAR_12, VAR_6, VAR_7);

 FUNC_5();

 if (VAR_9->flags & VAR_2)
  VAR_11 |= VAR_4;

 VAR_13 = VAR_8->fpga_load(VAR_10, VAR_7, VAR_11);

 FUNC_2(VAR_9->dev, VAR_7, VAR_12, VAR_10);

 return VAR_13;
}
