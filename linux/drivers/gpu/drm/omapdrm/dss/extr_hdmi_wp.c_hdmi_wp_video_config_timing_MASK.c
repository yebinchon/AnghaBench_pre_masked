
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct videomode {scalar_t__ vsync_len; scalar_t__ vfront_porch; scalar_t__ vback_porch; scalar_t__ hsync_len; scalar_t__ hfront_porch; scalar_t__ hback_porch; } ;
struct hdmi_wp_data {int version; int base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct hdmi_wp_data *VAR_2,
     const struct videomode *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 unsigned int VAR_6 = 1;

 FUNC_0("Enter hdmi_wp_video_config_timing\n");







 if (VAR_2->version == 4)
  VAR_6 = 0;

 VAR_4 |= FUNC_1(VAR_3->hback_porch, 31, 20);
 VAR_4 |= FUNC_1(VAR_3->hfront_porch, 19, 8);
 VAR_4 |= FUNC_1(VAR_3->hsync_len - VAR_6, 7, 0);
 FUNC_2(VAR_2->base, VAR_0, VAR_4);

 VAR_5 |= FUNC_1(VAR_3->vback_porch, 31, 20);
 VAR_5 |= FUNC_1(VAR_3->vfront_porch, 19, 8);
 VAR_5 |= FUNC_1(VAR_3->vsync_len, 7, 0);
 FUNC_2(VAR_2->base, VAR_1, VAR_5);
}
