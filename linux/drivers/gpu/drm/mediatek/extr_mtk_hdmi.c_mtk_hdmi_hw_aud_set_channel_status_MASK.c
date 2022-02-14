
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_hdmi {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mtk_hdmi*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_hdmi *VAR_3,
            u8 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  FUNC_0(VAR_3, VAR_0 + VAR_5 * 4, VAR_4[VAR_5]);
  FUNC_0(VAR_3, VAR_1 + VAR_5 * 4, VAR_4[VAR_5]);
  FUNC_0(VAR_3, VAR_2 + VAR_5 * 4, VAR_4[VAR_5]);
 }
 for (; VAR_5 < 24; VAR_5++) {
  FUNC_0(VAR_3, VAR_1 + VAR_5 * 4, 0);
  FUNC_0(VAR_3, VAR_2 + VAR_5 * 4, 0);
 }
}
