
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct armada_crtc {int cfg_dumb_ctrl; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct armada_crtc *VAR_8, bool VAR_9)
{
 uint32_t VAR_10;

 VAR_10 = VAR_8->cfg_dumb_ctrl;

 if (VAR_9)
  VAR_10 |= VAR_0;







 if (!VAR_9 && (VAR_10 & VAR_6) == VAR_4) {
  VAR_10 &= ~VAR_6;
  VAR_10 |= VAR_5;
 }

 FUNC_0(VAR_10,
         ~(VAR_1 | VAR_2 | VAR_3),
         VAR_8->base + VAR_7);
}
