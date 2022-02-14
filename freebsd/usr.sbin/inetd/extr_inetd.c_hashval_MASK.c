
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0xABC3D20F;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3, ++VAR_1)
  VAR_4 = (VAR_4 << 5) ^ (VAR_4 >> 23) ^ *VAR_1;
 VAR_4 = (VAR_4 ^ (VAR_4 >> 16)) & (VAR_0 - 1);
 return VAR_4;
}
