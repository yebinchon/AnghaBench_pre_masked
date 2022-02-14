
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct fsi_master_gpio {int dev; } ;
struct fsi_gpio_msg {int msg; int bits; } ;


 int FUNC_0 (struct fsi_master_gpio*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct fsi_master_gpio*,int) ;
 int FUNC_3 (struct fsi_master_gpio*,int ) ;
 int FUNC_4 (struct fsi_master_gpio*,int,int) ;

__attribute__((used)) static void FUNC_5(struct fsi_master_gpio *VAR_0,
   const struct fsi_gpio_msg *VAR_1)
{
 uint8_t VAR_2;
 uint64_t VAR_3 = ~VAR_1->msg;
 uint64_t VAR_4 = 0x1ULL << (VAR_1->bits - 1);
 uint64_t VAR_5 = ~0;
 int VAR_6;

 FUNC_4(VAR_0, VAR_1->bits, VAR_1->msg);

 if (!VAR_1->bits) {
  FUNC_1(VAR_0->dev, "trying to output 0 bits\n");
  return;
 }
 FUNC_3(VAR_0, 0);


 FUNC_2(VAR_0, 0);
 FUNC_0(VAR_0, 1);


 for (VAR_2 = 0; VAR_2 < VAR_1->bits; VAR_2++) {
  VAR_6 = (VAR_3 & VAR_4) >> (VAR_1->bits - 1);
  if (VAR_5 ^ VAR_6) {
   FUNC_2(VAR_0, VAR_6);
   VAR_5 = VAR_6;
  }
  FUNC_0(VAR_0, 1);
  VAR_3 <<= 1;
 }
}
