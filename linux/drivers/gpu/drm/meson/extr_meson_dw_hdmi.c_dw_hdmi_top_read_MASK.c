
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_dw_hdmi {scalar_t__ hdmitx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_4(struct meson_dw_hdmi *VAR_3,
         unsigned int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;

 FUNC_1(&VAR_2, VAR_5);


 FUNC_3(VAR_4 & 0xffff, VAR_3->hdmitx + VAR_0);
 FUNC_3(VAR_4 & 0xffff, VAR_3->hdmitx + VAR_0);


 VAR_6 = FUNC_0(VAR_3->hdmitx + VAR_1);
 VAR_6 = FUNC_0(VAR_3->hdmitx + VAR_1);

 FUNC_2(&VAR_2, VAR_5);

 return VAR_6;
}
