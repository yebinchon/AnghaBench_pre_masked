
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct imx_keypad {int cols_en_mask; unsigned short* matrix_unstable_state; scalar_t__ stable_count; unsigned short* matrix_stable_state; scalar_t__ mmio_base; int check_matrix_timer; } ;
typedef int matrix_volatile_state ;


 scalar_t__ VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct imx_keypad* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct imx_keypad*,unsigned short*) ;
 int FUNC_2 (struct imx_keypad*,unsigned short*) ;
 scalar_t__ VAR_10 ;
 struct imx_keypad* VAR_11 ;
 int FUNC_3 (unsigned short*,unsigned short*,int) ;
 int FUNC_4 (unsigned short*,int ,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 unsigned short FUNC_7 (scalar_t__) ;
 int FUNC_8 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_12)
{
 struct imx_keypad *VAR_13 = FUNC_0(VAR_13, VAR_12, VAR_9);
 unsigned short VAR_14[VAR_8];
 unsigned short VAR_15;
 bool VAR_16, VAR_17;
 int VAR_18;

 FUNC_4(VAR_14, 0, sizeof(VAR_14));

 FUNC_2(VAR_13, VAR_14);

 VAR_16 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  if ((VAR_13->cols_en_mask & (1 << VAR_18)) == 0)
   continue;

  if (VAR_13->matrix_unstable_state[VAR_18] ^ VAR_14[VAR_18]) {
   VAR_16 = 1;
   break;
  }
 }
 if (VAR_16) {
  FUNC_3(VAR_13->matrix_unstable_state, VAR_14,
   sizeof(VAR_14));
  VAR_13->stable_count = 0;
 } else
  VAR_13->stable_count++;





 if (VAR_13->stable_count < VAR_0) {
  FUNC_5(&VAR_13->check_matrix_timer,
     VAR_10 + FUNC_6(10));
  return;
 }







 if (VAR_13->stable_count == VAR_0) {
  FUNC_1(VAR_13, VAR_14);

  FUNC_3(VAR_13->matrix_stable_state, VAR_14,
   sizeof(VAR_14));
 }

 VAR_17 = 1;
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  if (VAR_14[VAR_18] != 0) {
   VAR_17 = 0;
   break;
  }
 }


 if (VAR_17) {





  VAR_15 = FUNC_7(VAR_13->mmio_base + VAR_7);
  VAR_15 |= VAR_3 | VAR_2;
  FUNC_8(VAR_15, VAR_13->mmio_base + VAR_7);

  VAR_15 = FUNC_7(VAR_13->mmio_base + VAR_7);
  VAR_15 |= VAR_1;
  VAR_15 &= ~VAR_5;
  FUNC_8(VAR_15, VAR_13->mmio_base + VAR_7);
 } else {






  FUNC_5(&VAR_13->check_matrix_timer,
     VAR_10 + FUNC_6(60));

  VAR_15 = FUNC_7(VAR_13->mmio_base + VAR_7);
  VAR_15 |= VAR_4 | VAR_6;
  FUNC_8(VAR_15, VAR_13->mmio_base + VAR_7);

  VAR_15 = FUNC_7(VAR_13->mmio_base + VAR_7);
  VAR_15 |= VAR_5;
  VAR_15 &= ~VAR_1;
  FUNC_8(VAR_15, VAR_13->mmio_base + VAR_7);
 }
}
