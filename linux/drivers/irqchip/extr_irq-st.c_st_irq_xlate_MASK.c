
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_irq_syscfg {int config; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int) ;
 struct st_irq_syscfg* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_9,
   int VAR_10, int VAR_11, bool VAR_12)
{
 struct st_irq_syscfg *VAR_13 = FUNC_3(&VAR_9->dev);


 switch (VAR_10) {
 case 133:
  VAR_13->config |= VAR_3;
  break;
 case 132:
  VAR_13->config |= VAR_4;
  break;
 case 131:
  VAR_13->config |= VAR_5;
  break;
 case 136:
  VAR_13->config |= VAR_1;
  break;
 case 135:
  VAR_13->config |= VAR_2;
  break;
 case 130:
  VAR_13->config |= VAR_7;
  break;
 case 129:
  VAR_13->config |= VAR_8;
  break;
 case 128:
  VAR_13->config |= VAR_6;
  break;
 case 134:
  return 0;
 default:
  FUNC_2(&VAR_9->dev, "Unrecognised device %d\n", VAR_10);
  return -VAR_0;
 }


 VAR_13->config |= VAR_12 ?
  FUNC_1(VAR_10, VAR_11) :
  FUNC_0(VAR_10, VAR_11);

 return 0;
}
