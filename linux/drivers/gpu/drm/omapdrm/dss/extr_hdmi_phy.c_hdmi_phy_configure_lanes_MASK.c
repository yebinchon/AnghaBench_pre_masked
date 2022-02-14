
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hdmi_phy_data {int* lane_function; int* lane_polarity; int base; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hdmi_phy_data *VAR_1)
{
 static const u16 VAR_2[] = {
  0x0123,
  0x0132,
  0x0312,
  0x0321,
  0x0231,
  0x0213,
  0x1023,
  0x1032,
  0x3012,
  0x3021,
  0x2031,
  0x2013,
  0x1203,
  0x1302,
  0x3102,
  0x3201,
  0x2301,
  0x2103,
  0x1230,
  0x1320,
  0x3120,
  0x3210,
  0x2310,
  0x2130,
 };

 u16 VAR_3 = 0;
 int VAR_4;
 unsigned int VAR_5;
 u16 VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
  VAR_3 |= VAR_1->lane_function[VAR_4] << ((3 - VAR_4) * 4);

 VAR_6 |= VAR_1->lane_polarity[0] << 0;
 VAR_6 |= VAR_1->lane_polarity[1] << 3;
 VAR_6 |= VAR_1->lane_polarity[2] << 2;
 VAR_6 |= VAR_1->lane_polarity[3] << 1;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); ++VAR_4)
  if (VAR_2[VAR_4] == VAR_3)
   break;

 if (FUNC_2(VAR_4 == FUNC_0(VAR_2)))
  VAR_4 = 0;

 VAR_5 = VAR_4;

 FUNC_1(VAR_1->base, VAR_0, VAR_5, 26, 22);
 FUNC_1(VAR_1->base, VAR_0, VAR_6, 30, 27);
}
