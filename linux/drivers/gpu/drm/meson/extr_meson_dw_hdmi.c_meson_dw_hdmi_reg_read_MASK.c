
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_dw_hdmi {TYPE_1__* data; } ;
struct TYPE_2__ {unsigned int (* dwc_read ) (struct meson_dw_hdmi*,unsigned int) ;} ;


 unsigned int FUNC_0 (struct meson_dw_hdmi*,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
      unsigned int *VAR_2)
{
 struct meson_dw_hdmi *VAR_3 = VAR_0;

 *VAR_2 = VAR_3->data->dwc_read(VAR_3, VAR_1);

 return 0;

}
