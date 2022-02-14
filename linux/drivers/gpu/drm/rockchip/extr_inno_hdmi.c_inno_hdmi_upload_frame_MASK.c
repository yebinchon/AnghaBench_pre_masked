
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union hdmi_infoframe {int dummy; } hdmi_infoframe ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct inno_hdmi {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int packed_frame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (union hdmi_infoframe*,scalar_t__*,int) ;
 int FUNC_1 (struct inno_hdmi*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct inno_hdmi*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct inno_hdmi *VAR_4, int VAR_5,
      union hdmi_infoframe *VAR_6, u32 VAR_7,
      u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 if (VAR_8)
  FUNC_1(VAR_4, VAR_3, VAR_8, VAR_9);

 FUNC_2(VAR_4, VAR_1, VAR_7);

 if (VAR_5 >= 0) {
  u8 VAR_11[VAR_2];
  ssize_t VAR_12, VAR_13;

  VAR_12 = FUNC_0(VAR_6, VAR_11,
      sizeof(VAR_11));
  if (VAR_12 < 0)
   return VAR_12;

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   FUNC_2(VAR_4, VAR_0 + VAR_13,
        VAR_11[VAR_13]);

  if (VAR_8)
   FUNC_1(VAR_4, VAR_3, VAR_8, VAR_10);
 }

 return VAR_5;
}
