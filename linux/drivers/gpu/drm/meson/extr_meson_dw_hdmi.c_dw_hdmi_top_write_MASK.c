
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_dw_hdmi {scalar_t__ hdmitx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct meson_dw_hdmi *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;

 FUNC_0(&VAR_2, VAR_6);


 FUNC_2(VAR_4 & 0xffff, VAR_3->hdmitx + VAR_0);
 FUNC_2(VAR_4 & 0xffff, VAR_3->hdmitx + VAR_0);


 FUNC_2(VAR_5, VAR_3->hdmitx + VAR_1);

 FUNC_1(&VAR_2, VAR_6);
}
