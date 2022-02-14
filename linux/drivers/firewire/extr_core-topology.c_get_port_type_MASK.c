
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = (VAR_1 + 5) / 8;
 VAR_3 = 16 - ((VAR_1 + 5) & 7) * 2;
 return (VAR_0[VAR_2] >> VAR_3) & 0x03;
}
