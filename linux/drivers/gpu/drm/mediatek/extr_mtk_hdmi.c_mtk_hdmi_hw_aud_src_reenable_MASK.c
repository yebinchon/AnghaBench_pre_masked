
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_hdmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_hdmi*,int ) ;
 int FUNC_1 (struct mtk_hdmi*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct mtk_hdmi *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 & VAR_1) {
  VAR_3 &= ~VAR_1;
  FUNC_1(VAR_2, VAR_0, VAR_3);
  FUNC_2(255, 512);
  VAR_3 |= VAR_1;
  FUNC_1(VAR_2, VAR_0, VAR_3);
 }
}
