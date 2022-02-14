
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorspace; } ;
union hdmi_infoframe {TYPE_1__ avi; } ;
typedef int u8 ;
struct sii8620 {scalar_t__ use_packed_pixel; } ;
struct mhl3_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_1__*,int *,struct drm_display_mode*) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (struct mhl3_infoframe*) ;
 int FUNC_4 (struct mhl3_infoframe*,int *,int ) ;
 int FUNC_5 (struct sii8620*) ;
 int FUNC_6 (struct sii8620*,int ,int,...) ;
 int FUNC_7 (struct sii8620*,int ,int *,int) ;

__attribute__((used)) static void FUNC_8(struct sii8620 *VAR_17,
       struct drm_display_mode *VAR_18)
{
 struct mhl3_infoframe VAR_19;
 union hdmi_infoframe VAR_20;
 u8 VAR_21[31];
 int VAR_22;

 VAR_22 = FUNC_1(&VAR_20.avi,
             ((void*)0), VAR_18);
 if (VAR_17->use_packed_pixel)
  VAR_20.avi.colorspace = VAR_10;

 if (!VAR_22)
  VAR_22 = FUNC_2(&VAR_20.avi, VAR_21, FUNC_0(VAR_21));
 if (VAR_22 > 0)
  FUNC_7(VAR_17, VAR_12, VAR_21 + 3, VAR_22 - 3);

 if (!FUNC_5(VAR_17) || !VAR_17->use_packed_pixel) {
  FUNC_6(VAR_17, VAR_15,
   VAR_9);
  FUNC_6(VAR_17, VAR_11,
   VAR_1 |
   VAR_3 |
   VAR_2,
   VAR_4);
  return;
 }

 FUNC_6(VAR_17, VAR_11,
  VAR_1 |
  VAR_3 |
  VAR_0 |
  VAR_2,
  VAR_6 |
  VAR_4 |
  VAR_5);

 FUNC_6(VAR_17, VAR_14, VAR_7
  | VAR_8 | VAR_16);
 VAR_22 = FUNC_3(&VAR_19);
 if (!VAR_22)
  VAR_22 = FUNC_4(&VAR_19, VAR_21, FUNC_0(VAR_21));
 FUNC_7(VAR_17, VAR_13, VAR_21, VAR_22);
}
