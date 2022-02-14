
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gather_data {int magic; TYPE_2__* prev; TYPE_1__* next; } ;
struct TYPE_4__ {TYPE_1__* next; } ;
struct TYPE_3__ {TYPE_2__* prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (struct gather_data *VAR_3) {
  if (!VAR_3) {
    return;
  }
  FUNC_0 ((VAR_3->magic & VAR_1) == VAR_0);
  VAR_3->magic = 0;
  FUNC_0 (VAR_2 > 0);
  VAR_3->prev->next = VAR_3->next;
  VAR_3->next->prev = VAR_3->prev;
  VAR_2--;
}
