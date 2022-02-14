
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cdn_dp_device {int dummy; } ;


 int FUNC_0 (struct cdn_dp_device*,int) ;

__attribute__((used)) static int FUNC_1(struct cdn_dp_device *VAR_0, u8 VAR_1,
          u8 VAR_2, u16 VAR_3, u8 *VAR_4)
{
 u8 VAR_5[4];
 int VAR_6, VAR_7;

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_1;
 VAR_5[2] = (VAR_3 >> 8) & 0xff;
 VAR_5[3] = VAR_3 & 0xff;

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_6 = FUNC_0(VAR_0, VAR_5[VAR_7]);
  if (VAR_6)
   return VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_0(VAR_0, VAR_4[VAR_7]);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
