
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rk3066_hdmi {int tmdsclk; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rk3066_hdmi*,int ,int ,int) ;
 int FUNC_2 (struct rk3066_hdmi*,int ,int) ;
 int FUNC_3 (struct rk3066_hdmi*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct rk3066_hdmi *VAR_7, int VAR_8)
{
 u8 VAR_9, VAR_10;
 u8 VAR_11 = 0;

 VAR_9 = FUNC_3(VAR_7);

 FUNC_0(VAR_7->dev, "mode         :%d\n", VAR_8);
 FUNC_0(VAR_7->dev, "current_mode :%d\n", VAR_9);

 if (VAR_9 == VAR_8)
  return;

 do {
  if (VAR_9 > VAR_8) {
   VAR_10 = VAR_9 / 2;
  } else {
   if (VAR_9 < VAR_4)
    VAR_10 = VAR_4;
   else
    VAR_10 = VAR_9 * 2;
  }

  FUNC_0(VAR_7->dev, "%d: next_mode :%d\n", VAR_11, VAR_10);

  if (VAR_10 != VAR_5) {
   FUNC_1(VAR_7, VAR_1,
      VAR_6, VAR_10);
  } else {
   FUNC_2(VAR_7, VAR_1,
        VAR_5 |
        VAR_3);
   FUNC_4(90, 100);
   FUNC_2(VAR_7, VAR_1,
        VAR_5 |
        VAR_2);
   FUNC_4(90, 100);
   FUNC_2(VAR_7, VAR_1,
        VAR_5);
  }
  VAR_9 = VAR_10;
  VAR_11 = VAR_11 + 1;
 } while ((VAR_10 != VAR_8) && (VAR_11 < 5));







 if (VAR_8 < VAR_5)
  VAR_7->tmdsclk = VAR_0;
}
