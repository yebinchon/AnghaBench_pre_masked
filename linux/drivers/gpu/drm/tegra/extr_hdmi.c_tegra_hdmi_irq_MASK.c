
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_hdmi {int format; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct tegra_hdmi*) ;
 int FUNC_2 (struct tegra_hdmi*) ;
 int FUNC_3 (struct tegra_hdmi*) ;
 int FUNC_4 (struct tegra_hdmi*) ;
 int FUNC_5 (struct tegra_hdmi*,int ) ;
 int FUNC_6 (struct tegra_hdmi*) ;
 int FUNC_7 (struct tegra_hdmi*) ;
 int FUNC_8 (struct tegra_hdmi*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct tegra_hdmi *VAR_8 = VAR_7;
 u32 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_8, VAR_0);
 FUNC_8(VAR_8, VAR_9, VAR_0);

 if (VAR_9 & VAR_2) {
  unsigned int VAR_11;
  u32 VAR_12;

  VAR_12 = FUNC_5(VAR_8, VAR_1);

  if (VAR_12 & VAR_5) {
   VAR_11 = VAR_12 & VAR_4;

   FUNC_0(VAR_11, &VAR_8->format);

   VAR_10 = FUNC_6(VAR_8);
   if (VAR_10 < 0) {
    FUNC_2(VAR_8);
    FUNC_1(VAR_8);
   } else {
    FUNC_7(VAR_8);
    FUNC_4(VAR_8);
    FUNC_3(VAR_8);
   }
  } else {
   FUNC_2(VAR_8);
   FUNC_1(VAR_8);
  }
 }

 return VAR_3;
}
