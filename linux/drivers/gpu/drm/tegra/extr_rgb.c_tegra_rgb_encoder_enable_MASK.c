
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_rgb {int dc; } ;
struct tegra_output {scalar_t__ panel; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct tegra_output* FUNC_4 (struct drm_encoder*) ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int,int ) ;
 struct tegra_rgb* FUNC_9 (struct tegra_output*) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_13)
{
 struct tegra_output *VAR_14 = FUNC_4(VAR_13);
 struct tegra_rgb *VAR_15 = FUNC_9(VAR_14);
 u32 VAR_16;

 if (VAR_14->panel)
  FUNC_3(VAR_14->panel);

 FUNC_7(VAR_15->dc, VAR_12, FUNC_0(VAR_12));

 VAR_16 = VAR_4 | VAR_3;
 FUNC_8(VAR_15->dc, VAR_16, VAR_0);


 VAR_16 = FUNC_6(VAR_15->dc, FUNC_1(1));
 VAR_16 &= ~VAR_9;
 VAR_16 &= ~VAR_8;
 FUNC_8(VAR_15->dc, VAR_16, FUNC_1(1));


 VAR_16 = VAR_6 | VAR_5 |
  VAR_7;
 FUNC_8(VAR_15->dc, VAR_16, VAR_1);


 VAR_16 = VAR_10 | VAR_11;
 FUNC_8(VAR_15->dc, VAR_16, VAR_2);

 FUNC_5(VAR_15->dc);

 if (VAR_14->panel)
  FUNC_2(VAR_14->panel);
}
