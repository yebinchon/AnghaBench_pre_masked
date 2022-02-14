
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcif_wb_frame_dump_info {int format; unsigned int width; unsigned int height; unsigned int luma_pitch; unsigned int chroma_pitch; unsigned int size; } ;
struct mcif_wb {int dummy; } ;
struct mcif_buf_params {unsigned int luma_pitch; unsigned int chroma_pitch; } ;
struct dcn20_mmhubbub {int dummy; } ;
typedef enum dwb_scaler_mode { ____Placeholder_dwb_scaler_mode } dwb_scaler_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct dcn20_mmhubbub* FUNC_1 (struct mcif_wb*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;

void FUNC_3(struct mcif_wb *VAR_2,
  struct mcif_buf_params *VAR_3,
  enum dwb_scaler_mode VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6,
  struct mcif_wb_frame_dump_info *VAR_7,
  unsigned char *VAR_8,
  unsigned char *VAR_9,
  unsigned char *VAR_10,
  unsigned char *VAR_11)
{
 struct dcn20_mmhubbub *VAR_12 = FUNC_1(VAR_2);

 FUNC_0(VAR_0, VAR_1, 0xf);

 FUNC_2(VAR_10, VAR_8, VAR_3->luma_pitch * VAR_6);
 FUNC_2(VAR_11, VAR_9, VAR_3->chroma_pitch * VAR_6 / 2);

 FUNC_0(VAR_0, VAR_1, 0x0);

 VAR_7->format = VAR_4;
 VAR_7->width = VAR_5;
 VAR_7->height = VAR_6;
 VAR_7->luma_pitch = VAR_3->luma_pitch;
 VAR_7->chroma_pitch = VAR_3->chroma_pitch;
 VAR_7->size = VAR_6 * (VAR_3->luma_pitch + VAR_3->chroma_pitch);
}
