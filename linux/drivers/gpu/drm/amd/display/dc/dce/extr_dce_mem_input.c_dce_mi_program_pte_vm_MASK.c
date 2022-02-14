
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dc_tiling_info {int dummy; } dc_tiling_info ;
struct pte_setting {unsigned int min_pte_before_flip_vert_scan; unsigned int min_pte_before_flip_horiz_scan; int pte_req_per_chunk; int page_height; int page_width; } ;
struct mem_input {int dummy; } ;
struct dce_mem_input {int dummy; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum mi_tiling_format { ____Placeholder_mi_tiling_format } mi_tiling_format ;
typedef enum mi_bits_per_pixel { ____Placeholder_mi_bits_per_pixel } mi_bits_per_pixel ;
typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,unsigned int,int ,unsigned int,int ,unsigned int) ;
 struct dce_mem_input* FUNC_3 (struct mem_input*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (union dc_tiling_info*) ;
 scalar_t__ FUNC_6 (int) ;
 unsigned int FUNC_7 (int ) ;
 struct pte_setting** VAR_8 ;

__attribute__((used)) static void FUNC_8(
  struct mem_input *VAR_9,
  enum surface_pixel_format VAR_10,
  union dc_tiling_info *VAR_11,
  enum dc_rotation_angle VAR_12)
{
 struct dce_mem_input *VAR_13 = FUNC_3(VAR_9);
 enum mi_bits_per_pixel VAR_14 = FUNC_4(VAR_10);
 enum mi_tiling_format VAR_15 = FUNC_5(VAR_11);
 const struct pte_setting *VAR_16 = &VAR_8[VAR_15][VAR_14];

 unsigned int VAR_17 = FUNC_7(VAR_16->page_width);
 unsigned int VAR_18 = FUNC_7(VAR_16->page_height);
 unsigned int VAR_19 = FUNC_6(VAR_12) ?
   VAR_16->min_pte_before_flip_vert_scan :
   VAR_16->min_pte_before_flip_horiz_scan;

 FUNC_0(VAR_7,
   VAR_7, 0x7f);

 FUNC_2(VAR_5,
   VAR_3, VAR_17,
   VAR_2, VAR_18,
   VAR_1, VAR_19);

 FUNC_1(VAR_4,
   VAR_6, VAR_16->pte_req_per_chunk,
   VAR_0, 0x7f);
}
