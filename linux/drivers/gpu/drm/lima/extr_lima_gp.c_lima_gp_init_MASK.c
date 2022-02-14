
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int async_reset; } ;
struct lima_ip {int irq; TYPE_1__ data; struct lima_device* dev; } ;
struct lima_device {int gp_version; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct lima_ip*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct lima_ip*) ;
 int FUNC_4 (struct lima_ip*) ;
 int FUNC_5 (struct lima_ip*) ;
 int FUNC_6 (struct lima_ip*) ;

int FUNC_7(struct lima_ip *VAR_3)
{
 struct lima_device *VAR_4 = VAR_3->dev;
 int VAR_5;

 FUNC_3(VAR_3);

 VAR_3->data.async_reset = 0;
 FUNC_4(VAR_3);
 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4->dev, VAR_3->irq, VAR_2,
          VAR_0, FUNC_6(VAR_3), VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "gp %s fail to request irq\n",
   FUNC_6(VAR_3));
  return VAR_5;
 }

 VAR_4->gp_version = FUNC_2(VAR_1);

 return 0;
}
