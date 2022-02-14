
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fsi_master_gpio {int dev; } ;
struct fsi_gpio_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fsi_master_gpio*,int ,size_t,void*) ;
 int FUNC_3 (struct fsi_master_gpio*,struct fsi_gpio_msg*) ;

__attribute__((used)) static int FUNC_4(struct fsi_master_gpio *VAR_3, uint8_t VAR_4,
  struct fsi_gpio_msg *VAR_5, size_t VAR_6, void *VAR_7)
{
 int VAR_8 = -VAR_0, VAR_9 = 0;

 while ((VAR_9++) < VAR_2) {
  VAR_8 = FUNC_3(VAR_3, VAR_5);
  if (VAR_8)
   break;
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7);
  if (VAR_8 != -VAR_0)
   break;
  VAR_8 = -VAR_1;
  FUNC_0(VAR_3->dev, "ECRC retry %d\n", VAR_9);


  FUNC_1(1);
 }

 return VAR_8;
}
