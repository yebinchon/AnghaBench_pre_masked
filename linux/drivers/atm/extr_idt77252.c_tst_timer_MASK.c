
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct timer_list {int dummy; } ;
struct idt77252_dev {unsigned long* tst; size_t tst_index; unsigned long tst_size; int tst_lock; int tst_timer; int tst_state; TYPE_1__* soft_tst; } ;
struct TYPE_2__ {int tste; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct idt77252_dev* VAR_8 ;
 int FUNC_0 (int ,int *) ;
 struct idt77252_dev* FUNC_1 (int ,struct timer_list*,void (*) (struct timer_list*)) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct idt77252_dev*,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_10(struct timer_list *VAR_10)
{
 struct idt77252_dev *VAR_11 = FUNC_1(VAR_11, VAR_10, FUNC_10);
 unsigned long VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;
 int VAR_17;

 FUNC_5(&VAR_11->tst_lock, VAR_15);

 VAR_12 = VAR_11->tst[VAR_11->tst_index];
 VAR_13 = VAR_11->tst[VAR_11->tst_index ^ 1];

 if (FUNC_8(VAR_7, &VAR_11->tst_state)) {
  VAR_14 = VAR_12 + VAR_11->tst_size - 2;

  VAR_16 = FUNC_3(VAR_0) >> 2;
  if ((VAR_16 ^ VAR_13) & ~(VAR_11->tst_size - 1)) {
   FUNC_2(&VAR_11->tst_timer, VAR_9 + 1);
   goto out;
  }

  FUNC_0(VAR_7, &VAR_11->tst_state);

  VAR_11->tst_index ^= 1;
  FUNC_9(VAR_11, VAR_14, VAR_2 | (VAR_12 << 2));

  VAR_12 = VAR_11->tst[VAR_11->tst_index];
  VAR_13 = VAR_11->tst[VAR_11->tst_index ^ 1];

  for (VAR_17 = 0; VAR_17 < VAR_11->tst_size - 2; VAR_17++) {
   if (VAR_11->soft_tst[VAR_17].tste & VAR_5) {
    FUNC_9(VAR_11, VAR_13 + VAR_17,
        VAR_11->soft_tst[VAR_17].tste & VAR_1);
    VAR_11->soft_tst[VAR_17].tste &= ~(VAR_5);
   }
  }
 }

 if (FUNC_7(VAR_6, &VAR_11->tst_state)) {

  for (VAR_17 = 0; VAR_17 < VAR_11->tst_size - 2; VAR_17++) {
   if (VAR_11->soft_tst[VAR_17].tste & VAR_4) {
    FUNC_9(VAR_11, VAR_13 + VAR_17,
        VAR_11->soft_tst[VAR_17].tste & VAR_1);
    VAR_11->soft_tst[VAR_17].tste &= ~(VAR_4);
    VAR_11->soft_tst[VAR_17].tste |= VAR_5;
   }
  }

  VAR_14 = VAR_12 + VAR_11->tst_size - 2;

  FUNC_9(VAR_11, VAR_14, VAR_3);
  FUNC_4(VAR_7, &VAR_11->tst_state);

  FUNC_2(&VAR_11->tst_timer, VAR_9 + 1);
 }

out:
 FUNC_6(&VAR_11->tst_lock, VAR_15);
}
