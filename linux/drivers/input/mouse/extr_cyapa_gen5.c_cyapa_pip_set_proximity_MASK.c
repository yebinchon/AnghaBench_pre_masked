
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int VAR_3 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_4 ;

int FUNC_3(struct cyapa *VAR_5, bool VAR_6)
{
 u8 VAR_7[] = { 0x04, 0x00, 0x06, 0x00, 0x2f, 0x00, VAR_3,
       (u8)!!VAR_6
 };
 u8 VAR_8[6];
 int VAR_9;
 int VAR_10;

 VAR_9 = sizeof(VAR_8);
 VAR_10 = FUNC_2(VAR_5, VAR_7, sizeof(VAR_7),
   VAR_8, &VAR_9,
   500, VAR_4, 0);
 if (VAR_10 || !FUNC_1(VAR_8, VAR_3) ||
   !FUNC_0(VAR_8)) {
  VAR_10 = (VAR_10 == -VAR_2) ? -VAR_1 : VAR_10;
  return VAR_10 < 0 ? VAR_10 : -VAR_0;
 }

 return 0;
}
