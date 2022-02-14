
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_led {int on; int lp; } ;
typedef enum lp8788_isink_number { ____Placeholder_lp8788_isink_number } lp8788_isink_number ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct lp8788_led *VAR_1,
   enum lp8788_isink_number VAR_2, int VAR_3)
{
 int VAR_4;

 u8 VAR_5 = 1 << VAR_2;
 u8 VAR_6 = VAR_3 << VAR_2;

 VAR_4 = FUNC_0(VAR_1->lp, VAR_0, VAR_5, VAR_6);
 if (VAR_4 == 0)
  VAR_1->on = VAR_3;

 return VAR_4;
}
