
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3952_led_array {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct lp3952_led_array*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct lp3952_led_array *VAR_12)
{
 int VAR_13;


 VAR_13 = FUNC_0(VAR_12->client, VAR_9, 0);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_0(VAR_12->client, VAR_10,
        VAR_7 | VAR_6);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_0(VAR_12->client, VAR_8,
        VAR_4 | VAR_5);
 if (VAR_13)
  return VAR_13;


 return FUNC_1(VAR_12, 0, VAR_2, VAR_3, VAR_1, VAR_11,
        VAR_0);
}
