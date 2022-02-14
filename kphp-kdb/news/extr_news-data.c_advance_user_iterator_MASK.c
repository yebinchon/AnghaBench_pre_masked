
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int user_id; } ;
struct TYPE_7__ {int user_id; } ;
struct TYPE_6__ {int user_id; } ;
struct TYPE_5__ {size_t new_pos; size_t small_pos; size_t large_pos; int value; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,int) ;
 TYPE_3__* VAR_3 ;
 size_t VAR_4 ;
 TYPE_2__* VAR_5 ;
 size_t VAR_6 ;
 TYPE_1__ VAR_7 ;

int FUNC_1 (void) {
  int VAR_8 = VAR_7.new_pos < VAR_4 ? VAR_3[VAR_7.new_pos].user_id : VAR_0;
  int VAR_9 = VAR_7.small_pos < VAR_6 ? VAR_5[VAR_7.small_pos].user_id : VAR_0;
  int VAR_10 = VAR_7.large_pos < VAR_2 ? VAR_1[VAR_7.large_pos].user_id : VAR_0;
  int VAR_11 = FUNC_0 (VAR_8, FUNC_0 (VAR_9, VAR_10));
  if (VAR_11 == VAR_0) {
    return -1;
  }
  VAR_7.value = VAR_11;
  if (VAR_8 == VAR_11) {
    VAR_7.new_pos++;
  }
  if (VAR_9 == VAR_11) {
    VAR_7.small_pos++;
  }
  if (VAR_10 == VAR_11) {
    VAR_7.large_pos++;
  }
  return 1;
}
