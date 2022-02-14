
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_draw_params {int mv_vert_old; int mv_vert_new; void* mv_hor_new; void* mv_hor_old; } ;
struct tpg_data {int mv_hor_count; int src_width; int mv_hor_step; int mv_vert_count; int src_height; int mv_vert_step; } ;


 void* FUNC_0 (struct tpg_data const*,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(const struct tpg_data *VAR_0, unsigned VAR_1,
        struct tpg_draw_params *VAR_2)
{
 VAR_2->mv_hor_old =
  FUNC_0(VAR_0, VAR_1, VAR_0->mv_hor_count % VAR_0->src_width);
 VAR_2->mv_hor_new =
  FUNC_0(VAR_0, VAR_1, (VAR_0->mv_hor_count + VAR_0->mv_hor_step) %
          VAR_0->src_width);
 VAR_2->mv_vert_old = VAR_0->mv_vert_count % VAR_0->src_height;
 VAR_2->mv_vert_new =
  (VAR_0->mv_vert_count + VAR_0->mv_vert_step) % VAR_0->src_height;
}
