
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_avi_infoframe {int length; } ;
struct anx78xx {int * map; } ;
typedef int buffer ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_4 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct anx78xx *VAR_8,
     struct hdmi_avi_infoframe *VAR_9)
{
 u8 VAR_10[VAR_1 + VAR_0];
 int VAR_11;

 VAR_11 = FUNC_3(VAR_9, VAR_10, sizeof(VAR_10));
 if (VAR_11 < 0) {
  FUNC_0("Failed to pack AVI infoframe: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_8->map[VAR_2],
     VAR_7, VAR_4);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_8->map[VAR_3],
    VAR_6, VAR_10,
    VAR_9->length);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_8->map[VAR_2],
          VAR_7, VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_8->map[VAR_2],
          VAR_7, VAR_4);
 if (VAR_11)
  return VAR_11;

 return 0;
}
