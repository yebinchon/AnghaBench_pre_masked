
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_3(VAR_0, "Backlight");
 if (VAR_3)
  goto err_request_bckl;

 VAR_3 = FUNC_3(VAR_1, "LCD");
 if (VAR_3)
  goto err_request_lcd;

 VAR_3 = FUNC_1(VAR_0, 0);
 if (VAR_3)
  goto err_dir;

 VAR_3 = FUNC_1(VAR_1, 0);
 if (VAR_3)
  goto err_dir;

 return 0;

err_dir:
 FUNC_2(VAR_1);
err_request_lcd:
 FUNC_2(VAR_0);
err_request_bckl:
 FUNC_0(VAR_2, "Failed to setup LCD GPIOs\n");

 return VAR_3;
}
