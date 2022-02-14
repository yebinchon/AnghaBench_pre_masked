
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_rate_table {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;

uint32_t
FUNC_3(const struct ieee80211_rate_table *VAR_7,
 uint32_t VAR_8, uint16_t VAR_9,
 int VAR_10, int VAR_11, int VAR_12)
{
 static const uint16_t VAR_13[16] = {
     26, 52, 78, 104, 156, 208, 234, 260,
     52, 104, 156, 208, 312, 416, 468, 520
 };
 static const uint16_t VAR_14[16] = {
     54, 108, 162, 216, 324, 432, 486, 540,
     108, 216, 324, 432, 648, 864, 972, 1080,
 };
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_1(VAR_9 & VAR_5, ("not mcs %d", VAR_9));
 FUNC_1((VAR_9 &~ VAR_5) < 16, ("bad mcs 0x%x", VAR_9));

 if (VAR_11)
  VAR_15 = VAR_14[VAR_9 & 0xf];
 else
  VAR_15 = VAR_13[VAR_9 & 0xf];
 VAR_16 = VAR_6 + (VAR_8 << 3);
 VAR_17 = FUNC_2(VAR_16, VAR_15);
 if (VAR_12)
  VAR_18 = ((VAR_17 * 18) + 4) / 5;
 else
  VAR_18 = VAR_17 * 4;
 return VAR_18 + VAR_2 + VAR_0 +
     VAR_1 + VAR_3 + VAR_4 + FUNC_0(VAR_10);
}
