
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(unsigned long VAR_0, u32 VAR_1, u32 VAR_2,
    unsigned long *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;
 u32 VAR_6, VAR_7;

 VAR_6 = VAR_2;
 VAR_7 = VAR_2 >> 16;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++, VAR_6 >>= 2, VAR_7 >>= 4)
  if ((VAR_6 & 3) && (VAR_7 & 15) == VAR_1 && VAR_3[VAR_5] == VAR_0)
   VAR_4 |= (1 << VAR_5);
 return VAR_4;
}
