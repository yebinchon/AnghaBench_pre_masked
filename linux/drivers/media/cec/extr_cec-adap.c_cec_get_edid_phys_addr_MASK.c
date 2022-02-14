
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int const u16 ;


 int const VAR_0 ;
 unsigned int FUNC_0 (int const*,unsigned int) ;

u16 FUNC_1(const u8 *VAR_1, unsigned int VAR_2,
      unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3)
  *VAR_3 = VAR_4;
 if (VAR_4 == 0)
  return VAR_0;
 return (VAR_1[VAR_4] << 8) | VAR_1[VAR_4 + 1];
}
