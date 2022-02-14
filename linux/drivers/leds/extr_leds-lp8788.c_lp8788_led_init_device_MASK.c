
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_led_platform_data {int scale; int num; int iout_code; } ;
struct lp8788_led_config {int scale; int num; int iout; } ;
struct lp8788_led {int isink_num; int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp8788_led_config VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct lp8788_led *VAR_5,
    struct lp8788_led_platform_data *VAR_6)
{
 struct lp8788_led_config *VAR_7 = &VAR_2;
 u8 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 if (VAR_6) {
  VAR_7->scale = VAR_6->scale;
  VAR_7->num = VAR_6->num;
  VAR_7->iout = VAR_6->iout_code;
 }

 VAR_5->isink_num = VAR_7->num;


 VAR_8 = VAR_0;
 VAR_9 = 1 << (VAR_7->num + VAR_1);
 VAR_10 = VAR_7->scale << (VAR_7->num + VAR_1);
 VAR_11 = FUNC_0(VAR_5->lp, VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  return VAR_11;


 VAR_8 = VAR_3[VAR_7->num];
 VAR_9 = VAR_4[VAR_7->num];
 VAR_10 = VAR_7->iout;

 return FUNC_0(VAR_5->lp, VAR_8, VAR_9, VAR_10);
}
