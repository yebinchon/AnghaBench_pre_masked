
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fixed_16_16_t ;
typedef int u32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static uint_fixed_16_16_t
FUNC_2(u32 VAR_1, u32 VAR_2, u32 VAR_3,
        uint_fixed_16_16_t VAR_4)
{
 u32 VAR_5;
 uint_fixed_16_16_t VAR_6;

 if (VAR_3 == 0)
  return VAR_0;

 VAR_5 = VAR_3 * VAR_1;
 VAR_5 = FUNC_0(VAR_5,
        VAR_2 * 1000);
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 return VAR_6;
}
