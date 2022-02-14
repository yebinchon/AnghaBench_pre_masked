
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm75_data {int current_conf; int client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct lm75_data *VAR_2, u8 VAR_3,
        u8 VAR_4)
{
 u8 VAR_5;

 VAR_4 |= VAR_1;
 VAR_5 = VAR_2->current_conf & ~VAR_4;
 VAR_5 |= VAR_3;

 if (VAR_2->current_conf != VAR_5) {
  s32 VAR_6;

  VAR_6 = FUNC_0(VAR_2->client, VAR_0,
      VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_2->current_conf = VAR_5;
 }
 return 0;
}
