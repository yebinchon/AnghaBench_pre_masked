
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_dw_hdmi {TYPE_1__* data; } ;
struct dw_hdmi {int dummy; } ;
struct TYPE_2__ {int (* top_write ) (struct meson_dw_hdmi*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct meson_dw_hdmi*,int ,int,int) ;
 int FUNC_1 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_2 (struct meson_dw_hdmi*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dw_hdmi *VAR_5,
         void *VAR_6)
{
 struct meson_dw_hdmi *VAR_7 = (struct meson_dw_hdmi *)VAR_6;


 VAR_7->data->top_write(VAR_7, VAR_0,
     (0xa << 12) | 0xa0);


 VAR_7->data->top_write(VAR_7, VAR_4,
     VAR_2 | VAR_1);


 FUNC_0(VAR_7, VAR_3,
   VAR_2 | VAR_1,
   VAR_2 | VAR_1);
}
