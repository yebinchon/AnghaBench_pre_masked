
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dfl_feature {int dummy; } ;



 long VAR_0 ;
 long FUNC_0 (struct platform_device*,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct platform_device *VAR_1,
    struct dfl_feature *VAR_2,
    unsigned int VAR_3, unsigned long VAR_4)
{
 long VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
