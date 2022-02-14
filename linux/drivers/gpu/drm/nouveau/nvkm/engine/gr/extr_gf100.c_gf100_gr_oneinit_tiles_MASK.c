
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct gf100_gr {int tpc_total; int screen_tile_row_offset; int gpc_nr; int* tpc_nr; int tpc_max; int* tile; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;

void
FUNC_1(struct gf100_gr *VAR_1)
{
 static const u8 VAR_2[] = {
  3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61
 };
 int VAR_3[VAR_0], VAR_4[VAR_0], VAR_5[VAR_0], VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 u8 VAR_10[VAR_0];
 bool VAR_11;

 switch (VAR_1->tpc_total) {
 case 15: VAR_1->screen_tile_row_offset = 0x06; break;
 case 14: VAR_1->screen_tile_row_offset = 0x05; break;
 case 13: VAR_1->screen_tile_row_offset = 0x02; break;
 case 11: VAR_1->screen_tile_row_offset = 0x07; break;
 case 10: VAR_1->screen_tile_row_offset = 0x06; break;
 case 7:
 case 5: VAR_1->screen_tile_row_offset = 0x01; break;
 case 3: VAR_1->screen_tile_row_offset = 0x02; break;
 case 2:
 case 1: VAR_1->screen_tile_row_offset = 0x01; break;
 default: VAR_1->screen_tile_row_offset = 0x03;
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   if (VAR_1->tpc_total % VAR_2[VAR_6]) {
    VAR_1->screen_tile_row_offset = VAR_2[VAR_6];
    break;
   }
  }
  break;
 }


 for (VAR_6 = 0; VAR_6 < VAR_1->gpc_nr; VAR_6++)
  VAR_10[VAR_6] = VAR_6;
 VAR_11 = 0;

 while (!VAR_11) {
  for (VAR_11 = 1, VAR_6 = 0; VAR_6 < VAR_1->gpc_nr - 1; VAR_6++) {
   if (VAR_1->tpc_nr[VAR_10[VAR_6 + 1]] >
       VAR_1->tpc_nr[VAR_10[VAR_6 + 0]]) {
    u8 VAR_12 = VAR_10[VAR_6];
    VAR_10[VAR_6 + 0] = VAR_10[VAR_6 + 1];
    VAR_10[VAR_6 + 1] = VAR_12;
    VAR_11 = 0;
   }
  }
 }


 VAR_8 = VAR_1->gpc_nr * VAR_1->tpc_max;
 if (VAR_8 & 1)
  VAR_8 = 2;
 else
  VAR_8 = 1;

 VAR_9 = VAR_1->gpc_nr * VAR_1->tpc_max * VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_1->gpc_nr; VAR_6++) {
  VAR_3[VAR_6] = VAR_1->tpc_nr[VAR_10[VAR_6]] * VAR_1->gpc_nr * VAR_8;
   VAR_4[VAR_6] = VAR_6 * VAR_1->tpc_max * VAR_8 - VAR_9/2;
    VAR_5[VAR_6] = VAR_3[VAR_6] + VAR_4[VAR_6];
 }

 for (VAR_6 = 0; VAR_6 < VAR_1->tpc_total;) {
  for (VAR_7 = 0; VAR_7 < VAR_1->gpc_nr; VAR_7++) {
   if ((VAR_5[VAR_7] * 2) >= VAR_9) {
    VAR_1->tile[VAR_6++] = VAR_10[VAR_7];
    VAR_5[VAR_7] += VAR_3[VAR_7] - VAR_9;
   } else {
    VAR_5[VAR_7] += VAR_3[VAR_7];
   }
  }
 }
}
