
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r600_cs_track {int* cb_color_view; int* cb_color_bo_offset; int* cb_color_bo_mc; int* cb_color_frag_offset; int* cb_color_tile_offset; int* cb_color_mask; int is_resolve; int nsamples; int log_nsamples; int cb_target_mask; int cb_shader_mask; int cb_dirty; int db_bo_mc; int db_depth_info; int db_depth_view; int db_depth_size; int db_depth_control; int db_dirty; int htile_offset; int* vgt_strmout_bo_offset; int* vgt_strmout_bo_mc; int streamout_dirty; int sx_misc_kill_all_prims; int ** vgt_strmout_bo; scalar_t__* vgt_strmout_size; scalar_t__ htile_surface; int * htile_bo; scalar_t__ db_depth_size_idx; int * db_bo; int ** cb_color_tile_bo; int ** cb_color_frag_bo; int ** cb_color_bo; scalar_t__* cb_color_info; scalar_t__* cb_color_size_idx; scalar_t__* cb_color_size; scalar_t__* cb_color_base_last; int sq_config; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct r600_cs_track *VAR_1)
{
 int VAR_2;


 VAR_1->sq_config = VAR_0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1->cb_color_base_last[VAR_2] = 0;
  VAR_1->cb_color_size[VAR_2] = 0;
  VAR_1->cb_color_size_idx[VAR_2] = 0;
  VAR_1->cb_color_info[VAR_2] = 0;
  VAR_1->cb_color_view[VAR_2] = 0xFFFFFFFF;
  VAR_1->cb_color_bo[VAR_2] = ((void*)0);
  VAR_1->cb_color_bo_offset[VAR_2] = 0xFFFFFFFF;
  VAR_1->cb_color_bo_mc[VAR_2] = 0xFFFFFFFF;
  VAR_1->cb_color_frag_bo[VAR_2] = ((void*)0);
  VAR_1->cb_color_frag_offset[VAR_2] = 0xFFFFFFFF;
  VAR_1->cb_color_tile_bo[VAR_2] = ((void*)0);
  VAR_1->cb_color_tile_offset[VAR_2] = 0xFFFFFFFF;
  VAR_1->cb_color_mask[VAR_2] = 0xFFFFFFFF;
 }
 VAR_1->is_resolve = 0;
 VAR_1->nsamples = 16;
 VAR_1->log_nsamples = 4;
 VAR_1->cb_target_mask = 0xFFFFFFFF;
 VAR_1->cb_shader_mask = 0xFFFFFFFF;
 VAR_1->cb_dirty = 1;
 VAR_1->db_bo = ((void*)0);
 VAR_1->db_bo_mc = 0xFFFFFFFF;

 VAR_1->db_depth_info = 7 | (1 << 25);
 VAR_1->db_depth_view = 0xFFFFC000;
 VAR_1->db_depth_size = 0xFFFFFFFF;
 VAR_1->db_depth_size_idx = 0;
 VAR_1->db_depth_control = 0xFFFFFFFF;
 VAR_1->db_dirty = 1;
 VAR_1->htile_bo = ((void*)0);
 VAR_1->htile_offset = 0xFFFFFFFF;
 VAR_1->htile_surface = 0;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_1->vgt_strmout_size[VAR_2] = 0;
  VAR_1->vgt_strmout_bo[VAR_2] = ((void*)0);
  VAR_1->vgt_strmout_bo_offset[VAR_2] = 0xFFFFFFFF;
  VAR_1->vgt_strmout_bo_mc[VAR_2] = 0xFFFFFFFF;
 }
 VAR_1->streamout_dirty = 1;
 VAR_1->sx_misc_kill_all_prims = 0;
}
