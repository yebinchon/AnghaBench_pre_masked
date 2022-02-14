
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct axon_msic {int dcr_host; int irq_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct axon_msic* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct axon_msic*,int ,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_3)
{
 struct axon_msic *VAR_4 = FUNC_1(&VAR_3->dev);
 u32 VAR_5;

 FUNC_4("axon_msi: disabling %pOF\n",
   FUNC_2(VAR_4->irq_domain));
 VAR_5 = FUNC_0(VAR_4->dcr_host, VAR_2);
 VAR_5 &= ~VAR_0 & ~VAR_1;
 FUNC_3(VAR_4, VAR_2, VAR_5);
}
