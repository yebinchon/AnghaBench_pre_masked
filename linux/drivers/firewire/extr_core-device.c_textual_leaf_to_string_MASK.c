
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int const,unsigned int) ;

__attribute__((used)) static int FUNC_1(const u32 *VAR_2, char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5, VAR_6;
 char VAR_7;

 if (!VAR_4 || !VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2[0] >> 16, 256U);
 if (VAR_5 < 2)
  return -VAR_1;

 if (VAR_2[1] != 0 || VAR_2[2] != 0)

  return -VAR_1;

 VAR_2 += 3;
 VAR_5 -= 2;
 for (VAR_6 = 0; VAR_6 < VAR_5 * 4 && VAR_6 < VAR_4 - 1; VAR_6++) {
  VAR_7 = VAR_2[VAR_6 / 4] >> (24 - 8 * (VAR_6 % 4));
  if (VAR_7 == '\0')
   break;
  VAR_3[VAR_6] = VAR_7;
 }
 VAR_3[VAR_6] = '\0';

 return VAR_6;
}
