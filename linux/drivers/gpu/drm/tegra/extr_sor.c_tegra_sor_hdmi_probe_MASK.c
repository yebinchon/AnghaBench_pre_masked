
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {int scdc; int dev; void* hdmi_supply; void* vdd_pll_supply; void* avdd_io_supply; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,char*,int) ;
 void* FUNC_4 (int ,char*) ;
 int FUNC_5 (void*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct tegra_sor *VAR_1)
{
 int VAR_2;

 VAR_1->avdd_io_supply = FUNC_4(VAR_1->dev, "avdd-io");
 if (FUNC_1(VAR_1->avdd_io_supply)) {
  FUNC_3(VAR_1->dev, "cannot get AVDD I/O supply: %ld\n",
   FUNC_2(VAR_1->avdd_io_supply));
  return FUNC_2(VAR_1->avdd_io_supply);
 }

 VAR_2 = FUNC_5(VAR_1->avdd_io_supply);
 if (VAR_2 < 0) {
  FUNC_3(VAR_1->dev, "failed to enable AVDD I/O supply: %d\n",
   VAR_2);
  return VAR_2;
 }

 VAR_1->vdd_pll_supply = FUNC_4(VAR_1->dev, "vdd-pll");
 if (FUNC_1(VAR_1->vdd_pll_supply)) {
  FUNC_3(VAR_1->dev, "cannot get VDD PLL supply: %ld\n",
   FUNC_2(VAR_1->vdd_pll_supply));
  return FUNC_2(VAR_1->vdd_pll_supply);
 }

 VAR_2 = FUNC_5(VAR_1->vdd_pll_supply);
 if (VAR_2 < 0) {
  FUNC_3(VAR_1->dev, "failed to enable VDD PLL supply: %d\n",
   VAR_2);
  return VAR_2;
 }

 VAR_1->hdmi_supply = FUNC_4(VAR_1->dev, "hdmi");
 if (FUNC_1(VAR_1->hdmi_supply)) {
  FUNC_3(VAR_1->dev, "cannot get HDMI supply: %ld\n",
   FUNC_2(VAR_1->hdmi_supply));
  return FUNC_2(VAR_1->hdmi_supply);
 }

 VAR_2 = FUNC_5(VAR_1->hdmi_supply);
 if (VAR_2 < 0) {
  FUNC_3(VAR_1->dev, "failed to enable HDMI supply: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_0(&VAR_1->scdc, VAR_0);

 return 0;
}
