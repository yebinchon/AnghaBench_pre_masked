
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_dw_hdmi {TYPE_1__* data; } ;
struct TYPE_2__ {int (* dwc_write ) (struct meson_dw_hdmi*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct meson_dw_hdmi*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct meson_dw_hdmi *VAR_3 = VAR_0;

 VAR_3->data->dwc_write(VAR_3, VAR_1, VAR_2);

 return 0;
}
