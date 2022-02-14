
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_char ;



__attribute__((used)) static void
FUNC_0(unsigned long VAR_0, u_char *VAR_1, u_char *VAR_2, u_char *VAR_3)
{
 VAR_0 += 150;
 VAR_0 &= 0xffffff;
 *VAR_1 = VAR_0 / (60 * 75);
 VAR_0 %= (60 * 75);
 *VAR_2 = VAR_0 / 75;
 *VAR_3 = VAR_0 % 75;
}
