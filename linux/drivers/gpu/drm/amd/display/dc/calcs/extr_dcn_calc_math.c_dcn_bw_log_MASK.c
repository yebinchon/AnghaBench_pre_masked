
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(float VAR_0, float VAR_1)
{
 int * const VAR_2 = (int *)(&VAR_0);
 int VAR_3 = *VAR_2;
 const int VAR_4 = ((VAR_3 >> 23) & 255) - 128;
 VAR_3 &= ~(255 << 23);
 VAR_3 += 127 << 23;
 *VAR_2 = VAR_3;

 VAR_0 = ((-1.0f / 3) * VAR_0 + 2) * VAR_0 - 2.0f / 3;

 if (VAR_1 > 2.00001 || VAR_1 < 1.99999)
  return (VAR_0 + VAR_4) / FUNC_0(VAR_1, 2);
 else
  return (VAR_0 + VAR_4);
}
