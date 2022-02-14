
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int lanes; } ;
struct adv7511 {int regmap_cec; scalar_t__ use_timing_gen; struct mipi_dsi_device* dsi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct adv7511*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int) ;

void FUNC_4(struct adv7511 *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = VAR_1->dsi;

 if (VAR_1->use_timing_gen)
  FUNC_1(VAR_1);


 FUNC_3(VAR_1->regmap_cec, 0x1c, VAR_2->lanes << 4);

 if (VAR_1->use_timing_gen) {

  FUNC_3(VAR_1->regmap_cec, 0x27, 0xcb);
  FUNC_3(VAR_1->regmap_cec, 0x27, 0x8b);
  FUNC_3(VAR_1->regmap_cec, 0x27, 0xcb);
 } else {

  FUNC_3(VAR_1->regmap_cec, 0x27, 0x0b);
 }


 FUNC_3(VAR_1->regmap_cec, 0x03, 0x89);

 FUNC_3(VAR_1->regmap_cec, 0x55, 0x00);

 FUNC_2(VAR_1->regmap_cec, VAR_0,
         FUNC_0(VAR_0));
}
