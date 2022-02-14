
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int dummy; } ;
struct ad7780_state {int odr; int gain; struct ad7780_chip_info* chip_info; } ;
struct ad7780_chip_info {unsigned int pattern_mask; unsigned int pattern; scalar_t__ is_ad778x; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 struct ad7780_state* FUNC_0 (struct ad_sigma_delta*) ;

__attribute__((used)) static int FUNC_1(struct ad_sigma_delta *VAR_6,
         unsigned int VAR_7)
{
 struct ad7780_state *VAR_8 = FUNC_0(VAR_6);
 const struct ad7780_chip_info *VAR_9 = VAR_8->chip_info;

 if ((VAR_7 & VAR_0) ||
     ((VAR_7 & VAR_9->pattern_mask) != VAR_9->pattern))
  return -VAR_3;

 if (VAR_9->is_ad778x) {
  VAR_8->gain = VAR_4[VAR_7 & VAR_2];
  VAR_8->odr = VAR_5[VAR_7 & VAR_1];
 }

 return 0;
}
