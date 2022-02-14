
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct fsi_master_gpio {int dummy; } ;
struct fsi_gpio_msg {int msg; int bits; } ;


 scalar_t__ FUNC_0 (struct fsi_master_gpio*) ;
 int FUNC_1 (struct fsi_master_gpio*) ;
 int FUNC_2 (struct fsi_master_gpio*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fsi_master_gpio *VAR_0, struct fsi_gpio_msg *VAR_1,
   uint8_t VAR_2)
{
 uint8_t VAR_3, VAR_4;

 FUNC_1(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0);
  VAR_1->msg <<= 1;
  VAR_1->msg |= ~VAR_4 & 0x1;
 }
 VAR_1->bits += VAR_2;

 FUNC_2(VAR_0, VAR_2, VAR_1->msg);
}
