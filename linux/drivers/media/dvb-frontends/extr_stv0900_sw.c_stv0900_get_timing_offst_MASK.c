
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stv0900_internal {int dummy; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct stv0900_internal*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_2(struct stv0900_internal *VAR_1,
     u32 VAR_2,
     enum fe_stv0900_demod_num VAR_3)
{
 s32 VAR_4;


 VAR_4 = (FUNC_1(VAR_1, VAR_0) << 16) +
         (FUNC_1(VAR_1, VAR_0 + 1) << 8) +
         (FUNC_1(VAR_1, VAR_0 + 2));

 VAR_4 = FUNC_0(VAR_4, 24);


 if (VAR_4 == 0)
  VAR_4 = 1;

 VAR_4 = ((s32)VAR_2 * 10) / ((s32)0x1000000 / VAR_4);
 VAR_4 /= 320;

 return VAR_4;
}
