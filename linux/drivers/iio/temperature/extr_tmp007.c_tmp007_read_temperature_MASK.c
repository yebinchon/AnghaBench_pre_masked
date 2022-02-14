
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tmp007_data {int client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct tmp007_data *VAR_4, u8 VAR_5)
{
 s32 VAR_6;
 int VAR_7 = 50;

 while (VAR_7-- > 0) {
  VAR_6 = FUNC_0(VAR_4->client,
   VAR_1);
  if (VAR_6 < 0)
   return VAR_6;
  if ((VAR_6 & VAR_2) &&
   !(VAR_6 & VAR_3))
    break;
  FUNC_1(100);
 }

 if (VAR_7 < 0)
  return -VAR_0;

 return FUNC_0(VAR_4->client, VAR_5);
}
