
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_feature {int dummy; } ;



 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 long FUNC_1 (struct platform_device*) ;

__attribute__((used)) static long
FUNC_2(struct platform_device *VAR_2, struct dfl_feature *VAR_3,
        unsigned int VAR_4, unsigned long VAR_5)
{
 long VAR_6;

 switch (VAR_4) {
 case 128:
  if (!VAR_5)
   VAR_6 = FUNC_1(VAR_2);
  else
   VAR_6 = -VAR_0;
  break;
 default:
  FUNC_0(&VAR_2->dev, "%x cmd not handled", VAR_4);
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
