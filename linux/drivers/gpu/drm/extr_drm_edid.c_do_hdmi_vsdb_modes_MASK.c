
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct drm_display_mode {unsigned int flags; } ;
struct drm_display_info {int has_hdmi_infoframe; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_connector*,int,int const*,int,int) ;
 scalar_t__ FUNC_1 (struct drm_connector*) ;
 scalar_t__ FUNC_2 (struct drm_connector*,int) ;
 struct drm_display_mode* FUNC_3 (struct drm_connector*,int const*,int,int) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;

__attribute__((used)) static int
FUNC_5(struct drm_connector *VAR_3, const u8 *VAR_4, u8 VAR_5,
     const u8 *VAR_6, u8 VAR_7)
{
 struct drm_display_info *VAR_8 = &VAR_3->display_info;
 int VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12 = 0, VAR_13;
 u8 VAR_14, VAR_15 = 0;
 u16 VAR_16;
 u16 VAR_17;

 if (VAR_5 < 8)
  goto out;


 if (!(VAR_4[8] & (1 << 5)))
  goto out;


 if (VAR_4[8] & (1 << 7))
  VAR_10 += 2;


 if (VAR_4[8] & (1 << 6))
  VAR_10 += 2;



 if (VAR_5 < (8 + VAR_10 + 2))
  goto out;


 VAR_10++;
 if (VAR_4[8 + VAR_10] & (1 << 7)) {
  VAR_9 += FUNC_1(VAR_3);


  VAR_12 = (VAR_4[8 + VAR_10] & 0x60) >> 5;
 }

 VAR_10++;
 VAR_14 = VAR_4[8 + VAR_10] >> 5;
 VAR_15 = VAR_4[8 + VAR_10] & 0x1f;

 for (VAR_11 = 0; VAR_11 < VAR_14 && VAR_5 >= (9 + VAR_10 + VAR_11); VAR_11++) {
  u8 VAR_18;

  VAR_18 = VAR_4[9 + VAR_10 + VAR_11];
  VAR_9 += FUNC_2(VAR_3, VAR_18);
 }
 VAR_10 += 1 + VAR_14;

 if (VAR_12 == 1)
  VAR_13 = 2;
 else if (VAR_12 == 2)
  VAR_13 = 4;
 else
  VAR_13 = 0;

 if (VAR_5 < (8 + VAR_10 + VAR_15 - 1))
  goto out;

 if (VAR_15 < VAR_13)
  goto out;

 if (VAR_12 == 1 || VAR_12 == 2) {

  VAR_17 = (VAR_4[8 + VAR_10] << 8) | VAR_4[9 + VAR_10];


  if (VAR_12 == 2)
   VAR_16 = (VAR_4[10 + VAR_10] << 8) | VAR_4[11 + VAR_10];
  else
   VAR_16 = 0xffff;

  for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
   if (VAR_16 & (1 << VAR_11))
    VAR_9 += FUNC_0(VAR_3,
      VAR_17,
      VAR_6,
      VAR_7, VAR_11);
  }
 }

 VAR_10 += VAR_13;

 for (VAR_11 = 0; VAR_11 < (VAR_15 - VAR_13); VAR_11++) {
  int VAR_19;
  struct drm_display_mode *VAR_20 = ((void*)0);
  unsigned int VAR_21 = 0;
  bool VAR_22;

  VAR_22 = ((VAR_4[8 + VAR_10 + VAR_11] & 0x0f) > 7);

  if (VAR_22 && (VAR_11 + 1 == VAR_15 - VAR_13))
   break;


  VAR_19 = VAR_4[8 + VAR_10 + VAR_11] >> 4;


  switch (VAR_4[8 + VAR_10 + VAR_11] & 0x0f) {
  case 0:
   VAR_21 = VAR_0;
   break;
  case 6:
   VAR_21 = VAR_2;
   break;
  case 8:

   if ((VAR_4[9 + VAR_10 + VAR_11] >> 4) == 1)
    VAR_21 = VAR_1;
   break;
  }

  if (VAR_21 != 0) {
   VAR_20 = FUNC_3(VAR_3,
          VAR_6,
          VAR_7,
          VAR_19);

   if (VAR_20) {
    VAR_20->flags |= VAR_21;
    FUNC_4(VAR_3, VAR_20);
    VAR_9++;
   }
  }

  if (VAR_22)
   VAR_11++;
 }

out:
 if (VAR_9 > 0)
  VAR_8->has_hdmi_infoframe = 1;
 return VAR_9;
}
