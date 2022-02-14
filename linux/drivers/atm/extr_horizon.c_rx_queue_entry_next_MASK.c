
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int mem_lock; TYPE_1__* rx_q_reset; TYPE_1__* rx_q_entry; TYPE_1__* rx_q_wrap; } ;
typedef TYPE_2__ hrz_dev ;
struct TYPE_6__ {int entry; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static u32 FUNC_4 (hrz_dev * VAR_1) {
  u32 VAR_2;
  FUNC_1 (&VAR_1->mem_lock);
  VAR_2 = FUNC_0 (VAR_1, &VAR_1->rx_q_entry->entry);
  if (VAR_1->rx_q_entry == VAR_1->rx_q_wrap)
    VAR_1->rx_q_entry = VAR_1->rx_q_reset;
  else
    VAR_1->rx_q_entry++;
  FUNC_3 (VAR_1, VAR_0, VAR_1->rx_q_entry - VAR_1->rx_q_reset);
  FUNC_2 (&VAR_1->mem_lock);
  return VAR_2;
}
