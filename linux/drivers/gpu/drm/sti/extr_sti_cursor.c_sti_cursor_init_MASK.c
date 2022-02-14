
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_cursor {unsigned short* clut; } ;



__attribute__((used)) static void FUNC_0(struct sti_cursor *VAR_0)
{
 unsigned short *VAR_1 = VAR_0->clut;
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;


 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
     *VAR_1++ = (VAR_2 * 5) << 12 |
        (VAR_3 * 5) << 8 |
        (VAR_4 * 5) << 4 |
        (VAR_5 * 5);
}
