
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hdmi_8996_post_divider {int vco_freq; int tx_band_sel; int vco_ratio; int hsclk_divsel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct hdmi_8996_post_divider *VAR_3, u64 VAR_4)
{
 int VAR_5[] = { 2, 3, 4, 5, 6, 9, 10, 12, 14, 15, 20, 21, 25, 28, 35 };
 int VAR_6[] = { 0, 4, 8, 12, 1, 5, 2, 9, 3, 13, 10, 7, 14, 11, 15 };
 int VAR_7[] = { 0, 1, 2, 3 };
 u64 VAR_8[60];
 u64 VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;

retry:
 VAR_10 = VAR_1;
 VAR_12 = -1;
 VAR_13 = 0;
 for (VAR_14 = 0; VAR_14 < 15; VAR_14++) {
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
   u32 VAR_16 = VAR_5[VAR_14] << VAR_7[VAR_15];

   VAR_9 = VAR_4 >> VAR_11;
   VAR_9 *= VAR_16;
   VAR_8[VAR_13++] = VAR_9;
  }
 }

 for (VAR_14 = 0; VAR_14 < 60; VAR_14++) {
  u64 VAR_17 = VAR_8[VAR_14];

  if ((VAR_17 >= VAR_2) &&
      (VAR_17 <= VAR_10)) {
   VAR_10 = VAR_17;
   VAR_12 = VAR_14;
  }
 }

 if (VAR_12 == -1) {
  if (!VAR_11) {
   VAR_11 = 1;
   goto retry;
  }
 } else {
  VAR_3->vco_freq = VAR_10;
  VAR_3->tx_band_sel = VAR_7[VAR_12 % 4];
  VAR_3->vco_ratio = VAR_5[VAR_12 / 4];
  VAR_3->hsclk_divsel = VAR_6[VAR_12 / 4];

  return 0;
 }

 return -VAR_0;
}
