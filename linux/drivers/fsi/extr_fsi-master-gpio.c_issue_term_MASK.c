
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct fsi_master_gpio {int dev; } ;
struct fsi_gpio_msg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fsi_gpio_msg*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct fsi_master_gpio*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct fsi_master_gpio*,int ,int *,scalar_t__*) ;
 int FUNC_6 (struct fsi_master_gpio*,struct fsi_gpio_msg*) ;

__attribute__((used)) static int FUNC_7(struct fsi_master_gpio *VAR_2, uint8_t VAR_3)
{
 struct fsi_gpio_msg VAR_4;
 unsigned long VAR_5;
 uint8_t VAR_6;
 int VAR_7;

 FUNC_0(&VAR_4, VAR_3);

 FUNC_4(VAR_5);
 FUNC_6(VAR_2, &VAR_4);
 FUNC_2(VAR_2);
 FUNC_3(VAR_5);

 VAR_7 = FUNC_5(VAR_2, 0, ((void*)0), &VAR_6);
 if (VAR_7 < 0) {
  FUNC_1(VAR_2->dev,
    "TERM failed; lost communication with slave\n");
  return -VAR_0;
 } else if (VAR_6 != VAR_1) {
  FUNC_1(VAR_2->dev, "TERM failed; response %d\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
