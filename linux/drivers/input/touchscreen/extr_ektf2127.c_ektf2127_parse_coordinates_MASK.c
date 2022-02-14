
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_mt_pos {int x; int y; } ;



__attribute__((used)) static void FUNC_0(const u8 *VAR_0, unsigned int VAR_1,
           struct input_mt_pos *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = 2 + VAR_4 * 3;

  VAR_2[VAR_4].x = (VAR_0[VAR_3] & 0x0f);
  VAR_2[VAR_4].x <<= 8;
  VAR_2[VAR_4].x |= VAR_0[VAR_3 + 2];

  VAR_2[VAR_4].y = (VAR_0[VAR_3] & 0xf0);
  VAR_2[VAR_4].y <<= 4;
  VAR_2[VAR_4].y |= VAR_0[VAR_3 + 1];
 }
}
