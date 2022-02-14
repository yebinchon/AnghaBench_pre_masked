
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int (*) (int )) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 int VAR_6 = 0;

 FUNC_8("initializing\n");

 VAR_2 = VAR_5->dev.platform_data;
 if (!VAR_2) {
  FUNC_7("omap3_rom_rng_call is NULL\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_1, FUNC_6);
 VAR_4 = FUNC_4(&VAR_5->dev, "ick");
 if (FUNC_1(VAR_4)) {
  FUNC_7("unable to get RNG clock\n");
  return FUNC_2(VAR_4);
 }


 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;
 FUNC_6(0);

 return FUNC_5(&VAR_3);
}
