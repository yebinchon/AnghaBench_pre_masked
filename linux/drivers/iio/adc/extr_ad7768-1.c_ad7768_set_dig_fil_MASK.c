
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7768_state {int gpio_sync_in; } ;
typedef enum ad7768_dec_rate { ____Placeholder_ad7768_dec_rate } ad7768_dec_rate ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct ad7768_state*,int ,unsigned int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct ad7768_state *VAR_3,
         enum ad7768_dec_rate VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
  VAR_5 = FUNC_1(VAR_4);
 else
  VAR_5 = FUNC_0(VAR_4);

 VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_3(VAR_3->gpio_sync_in, 1);
 FUNC_3(VAR_3->gpio_sync_in, 0);

 return 0;
}
