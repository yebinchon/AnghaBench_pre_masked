
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511_link_config {int clock_delay; int input_color_depth; scalar_t__ input_colorspace; scalar_t__ input_clock; size_t input_style; int input_justification; int sync_pulse; int vsync_polarity; int hsync_polarity; scalar_t__ embedded_sync; } ;
struct adv7511 {int rgb; int vsync_polarity; int hsync_polarity; scalar_t__ embedded_sync; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,int,unsigned int) ;
 int FUNC_1 (int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct adv7511 *VAR_8,
        const struct adv7511_link_config *VAR_9)
{




 static const unsigned int VAR_10[4] = { 0, 2, 1, 3 };

 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;

 VAR_11 = (VAR_9->clock_delay + 1200) / 400;
 VAR_12 = VAR_9->input_color_depth == 8 ? 3
      : (VAR_9->input_color_depth == 10 ? 1 : 2);


 if (VAR_9->input_colorspace != VAR_7)
  VAR_13 = VAR_9->input_clock == VAR_1
    ? 5 : 0;
 else if (VAR_9->input_clock == VAR_1)
  VAR_13 = VAR_9->embedded_sync ? 8 : 7;
 else if (VAR_9->input_clock == VAR_0)
  VAR_13 = VAR_9->embedded_sync ? 4 : 3;
 else
  VAR_13 = VAR_9->embedded_sync ? 2 : 1;

 FUNC_0(VAR_8->regmap, VAR_2, 0xf,
      VAR_13);
 FUNC_0(VAR_8->regmap, VAR_4, 0x7e,
      (VAR_12 << 4) |
      (VAR_10[VAR_9->input_style] << 2));
 FUNC_1(VAR_8->regmap, VAR_5,
       VAR_9->input_justification << 3);
 FUNC_1(VAR_8->regmap, VAR_3,
       VAR_9->sync_pulse << 2);

 FUNC_1(VAR_8->regmap, 0xba, VAR_11 << 5);

 VAR_8->embedded_sync = VAR_9->embedded_sync;
 VAR_8->hsync_polarity = VAR_9->hsync_polarity;
 VAR_8->vsync_polarity = VAR_9->vsync_polarity;
 VAR_8->rgb = VAR_9->input_colorspace == VAR_6;
}
