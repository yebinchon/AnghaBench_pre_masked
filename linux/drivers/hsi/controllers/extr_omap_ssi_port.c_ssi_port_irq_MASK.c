
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_ssi_port {int irq; } ;
struct hsi_port {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,int,int *,int ,int ,char*,struct hsi_port*) ;
 struct omap_ssi_port* FUNC_2 (struct hsi_port*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct hsi_port *VAR_2, struct platform_device *VAR_3)
{
 struct omap_ssi_port *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3, 0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4->irq = VAR_5;
 VAR_5 = FUNC_1(&VAR_2->device, VAR_4->irq, ((void*)0),
    VAR_1, VAR_0, "SSI PORT", VAR_2);
 if (VAR_5 < 0)
  FUNC_0(&VAR_2->device, "Request IRQ %d failed (%d)\n",
       VAR_4->irq, VAR_5);
 return VAR_5;
}
