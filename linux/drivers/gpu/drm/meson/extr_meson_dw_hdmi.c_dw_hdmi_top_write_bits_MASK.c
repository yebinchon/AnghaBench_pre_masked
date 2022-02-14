
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_dw_hdmi {TYPE_1__* data; } ;
struct TYPE_2__ {unsigned int (* top_read ) (struct meson_dw_hdmi*,unsigned int) ;int (* top_write ) (struct meson_dw_hdmi*,unsigned int,unsigned int) ;} ;


 unsigned int FUNC_0 (struct meson_dw_hdmi*,unsigned int) ;
 int FUNC_1 (struct meson_dw_hdmi*,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct meson_dw_hdmi *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0->data->top_read(VAR_0, VAR_1);

 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;

 VAR_0->data->top_write(VAR_0, VAR_1, VAR_4);
}
