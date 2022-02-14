
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const u8 *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0, VAR_5, VAR_6;

 while (VAR_3 < VAR_2) {
  VAR_5 = *VAR_1;
  VAR_4 += VAR_5;

  VAR_6 = (VAR_5 * VAR_0) + 1;
  VAR_1 += VAR_6;
  VAR_3 += VAR_6;
 }





 if (VAR_3 != VAR_2)
  VAR_4 = 0;

 return VAR_4;
}
