
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tmp006_data {int client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct tmp006_data *VAR_3, u8 VAR_4)
{
 s32 VAR_5;
 int VAR_6 = 50;

 while (VAR_6-- > 0) {
  VAR_5 = FUNC_0(VAR_3->client,
   VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_5 & VAR_2)
   break;
  FUNC_1(100);
 }

 if (VAR_6 < 0)
  return -VAR_0;

 return FUNC_0(VAR_3->client, VAR_4);
}
