
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_plane_state {int * blend_tf; int * lut3d_func; int * in_shaper_func; int * in_transfer_func; int * gamma_correction; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dc_plane_state *VAR_0)
{
 if (VAR_0->gamma_correction != ((void*)0)) {
  FUNC_1(&VAR_0->gamma_correction);
 }
 if (VAR_0->in_transfer_func != ((void*)0)) {
  FUNC_2(
    VAR_0->in_transfer_func);
  VAR_0->in_transfer_func = ((void*)0);
 }
}
