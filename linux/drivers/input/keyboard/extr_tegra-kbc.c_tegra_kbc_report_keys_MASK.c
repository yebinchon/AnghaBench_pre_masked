
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct tegra_kbc {unsigned short* keycode; unsigned int num_pressed_keys; int current_keys; int idev; scalar_t__ max_keys; scalar_t__ use_ghost_filter; scalar_t__ use_fn_map; scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned short VAR_3 ;
 unsigned char FUNC_0 (unsigned int,unsigned int,unsigned char) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned short*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,unsigned char*,unsigned short*,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned short*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct tegra_kbc *VAR_4)
{
 unsigned char VAR_5[VAR_1];
 unsigned short VAR_6[VAR_1];
 u32 VAR_7 = 0;
 unsigned int VAR_8;
 unsigned int VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 bool VAR_12 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if ((VAR_8 % 4) == 0)
   VAR_7 = FUNC_3(VAR_4->mmio + VAR_0 + VAR_8);

  if (VAR_7 & 0x80) {
   unsigned int VAR_13 = VAR_7 & 0x07;
   unsigned int VAR_14 = (VAR_7 >> 3) & 0x0f;
   unsigned char VAR_15 =
    FUNC_0(VAR_14, VAR_13, VAR_2);

   VAR_5[VAR_9] = VAR_15;
   VAR_6[VAR_9] = VAR_4->keycode[VAR_15];

   if ((VAR_6[VAR_9] == VAR_3) && VAR_4->use_fn_map)
    VAR_10 = 1;
   else
    VAR_9++;
  }

  VAR_7 >>= 8;
 }







 if (VAR_4->use_ghost_filter && VAR_9 >= 3) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   unsigned int VAR_16;
   u8 VAR_17 = VAR_5[VAR_8] & 0x07;
   u8 VAR_18 = VAR_5[VAR_8] >> VAR_2;





   for (VAR_16 = VAR_8 + 1; VAR_16 < VAR_9; VAR_16++) {
    u8 VAR_19 = VAR_5[VAR_16] & 0x07;
    u8 VAR_20 = VAR_5[VAR_16] >> VAR_2;

    if (VAR_19 == VAR_17)
     VAR_12 = 1;
    if (VAR_20 == VAR_18)
     VAR_11 = 1;
   }
  }
 }





 if (VAR_10) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   VAR_5[VAR_8] += VAR_4->max_keys;
   VAR_6[VAR_8] = VAR_4->keycode[VAR_5[VAR_8]];
  }
 }


 if (VAR_12 && VAR_11)
  return;

 FUNC_5(VAR_4->idev,
           VAR_4->current_keys, VAR_4->num_pressed_keys,
           VAR_6, VAR_9);
 FUNC_4(VAR_4->idev, VAR_5, VAR_6, VAR_9);
 FUNC_1(VAR_4->idev);

 FUNC_2(VAR_4->current_keys, VAR_6, sizeof(VAR_4->current_keys));
 VAR_4->num_pressed_keys = VAR_9;
}
