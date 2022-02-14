
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int chip_id; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stv0900_internal*,int ) ;
 int FUNC_1 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct stv0900_internal *VAR_4,
     enum fe_stv0900_demod_num VAR_5)
{
 s32 VAR_6;

 if (VAR_4->chip_id == 0x10) {
  FUNC_1(VAR_4, VAR_1, 1);
  VAR_6 = FUNC_0(VAR_4, VAR_2) & 0x03;
  FUNC_1(VAR_4, VAR_3, VAR_6);
 } else if (VAR_4->chip_id <= 0x20)
  FUNC_1(VAR_4, VAR_1, 0);
 else
  FUNC_1(VAR_4, VAR_0, 0);
}
