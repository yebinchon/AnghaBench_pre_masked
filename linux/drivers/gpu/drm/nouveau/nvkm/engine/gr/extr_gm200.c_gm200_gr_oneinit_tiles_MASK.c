
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf100_gr {int gpc_nr; int tpc_total; int screen_tile_row_offset; int tile; } ;


 int FUNC_0 (struct gf100_gr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct gf100_gr *VAR_3)
{






 if (VAR_3->gpc_nr == 2 && VAR_3->tpc_total == 8) {
  FUNC_1(VAR_3->tile, VAR_0, VAR_3->tpc_total);
  VAR_3->screen_tile_row_offset = 1;
 } else
 if (VAR_3->gpc_nr == 4 && VAR_3->tpc_total == 16) {
  FUNC_1(VAR_3->tile, VAR_1, VAR_3->tpc_total);
  VAR_3->screen_tile_row_offset = 4;
 } else
 if (VAR_3->gpc_nr == 6 && VAR_3->tpc_total == 24) {
  FUNC_1(VAR_3->tile, VAR_2, VAR_3->tpc_total);
  VAR_3->screen_tile_row_offset = 5;
 } else {
  FUNC_0(VAR_3);
 }
}
