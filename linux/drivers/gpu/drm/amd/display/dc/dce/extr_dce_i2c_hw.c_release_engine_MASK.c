
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_i2c_hw {int engine_keep_power_up_count; int original_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct dce_i2c_hw*,int ) ;

__attribute__((used)) static void FUNC_6(
 struct dce_i2c_hw *VAR_9)
{
 bool VAR_10;



 FUNC_5(VAR_9, VAR_9->original_speed);



 {
  uint32_t VAR_11 = 0;

  FUNC_1(VAR_5, VAR_5, &VAR_11);

  VAR_10 = (VAR_11 == 1);
 }

 if (VAR_10)
  FUNC_3(VAR_1,
        VAR_3, 1,
        VAR_6, 1);
 else
  FUNC_2(VAR_1, VAR_6, 1);

 if (!VAR_9->engine_keep_power_up_count)
  FUNC_4(VAR_8, 1, FUNC_0(VAR_8, VAR_2), 0);

 FUNC_3(VAR_0, VAR_4, 1,
  VAR_7, 0);

}
