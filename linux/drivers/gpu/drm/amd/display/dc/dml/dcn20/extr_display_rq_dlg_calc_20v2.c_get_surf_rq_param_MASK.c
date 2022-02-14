
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_6__ {unsigned int viewport_width_c; unsigned int viewport_height_c; unsigned int data_pitch_c; unsigned int meta_pitch_c; unsigned int viewport_width; unsigned int viewport_height; unsigned int data_pitch; unsigned int meta_pitch; int source_scan; int macro_tile_size; int sw_mode; int source_format; } ;
typedef TYPE_1__ display_pipe_source_params_st ;
struct TYPE_7__ {int chunk_bytes; int min_chunk_bytes; int meta_chunk_bytes; int min_meta_chunk_bytes; int mpte_group_bytes; } ;
typedef TYPE_2__ display_data_rq_sizing_params_st ;
typedef int display_data_rq_misc_params_st ;
typedef int display_data_rq_dlg_params_st ;


 int FUNC_0 (struct display_mode_lib*,int *,int *,TYPE_2__*,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct display_mode_lib *VAR_0,
  display_data_rq_sizing_params_st *VAR_1,
  display_data_rq_dlg_params_st *VAR_2,
  display_data_rq_misc_params_st *VAR_3,
  const display_pipe_source_params_st VAR_4,
  bool VAR_5)
{
 bool VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = VAR_6 ? 2 : 1;


 if (VAR_5) {
  VAR_7 = VAR_4.viewport_width_c / VAR_11;
  VAR_8 = VAR_4.viewport_height_c;
  VAR_9 = VAR_4.data_pitch_c;
  VAR_10 = VAR_4.meta_pitch_c;
 } else {
  VAR_7 = VAR_4.viewport_width / VAR_11;
  VAR_8 = VAR_4.viewport_height;
  VAR_9 = VAR_4.data_pitch;
  VAR_10 = VAR_4.meta_pitch;
 }

 VAR_1->chunk_bytes = 8192;

 if (VAR_1->chunk_bytes == 64 * 1024)
  VAR_1->min_chunk_bytes = 0;
 else
  VAR_1->min_chunk_bytes = 1024;

 VAR_1->meta_chunk_bytes = 2048;
 VAR_1->min_meta_chunk_bytes = 256;

 VAR_1->mpte_group_bytes = 2048;

 FUNC_0(VAR_0,
   VAR_2,
   VAR_3,
   VAR_1,
   VAR_7,
   VAR_8,
   VAR_9,
   VAR_10,
   VAR_4.source_format,
   VAR_4.sw_mode,
   VAR_4.macro_tile_size,
   VAR_4.source_scan,
   VAR_5);
}
