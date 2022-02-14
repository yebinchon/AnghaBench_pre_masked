
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct videomode {int flags; } ;
struct hdmi_wp_data {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct hdmi_wp_data *VAR_4,
        const struct videomode *VAR_5)
{
 u32 VAR_6;
 bool VAR_7, VAR_8;
 FUNC_0("Enter hdmi_wp_video_config_interface\n");

 VAR_7 = !!(VAR_5->flags & VAR_2);
 VAR_8 = !!(VAR_5->flags & VAR_0);

 VAR_6 = FUNC_2(VAR_4->base, VAR_3);
 VAR_6 = FUNC_1(VAR_6, 1, 7, 7);
 VAR_6 = FUNC_1(VAR_6, 1, 6, 6);
 VAR_6 = FUNC_1(VAR_6, VAR_7, 5, 5);
 VAR_6 = FUNC_1(VAR_6, VAR_8, 4, 4);
 VAR_6 = FUNC_1(VAR_6, !!(VAR_5->flags & VAR_1), 3, 3);
 VAR_6 = FUNC_1(VAR_6, 1, 1, 0);
 FUNC_3(VAR_4->base, VAR_3, VAR_6);
}
