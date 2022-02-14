
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bd2802_led {int client; } ;
typedef enum led_ids { ____Placeholder_led_ids } led_ids ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bd2802_led*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bd2802_led *VAR_3, enum led_ids VAR_4)
{
 enum led_ids VAR_5 = (VAR_4 == VAR_1) ? VAR_2 : VAR_1;
 u8 VAR_6, VAR_7;

 VAR_7 = !FUNC_1(VAR_3, VAR_5);
 if (VAR_4 == VAR_1)
  VAR_6 = FUNC_0(VAR_7, 1);
 else
  VAR_6 = FUNC_0(1 , VAR_7);

 FUNC_2(VAR_3->client, VAR_0, VAR_6);
}
