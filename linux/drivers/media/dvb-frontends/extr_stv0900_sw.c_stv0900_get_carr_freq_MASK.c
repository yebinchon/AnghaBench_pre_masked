
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int dummy; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct stv0900_internal *VAR_3, u32 VAR_4,
     enum fe_stv0900_demod_num VAR_5)
{
 s32 VAR_6,
  VAR_7,
  VAR_8,
  VAR_9,
  VAR_10;

 VAR_6 = (FUNC_1(VAR_3, VAR_2) << 16) +
  (FUNC_1(VAR_3, VAR_1) << 8) +
  (FUNC_1(VAR_3, VAR_0));

 VAR_6 = FUNC_0(VAR_6, 24);
 VAR_9 = VAR_4 >> 12;
 VAR_10 = VAR_6 >> 12;
 VAR_7 = VAR_4 % 0x1000;
 VAR_8 = VAR_6 % 0x1000;
 VAR_6 = (VAR_9 * VAR_10) +
  ((VAR_9 * VAR_8) >> 12) +
  ((VAR_10 * VAR_7) >> 12);

 return VAR_6;
}
