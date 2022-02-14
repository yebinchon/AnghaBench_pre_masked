
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pred; int* ptr; } ;
typedef TYPE_1__ iCode_iterator ;



int FUNC_0 (iCode_iterator *VAR_0, int VAR_1) {
  int VAR_2 = 0, VAR_3 = 1, VAR_4;

  if (VAR_1 == 1) {
    return 0;
  }

  while (VAR_3 < VAR_1) {
    VAR_3 += VAR_3;
    VAR_2++;
  }

  if (VAR_0->pred + VAR_2 <= 8) {
    VAR_4 = ( ( *VAR_0->ptr ) >> VAR_0->pred ) & ( (1 << VAR_2) - 1 );
    VAR_0->pred += VAR_2;
    return VAR_4;
  }

  VAR_4 = ( ( *VAR_0->ptr++ ) >> VAR_0->pred );
  VAR_0->pred = VAR_2 - (8 - VAR_0->pred);

  while (VAR_0->pred > 8) {
    VAR_4 = (VAR_4 << 8) + *VAR_0->ptr++;
    VAR_0->pred -= 8;
  }

  VAR_4 = (VAR_4 << VAR_0->pred) + ( *VAR_0->ptr & ( (1 << VAR_0->pred) - 1) );
  return VAR_4;

}
