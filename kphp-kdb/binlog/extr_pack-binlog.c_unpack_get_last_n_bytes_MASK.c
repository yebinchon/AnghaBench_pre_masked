
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write_buff_off; int size; int off; } ;
typedef TYPE_1__ unpack_interval_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1 (unsigned long long VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, unpack_interval_t *VAR_6) {
  unsigned VAR_7 = VAR_1;
  VAR_7 &= (VAR_0 - 1);
  if (VAR_7 >= VAR_5) {
    if (VAR_3 == VAR_4 - 1) {
      VAR_6->write_buff_off = VAR_2 - VAR_5;
      VAR_6->size = VAR_5;
      VAR_6->off = 0;
      return 0;
    }
    return -1;
  } else {
    if (VAR_3 == VAR_4 - 1) {
      VAR_6->write_buff_off = 0;
      VAR_6->size = VAR_7;
      VAR_6->off = VAR_5 - VAR_7;
      return 0;
    } else {
      FUNC_0 (VAR_3 == VAR_4 - 2);
      VAR_7 = VAR_5 - VAR_7;
      VAR_6->write_buff_off = VAR_2 - VAR_7;
      VAR_6->size = VAR_7;
      VAR_6->off = 0;
      return 0;
    }
  }
}
