
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mpc52xx_gpt_priv {TYPE_1__* dev; int wdt_mode; int list; int regs; int ipb_freq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,struct mpc52xx_gpt_priv*) ;
 struct mpc52xx_gpt_priv* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mpc52xx_gpt_priv*,int ) ;
 int FUNC_5 (struct mpc52xx_gpt_priv*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct mpc52xx_gpt_priv*,int const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct mpc52xx_gpt_priv *VAR_7;

 VAR_7 = FUNC_2(&VAR_6->dev, sizeof *VAR_7, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_12(&VAR_7->lock);
 VAR_7->dev = &VAR_6->dev;
 VAR_7->ipb_freq = FUNC_7(VAR_6->dev.of_node);
 VAR_7->regs = FUNC_11(VAR_6->dev.of_node, 0);
 if (!VAR_7->regs)
  return -VAR_0;

 FUNC_1(&VAR_6->dev, VAR_7);

 FUNC_4(VAR_7, VAR_6->dev.of_node);
 FUNC_5(VAR_7, VAR_6->dev.of_node);

 FUNC_8(&VAR_5);
 FUNC_3(&VAR_7->list, &VAR_4);
 FUNC_9(&VAR_5);


 if (FUNC_10(VAR_6->dev.of_node, "fsl,has-wdt", ((void*)0)) ||
     FUNC_10(VAR_6->dev.of_node, "has-wdt", ((void*)0))) {
  const u32 *VAR_8;

  VAR_7->wdt_mode = VAR_2;
  VAR_8 = FUNC_10(VAR_6->dev.of_node,
           "fsl,wdt-on-boot", ((void*)0));
  if (VAR_8) {
   FUNC_0(VAR_7->dev, "used as watchdog\n");
   VAR_7->wdt_mode |= VAR_3;
  } else
   FUNC_0(VAR_7->dev, "can function as watchdog\n");
  FUNC_6(VAR_7, VAR_8);
 }

 return 0;
}
