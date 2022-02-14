
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_ssi_port {int wake_irq; int wake_gpio; } ;
struct hsi_port {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,int,int *,int ,int,char*,struct hsi_port*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct omap_ssi_port* FUNC_4 (struct hsi_port*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct hsi_port *VAR_4, struct platform_device *VAR_5)
{
 struct omap_ssi_port *VAR_6 = FUNC_4(VAR_4);
 int VAR_7;
 int VAR_8;

 if (!VAR_6->wake_gpio) {
  VAR_6->wake_irq = -1;
  return 0;
 }

 VAR_7 = FUNC_3(VAR_6->wake_gpio);
 VAR_6->wake_irq = VAR_7;

 VAR_8 = FUNC_1(&VAR_4->device, VAR_7, ((void*)0),
  VAR_3,
  VAR_2 | VAR_1 | VAR_0,
  "SSI cawake", VAR_4);
 if (VAR_8 < 0)
  FUNC_0(&VAR_4->device, "Request Wake in IRQ %d failed %d\n",
      VAR_7, VAR_8);
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 < 0)
  FUNC_0(&VAR_4->device, "Enable wake on the wakeline in irq %d failed %d\n",
   VAR_7, VAR_8);

 return VAR_8;
}
