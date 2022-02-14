
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_dw_hdmi {TYPE_1__* data; } ;
struct dw_hdmi {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int (* top_read ) (struct meson_dw_hdmi*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct meson_dw_hdmi*,int ) ;

__attribute__((used)) static enum drm_connector_status FUNC_1(struct dw_hdmi *VAR_3,
        void *VAR_4)
{
 struct meson_dw_hdmi *VAR_5 = (struct meson_dw_hdmi *)VAR_4;

 return !!VAR_5->data->top_read(VAR_5, VAR_0) ?
  VAR_1 : VAR_2;
}
