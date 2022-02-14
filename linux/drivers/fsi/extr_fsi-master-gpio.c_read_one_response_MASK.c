
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct fsi_master_gpio {int dev; } ;
struct fsi_gpio_msg {int bits; int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct fsi_master_gpio*,struct fsi_gpio_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct fsi_master_gpio *VAR_6,
  uint8_t VAR_7, struct fsi_gpio_msg *VAR_8, uint8_t *VAR_9)
{
 struct fsi_gpio_msg VAR_10;
 unsigned long VAR_11;
 uint32_t VAR_12;
 uint8_t VAR_13;
 int VAR_14;

 FUNC_3(VAR_11);


 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_10.bits = 0;
  VAR_10.msg = 0;
  FUNC_4(VAR_6, &VAR_10, 1);
  if (VAR_10.msg)
   break;
 }
 if (VAR_14 == VAR_4) {
  FUNC_1(VAR_6->dev,
   "Master time out waiting for response\n");
  FUNC_2(VAR_11);
  return -VAR_2;
 }

 VAR_10.bits = 0;
 VAR_10.msg = 0;


 FUNC_4(VAR_6, &VAR_10, 4);

 VAR_13 = VAR_10.msg & 0x3;


 if (VAR_13 == VAR_5 && VAR_7)
  FUNC_4(VAR_6, &VAR_10, VAR_7 * 8);


 FUNC_4(VAR_6, &VAR_10, VAR_3);

 FUNC_2(VAR_11);


 VAR_12 = FUNC_0(0, 1, 1);
 VAR_12 = FUNC_0(VAR_12, VAR_10.msg, VAR_10.bits);
 if (VAR_12) {

  if (((~VAR_10.msg) & ((1ull << VAR_10.bits) - 1)) == 0)
   return -VAR_1;
  FUNC_1(VAR_6->dev, "ERR response CRC msg: 0x%016llx (%d bits)\n",
   VAR_10.msg, VAR_10.bits);
  return -VAR_0;
 }

 if (VAR_8)
  *VAR_8 = VAR_10;
 if (VAR_9)
  *VAR_9 = VAR_13;

 return 0;
}
