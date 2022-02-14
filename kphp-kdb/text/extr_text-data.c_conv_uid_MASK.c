
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_id; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_1 (int VAR_8) {
  int VAR_9 = VAR_8 % VAR_6;
  if (!VAR_8 || (VAR_9 != VAR_5 && VAR_9 != -VAR_5)) {
    return -1;
  }
  VAR_8 /= VAR_6;
  if (VAR_8 < 0 || VAR_9 < 0) {
    VAR_8--;
  }
  VAR_8 += VAR_2;
  return (unsigned) VAR_8 < VAR_0 ? VAR_8 : -1;

}
