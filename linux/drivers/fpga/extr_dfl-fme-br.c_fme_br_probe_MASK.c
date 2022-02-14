
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fpga_bridge {int dummy; } ;
struct fme_br_priv {int pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct fpga_bridge* FUNC_1 (struct device*,char*,int *,struct fme_br_priv*) ;
 struct fme_br_priv* FUNC_2 (struct device*,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct fpga_bridge*) ;
 int FUNC_4 (struct platform_device*,struct fpga_bridge*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct fme_br_priv *VAR_5;
 struct fpga_bridge *VAR_6;

 VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->pdata = FUNC_0(VAR_4);

 VAR_6 = FUNC_1(VAR_4, "DFL FPGA FME Bridge",
         &VAR_2, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_6);

 return FUNC_3(VAR_6);
}
