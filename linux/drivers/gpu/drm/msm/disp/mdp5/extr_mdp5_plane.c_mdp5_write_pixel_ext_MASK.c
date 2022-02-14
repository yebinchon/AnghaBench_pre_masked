
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int pixel_format; } ;
struct mdp_format {scalar_t__ is_yuv; TYPE_1__ base; } ;
struct mdp5_kms {int dummy; } ;
struct drm_format_info {int hsub; int vsub; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int,int (*) (int)) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int) ;
 struct drm_format_info* FUNC_15 (int ) ;
 int FUNC_16 (struct mdp5_kms*,int ,int) ;

__attribute__((used)) static void FUNC_17(struct mdp5_kms *VAR_2, enum mdp5_pipe VAR_3,
 const struct mdp_format *VAR_4,
 uint32_t VAR_5, int VAR_6[VAR_1], int VAR_7[VAR_1],
 uint32_t VAR_8, int VAR_9[VAR_1], int VAR_10[VAR_1])
{
 const struct drm_format_info *VAR_11 = FUNC_15(VAR_4->base.pixel_format);
 uint32_t VAR_12, VAR_13, VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  uint32_t VAR_16 = VAR_5;
  uint32_t VAR_17 = VAR_8;

  if (VAR_4->is_yuv && VAR_15 == VAR_0) {
   VAR_16 /= VAR_11->hsub;
   VAR_17 /= VAR_11->vsub;
  }

  VAR_12 = (VAR_6[VAR_15] >= 0) ?
   FUNC_3(VAR_6[VAR_15]) :
   FUNC_2(VAR_6[VAR_15]);

  VAR_12 |= (VAR_7[VAR_15] >= 0) ?
   FUNC_5(VAR_7[VAR_15]) :
   FUNC_4(VAR_7[VAR_15]);

  VAR_13 = (VAR_9[VAR_15] >= 0) ?
   FUNC_11(VAR_9[VAR_15]) :
   FUNC_10(VAR_9[VAR_15]);

  VAR_13 |= (VAR_10[VAR_15] >= 0) ?
   FUNC_9(VAR_10[VAR_15]) :
   FUNC_8(VAR_10[VAR_15]);

  VAR_14 = FUNC_6(VAR_16 +
    VAR_6[VAR_15] + VAR_7[VAR_15]);

  VAR_14 |= FUNC_7(VAR_17 +
    VAR_9[VAR_15] + VAR_10[VAR_15]);

  FUNC_16(VAR_2, FUNC_12(VAR_3, VAR_15), VAR_12);
  FUNC_16(VAR_2, FUNC_14(VAR_3, VAR_15), VAR_13);
  FUNC_16(VAR_2, FUNC_13(VAR_3, VAR_15), VAR_14);

  FUNC_0("comp-%d (L/R): rpt=%d/%d, ovf=%d/%d, req=%d", VAR_15,
   FUNC_1(VAR_12, FUNC_3),
   FUNC_1(VAR_12, FUNC_5),
   FUNC_1(VAR_12, FUNC_2),
   FUNC_1(VAR_12, FUNC_4),
   FUNC_1(VAR_14, FUNC_6));

  FUNC_0("comp-%d (T/B): rpt=%d/%d, ovf=%d/%d, req=%d", VAR_15,
   FUNC_1(VAR_13, FUNC_11),
   FUNC_1(VAR_13, FUNC_9),
   FUNC_1(VAR_13, FUNC_10),
   FUNC_1(VAR_13, FUNC_8),
   FUNC_1(VAR_14, FUNC_7));
 }
}
