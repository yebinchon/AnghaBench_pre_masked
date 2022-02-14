
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct mxs_i2c_dev {int timing0; int timing1; int timing2; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (struct device*,char*,int,int const,int,int,int,int,int,int,int) ;
 int FUNC_3 (struct device*,char*,int,int,int const,int const) ;

__attribute__((used)) static void FUNC_4(struct mxs_i2c_dev *VAR_0, uint32_t VAR_1)
{

 const uint32_t VAR_2 = 24000000;
 uint32_t VAR_3;
 uint16_t VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9;
 struct device *VAR_10 = VAR_0->dev;

 VAR_3 = FUNC_1(VAR_2, VAR_1);

 if (VAR_3 < 25) {




  VAR_3 = 25;
  FUNC_3(VAR_10,
   "Speed too high (%u.%03u kHz), using %u.%03u kHz\n",
   VAR_1 / 1000, VAR_1 % 1000,
   VAR_2 / VAR_3 / 1000, VAR_2 / VAR_3 % 1000);
 } else if (VAR_3 > 1897) {




  VAR_3 = 1897;
  FUNC_3(VAR_10,
   "Speed too low (%u.%03u kHz), using %u.%03u kHz\n",
   VAR_1 / 1000, VAR_1 % 1000,
   VAR_2 / VAR_3 / 1000, VAR_2 / VAR_3 % 1000);
 }
 if (VAR_1 > 100000) {

  VAR_5 = FUNC_0(VAR_3 * 13, (13 + 6));
  VAR_4 = FUNC_0(VAR_3 * 6, (13 + 6));
  VAR_9 = FUNC_1(600 * (VAR_2 / 1000000), 1000);
  VAR_8 = FUNC_1(1300 * (VAR_2 / 1000000), 1000);
 } else {

  VAR_5 = FUNC_0(VAR_3 * 47, (47 + 40));
  VAR_4 = FUNC_0(VAR_3 * 40, (47 + 40));
  VAR_9 = FUNC_1(4700 * (VAR_2 / 1000000), 1000);
  VAR_8 = FUNC_1(4700 * (VAR_2 / 1000000), 1000);
 }
 VAR_6 = VAR_4 * 3 / 8;
 VAR_7 = VAR_5 * 3 / 8;

 FUNC_2(VAR_10,
  "speed=%u(actual %u) divider=%u low=%u high=%u xmit=%u rcv=%u leadin=%u bus_free=%u\n",
  VAR_1, VAR_2 / VAR_3, VAR_3, VAR_5, VAR_4,
  VAR_7, VAR_6, VAR_9, VAR_8);

 VAR_5 -= 2;
 VAR_4 -= 7;
 VAR_0->timing0 = (VAR_4 << 16) | VAR_6;
 VAR_0->timing1 = (VAR_5 << 16) | VAR_7;
 VAR_0->timing2 = (VAR_8 << 16 | VAR_9);
}
