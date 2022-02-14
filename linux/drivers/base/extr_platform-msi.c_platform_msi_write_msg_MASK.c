
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_msi_priv_data {int (* write_msg ) (struct msi_desc*,struct msi_msg*) ;} ;
struct msi_msg {int dummy; } ;
struct TYPE_2__ {struct platform_msi_priv_data* msi_priv_data; } ;
struct msi_desc {TYPE_1__ platform; } ;
struct irq_data {int dummy; } ;


 struct msi_desc* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct msi_desc*,struct msi_msg*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0, struct msi_msg *VAR_1)
{
 struct msi_desc *VAR_2 = FUNC_0(VAR_0);
 struct platform_msi_priv_data *VAR_3;

 VAR_3 = VAR_2->platform.msi_priv_data;

 VAR_3->write_msg(VAR_2, VAR_1);
}
