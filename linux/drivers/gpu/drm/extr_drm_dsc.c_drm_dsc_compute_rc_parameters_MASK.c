
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dsc_config {int slice_width; unsigned long slice_chunk_size; int bits_per_pixel; int mux_word_size; int bits_per_component; int slice_height; int initial_scale_value; unsigned long scale_decrement_interval; scalar_t__ final_offset; scalar_t__ rc_model_size; int initial_xmit_delay; unsigned long nfl_bpg_offset; int first_line_bpg_offset; unsigned long slice_bpg_offset; unsigned long initial_offset; int scale_increment_interval; unsigned long rc_bits; unsigned long initial_dec_delay; scalar_t__ native_422; scalar_t__ convert_rgb; scalar_t__ native_420; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct drm_dsc_config *VAR_3)
{
 unsigned long VAR_4 = 0;
 unsigned long VAR_5 = 0;
 unsigned long VAR_6 = 0;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;
 unsigned long VAR_10 = 0;

 if (VAR_3->native_420 || VAR_3->native_422) {

  VAR_4 = FUNC_0(VAR_3->slice_width / 2,
            VAR_0);


  VAR_3->slice_chunk_size = FUNC_0(VAR_3->slice_width / 2 *
         VAR_3->bits_per_pixel,
         (8 * 16));
 } else {

  VAR_4 = FUNC_0(VAR_3->slice_width,
            VAR_0);


  VAR_3->slice_chunk_size = FUNC_0(VAR_3->slice_width *
         VAR_3->bits_per_pixel,
         (8 * 16));
 }

 if (VAR_3->convert_rgb)
  VAR_6 = 3 * (VAR_3->mux_word_size +
       (4 * VAR_3->bits_per_component + 4)
       - 2);
 else if (VAR_3->native_422)
  VAR_6 = 4 * VAR_3->mux_word_size +
   (4 * VAR_3->bits_per_component + 4) +
   3 * (4 * VAR_3->bits_per_component) - 2;
 else
  VAR_6 = 3 * VAR_3->mux_word_size +
   (4 * VAR_3->bits_per_component + 4) +
   2 * (4 * VAR_3->bits_per_component) - 2;

 VAR_7 = 8 * VAR_3->slice_chunk_size * VAR_3->slice_height;

 while ((VAR_6 > 0) &&
        ((VAR_7 - VAR_6) % VAR_3->mux_word_size))
  VAR_6--;

 if (VAR_4 < VAR_3->initial_scale_value - 8)
  VAR_3->initial_scale_value = VAR_4 + 8;


 if (VAR_3->initial_scale_value > 8)
  VAR_3->scale_decrement_interval = VAR_4 /
   (VAR_3->initial_scale_value - 8);
 else
  VAR_3->scale_decrement_interval = VAR_1;

 VAR_3->final_offset = VAR_3->rc_model_size -
  (VAR_3->initial_xmit_delay *
   VAR_3->bits_per_pixel + 8) / 16 + VAR_6;

 if (VAR_3->final_offset >= VAR_3->rc_model_size) {
  FUNC_1("FinalOfs < RcModelSze for this InitialXmitDelay\n");
  return -VAR_2;
 }

 VAR_9 = (VAR_3->rc_model_size * 8) /
  (VAR_3->rc_model_size - VAR_3->final_offset);
 if (VAR_3->slice_height > 1)





  VAR_3->nfl_bpg_offset = FUNC_0((VAR_3->first_line_bpg_offset << 11),
       (VAR_3->slice_height - 1));
 else
  VAR_3->nfl_bpg_offset = 0;


 if (VAR_3->nfl_bpg_offset > 65535) {
  FUNC_1("NflBpgOffset is too large for this slice height\n");
  return -VAR_2;
 }


 VAR_5 = VAR_4 * VAR_3->slice_height;


 VAR_3->slice_bpg_offset = FUNC_0(((VAR_3->rc_model_size -
          VAR_3->initial_offset +
          VAR_6) << 11),
        VAR_5);

 if (VAR_9 > 9) {






  VAR_3->scale_increment_interval =
    (VAR_3->final_offset * (1 << 11)) /
    ((VAR_3->nfl_bpg_offset +
    VAR_3->slice_bpg_offset) *
    (VAR_9 - 9));
 } else {




  VAR_3->scale_increment_interval = 0;
 }

 if (VAR_3->scale_increment_interval > 65535) {
  FUNC_1("ScaleIncrementInterval is large for slice height\n");
  return -VAR_2;
 }






 VAR_10 = VAR_3->rc_model_size - VAR_3->initial_offset +
  FUNC_0(VAR_3->initial_xmit_delay *
        VAR_3->bits_per_pixel, 16) +
  VAR_4 * VAR_3->first_line_bpg_offset;

 VAR_8 = FUNC_0((VAR_10 * 16), VAR_3->bits_per_pixel);
 VAR_3->rc_bits = (VAR_8 * VAR_3->bits_per_pixel) / 16;
 VAR_3->initial_dec_delay = VAR_8 - VAR_3->initial_xmit_delay;

 return 0;
}
