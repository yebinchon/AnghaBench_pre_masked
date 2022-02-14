
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_ip {int irq; struct lima_device* dev; } ;
struct lima_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct lima_ip*) ;
 int FUNC_2 (struct lima_ip*) ;
 int VAR_1 ;

int FUNC_3(struct lima_ip *VAR_2)
{
 struct lima_device *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->dev, VAR_2->irq, VAR_1,
          VAR_0, FUNC_2(VAR_2), VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "pp %s fail to request irq\n",
   FUNC_2(VAR_2));
  return VAR_4;
 }

 return 0;
}
