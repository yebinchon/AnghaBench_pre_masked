
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;



__attribute__((used)) static u16_t
FUNC_0(u16_t VAR_0, const u8_t *VAR_1, u16_t VAR_2)
{
 u16_t VAR_3;
 const u8_t *VAR_4;
 const u8_t *VAR_5;

 VAR_4 = VAR_1;
 VAR_5 = VAR_1 + VAR_2 - 1;

 while(VAR_4 < VAR_5) {
  VAR_3 = (VAR_4[0] << 8) + VAR_4[1];
  VAR_0 += VAR_3;
  if(VAR_0 < VAR_3) {
   VAR_0++;
  }
  VAR_4 += 2;
 }

 if(VAR_4 == VAR_5) {
  VAR_3 = (VAR_4[0] << 8) + 0;
  VAR_0 += VAR_3;
  if(VAR_0 < VAR_3) {
   VAR_0++;
  }
 }


 return VAR_0;
}
