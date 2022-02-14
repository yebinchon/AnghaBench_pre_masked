
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ xor_mask; scalar_t__ and_mask; } ;
struct TYPE_3__ {scalar_t__ xor_mask; scalar_t__ and_mask; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;

int FUNC_1 (void) {
  int VAR_4 = 0;
  while (VAR_1[VAR_4].xor_mask || VAR_1[VAR_4].and_mask) {
    VAR_2[VAR_4].and_mask = VAR_1[VAR_4].and_mask;
    VAR_2[VAR_4].xor_mask = VAR_1[VAR_4].xor_mask;
    VAR_4++;
  }
  VAR_3 = VAR_4;
  FUNC_0 (VAR_3 <= VAR_0);
  return VAR_4;
}
