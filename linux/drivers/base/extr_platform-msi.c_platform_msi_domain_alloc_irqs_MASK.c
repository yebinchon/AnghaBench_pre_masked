
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_msi_priv_data {int dummy; } ;
struct device {int msi_domain; } ;
typedef int irq_write_msi_msg_t ;


 scalar_t__ FUNC_0 (struct platform_msi_priv_data*) ;
 int FUNC_1 (struct platform_msi_priv_data*) ;
 int FUNC_2 (int ,struct device*,unsigned int) ;
 int FUNC_3 (struct device*,unsigned int,struct platform_msi_priv_data*) ;
 struct platform_msi_priv_data* FUNC_4 (struct device*,unsigned int,int ) ;
 int FUNC_5 (struct device*,int ,unsigned int) ;
 int FUNC_6 (struct platform_msi_priv_data*) ;

int FUNC_7(struct device *VAR_0, unsigned int VAR_1,
       irq_write_msi_msg_t VAR_2)
{
 struct platform_msi_priv_data *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_3);
 if (VAR_4)
  goto out_free_priv_data;

 VAR_4 = FUNC_2(VAR_0->msi_domain, VAR_0, VAR_1);
 if (VAR_4)
  goto out_free_desc;

 return 0;

out_free_desc:
 FUNC_5(VAR_0, 0, VAR_1);
out_free_priv_data:
 FUNC_6(VAR_3);

 return VAR_4;
}
