
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const u32 VAR_2, const u8 *VAR_3,
     u32 *VAR_4, u32 *VAR_5)
{
 u8 VAR_6;
 int VAR_7 = 0;

 if (!VAR_4 || !VAR_5)
  return VAR_0;

 *VAR_4 = 0;
 do {
  if (VAR_7 >= VAR_2)
   return VAR_0;

  VAR_6 = VAR_3[VAR_7] & 0x80;
  *VAR_4 <<= 7;
  *VAR_4 |= VAR_3[VAR_7] & 0x7f;
  ++VAR_7;
 } while (VAR_6);

 *VAR_5 = VAR_7;
 return VAR_1;
}
