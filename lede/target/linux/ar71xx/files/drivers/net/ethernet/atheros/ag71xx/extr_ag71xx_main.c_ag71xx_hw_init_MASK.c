
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ag71xx_platform_data {int reset_bit; scalar_t__ is_ar724x; } ;
struct ag71xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ag71xx*) ;
 struct ag71xx_platform_data* FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (struct ag71xx*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct ag71xx *VAR_4)
{
 struct ag71xx_platform_data *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6 = VAR_5->reset_bit;

 FUNC_3(VAR_4);

 if (VAR_5->is_ar724x) {
  u32 VAR_7 = VAR_6;

  VAR_7 &= VAR_1 | VAR_2;
  VAR_6 &= ~(VAR_1 | VAR_2);

  FUNC_6(VAR_7);
  FUNC_7(50);
  FUNC_5(VAR_7);
  FUNC_7(200);
 }

 FUNC_4(VAR_4, VAR_0, VAR_3);
 FUNC_8(20);

 FUNC_6(VAR_6);
 FUNC_7(100);
 FUNC_5(VAR_6);
 FUNC_7(200);

 FUNC_2(VAR_4);

 FUNC_0(VAR_4);
}
