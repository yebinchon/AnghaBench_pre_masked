
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct plane_size {scalar_t__ chroma_pitch; scalar_t__ surface_pitch; } ;
struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;
struct dc_plane_dcc_param {scalar_t__ meta_pitch; scalar_t__ meta_pitch_c; int enable; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 struct dcn10_hubp* FUNC_2 (struct hubp*) ;

void FUNC_3(
 struct hubp *VAR_8,
 enum surface_pixel_format VAR_9,
 const struct plane_size *VAR_10,
 struct dc_plane_dcc_param *VAR_11)
{
 struct dcn10_hubp *VAR_12 = FUNC_2(VAR_8);
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;




 if (VAR_9 >= VAR_7 && VAR_9 < VAR_6) {
  FUNC_0(VAR_10->chroma_pitch != 0);


  VAR_13 = VAR_10->surface_pitch - 1;
  VAR_14 = VAR_11->meta_pitch - 1;
  VAR_15 = VAR_10->chroma_pitch - 1;
  VAR_16 = VAR_11->meta_pitch_c - 1;
 } else {
  VAR_13 = VAR_10->surface_pitch - 1;
  VAR_14 = VAR_11->meta_pitch - 1;
  VAR_15 = 0;
  VAR_16 = 0;
 }

 if (!VAR_11->enable) {
  VAR_14 = 0;
  VAR_16 = 0;
 }

 FUNC_1(VAR_0,
   VAR_4, VAR_13, VAR_2, VAR_14);

 if (VAR_9 >= VAR_7)
  FUNC_1(VAR_1,
   VAR_5, VAR_15, VAR_3, VAR_16);
}
