
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fpga_manager {struct fpga_compat_id* compat_id; } ;
struct fpga_compat_id {int dummy; } ;
struct fme_mgr_priv {scalar_t__ ioaddr; } ;
struct dfl_fme_mgr_pdata {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct dfl_fme_mgr_pdata* FUNC_2 (struct device*) ;
 struct fpga_manager* FUNC_3 (struct device*,char*,int *,struct fme_mgr_priv*) ;
 scalar_t__ FUNC_4 (struct device*,struct resource*) ;
 void* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (scalar_t__,struct fpga_compat_id*) ;
 int VAR_3 ;
 int FUNC_7 (struct fpga_manager*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct fpga_manager*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct dfl_fme_mgr_pdata *VAR_5 = FUNC_2(&VAR_4->dev);
 struct fpga_compat_id *VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 struct fme_mgr_priv *VAR_8;
 struct fpga_manager *VAR_9;
 struct resource *VAR_10;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_5->ioaddr)
  VAR_8->ioaddr = VAR_5->ioaddr;

 if (!VAR_8->ioaddr) {
  VAR_10 = FUNC_8(VAR_4, VAR_2, 0);
  VAR_8->ioaddr = FUNC_4(VAR_7, VAR_10);
  if (FUNC_0(VAR_8->ioaddr))
   return FUNC_1(VAR_8->ioaddr);
 }

 VAR_6 = FUNC_5(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(VAR_8->ioaddr, VAR_6);

 VAR_9 = FUNC_3(VAR_7, "DFL FME FPGA Manager",
       &VAR_3, VAR_8);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->compat_id = VAR_6;
 FUNC_9(VAR_4, VAR_9);

 return FUNC_7(VAR_9);
}
