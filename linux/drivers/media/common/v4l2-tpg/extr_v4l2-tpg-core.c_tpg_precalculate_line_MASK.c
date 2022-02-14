
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tpg_data {int pattern; unsigned int src_width; unsigned int scaled_width; unsigned int planes; unsigned int* twopixelsize; unsigned int* hdownsampling; int*** lines; int* vdownsampling; int*** downsampled_lines; int** contrast_line; int** black_line; int** random_line; int** textbg; int** textfg; scalar_t__ hflip; } ;
typedef enum tpg_color { ____Placeholder_tpg_color } tpg_color ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (struct tpg_data*,int**,int,int) ;
 int FUNC_1 (int*,int*,unsigned int) ;
 int FUNC_2 (struct tpg_data*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct tpg_data*) ;
 int FUNC_4 (struct tpg_data*,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(struct tpg_data *VAR_8)
{
 enum tpg_color VAR_9;
 u8 VAR_10[VAR_7][8];
 unsigned VAR_11;
 unsigned VAR_12;
 unsigned VAR_13;

 switch (VAR_8->pattern) {
 case 128:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 default:
  VAR_9 = VAR_1;
  break;
 }

 for (VAR_11 = 0; VAR_11 < FUNC_3(VAR_8); VAR_11++) {

  unsigned VAR_14 = VAR_8->src_width / VAR_8->scaled_width;
  unsigned VAR_15 = VAR_8->src_width % VAR_8->scaled_width;
  unsigned VAR_16 = 0;
  unsigned VAR_17 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_8->scaled_width * 2; VAR_13 += 2) {
   unsigned VAR_18 = VAR_16;
   enum tpg_color VAR_19, VAR_20;

   VAR_18 = VAR_8->hflip ? VAR_8->src_width * 2 - VAR_18 - 2 : VAR_18;
   VAR_19 = FUNC_2(VAR_8, VAR_11, VAR_18);

   VAR_16 += VAR_14;
   VAR_17 += VAR_15;
   if (VAR_17 >= VAR_8->scaled_width) {
    VAR_17 -= VAR_8->scaled_width;
    VAR_16++;
   }

   VAR_18 = VAR_16;
   VAR_18 = VAR_8->hflip ? VAR_8->src_width * 2 - VAR_18 - 2 : VAR_18;
   VAR_20 = FUNC_2(VAR_8, VAR_11, VAR_18);

   VAR_16 += VAR_14;
   VAR_17 += VAR_15;
   if (VAR_17 >= VAR_8->scaled_width) {
    VAR_17 -= VAR_8->scaled_width;
    VAR_16++;
   }

   FUNC_0(VAR_8, VAR_10, VAR_8->hflip ? VAR_20 : VAR_19, 0);
   FUNC_0(VAR_8, VAR_10, VAR_8->hflip ? VAR_19 : VAR_20, 1);
   for (VAR_12 = 0; VAR_12 < VAR_8->planes; VAR_12++) {
    unsigned VAR_21 = VAR_8->twopixelsize[VAR_12];
    unsigned VAR_22 = VAR_8->hdownsampling[VAR_12];
    u8 *VAR_23 = VAR_8->lines[VAR_11][VAR_12] + FUNC_4(VAR_8, VAR_12, VAR_13);

    FUNC_1(VAR_23, VAR_10[VAR_12], VAR_21 / VAR_22);
   }
  }
 }

 if (VAR_8->vdownsampling[VAR_8->planes - 1] > 1) {
  unsigned VAR_24 = FUNC_3(VAR_8);

  for (VAR_11 = 0; VAR_11 < VAR_24; VAR_11++) {
   unsigned VAR_25 = (VAR_11 + 1) % VAR_24;

   for (VAR_12 = 1; VAR_12 < VAR_8->planes; VAR_12++) {
    unsigned VAR_26 = FUNC_4(VAR_8, VAR_12, VAR_8->scaled_width * 2);
    u8 *VAR_27 = VAR_8->lines[VAR_11][VAR_12];
    u8 *VAR_28 = VAR_8->lines[VAR_25][VAR_12];
    u8 *VAR_29 = VAR_8->downsampled_lines[VAR_11][VAR_12];

    for (VAR_13 = 0; VAR_13 < VAR_26; VAR_13++, VAR_27++, VAR_28++, VAR_29++)
     *VAR_29 = ((u16)*VAR_27 + (u16)*VAR_28) / 2;
   }
  }
 }

 FUNC_0(VAR_8, VAR_10, VAR_9, 0);
 FUNC_0(VAR_8, VAR_10, VAR_9, 1);
 for (VAR_12 = 0; VAR_12 < VAR_8->planes; VAR_12++) {
  unsigned VAR_30 = VAR_8->twopixelsize[VAR_12];
  u8 *VAR_31 = VAR_8->contrast_line[VAR_12];

  for (VAR_13 = 0; VAR_13 < VAR_8->scaled_width; VAR_13 += 2, VAR_31 += VAR_30)
   FUNC_1(VAR_31, VAR_10[VAR_12], VAR_30);
 }

 FUNC_0(VAR_8, VAR_10, VAR_0, 0);
 FUNC_0(VAR_8, VAR_10, VAR_0, 1);
 for (VAR_12 = 0; VAR_12 < VAR_8->planes; VAR_12++) {
  unsigned VAR_32 = VAR_8->twopixelsize[VAR_12];
  u8 *VAR_33 = VAR_8->black_line[VAR_12];

  for (VAR_13 = 0; VAR_13 < VAR_8->scaled_width; VAR_13 += 2, VAR_33 += VAR_32)
   FUNC_1(VAR_33, VAR_10[VAR_12], VAR_32);
 }

 for (VAR_13 = 0; VAR_13 < VAR_8->scaled_width * 2; VAR_13 += 2) {
  FUNC_0(VAR_8, VAR_10, VAR_4, 0);
  FUNC_0(VAR_8, VAR_10, VAR_4, 1);
  for (VAR_12 = 0; VAR_12 < VAR_8->planes; VAR_12++) {
   unsigned VAR_34 = VAR_8->twopixelsize[VAR_12];
   u8 *VAR_35 = VAR_8->random_line[VAR_12] + VAR_13 * VAR_34 / 2;

   FUNC_1(VAR_35, VAR_10[VAR_12], VAR_34);
  }
 }

 FUNC_0(VAR_8, VAR_8->textbg, VAR_5, 0);
 FUNC_0(VAR_8, VAR_8->textbg, VAR_5, 1);
 FUNC_0(VAR_8, VAR_8->textfg, VAR_6, 0);
 FUNC_0(VAR_8, VAR_8->textfg, VAR_6, 1);
}
