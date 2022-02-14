
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int bl_gen5_bl_exit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_5 ;

int FUNC_1(struct cyapa *VAR_6)
{

 u8 VAR_7[] = { 0x04, 0x00,
  0x0B, 0x00, 0x40, 0x00, 0x01, 0x3b, 0x00, 0x00,
  0x20, 0xc7, 0x17
 };
 u8 VAR_8[11];
 int VAR_9;
 int VAR_10;

 VAR_9 = sizeof(VAR_8);
 VAR_10 = FUNC_0(VAR_6,
   VAR_7, sizeof(VAR_7),
   VAR_8, &VAR_9,
   5000, VAR_5, 0);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 == VAR_2 ||
   VAR_8[VAR_4] ==
    VAR_3)
  return -VAR_0;

 if (VAR_8[0] == 0x00 && VAR_8[1] == 0x00)
  return 0;

 return -VAR_1;
}
