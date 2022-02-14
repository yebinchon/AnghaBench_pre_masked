
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int k; unsigned char* ptr; } ;
typedef TYPE_1__ bcode_iterator ;



int FUNC_0 (bcode_iterator *VAR_0, int VAR_1) {
  if (VAR_1 >= VAR_0->len) {
    return 0;
  }
  int VAR_2 = VAR_0->k * VAR_1;
  const unsigned char *VAR_3 = VAR_0->ptr + (VAR_2 >> 3);
  VAR_2 &= 7;

  if (VAR_2 + VAR_0->k <= 8) {
    return ( ( *VAR_3 ) >> VAR_2 ) & ( (1 << VAR_0->k) - 1 );
  }

  int VAR_4 = ( ( *VAR_3++ ) >> VAR_2 );
  VAR_2 = VAR_0->k - (8 - VAR_2);

  while (VAR_2 > 8) {
    VAR_4 = (VAR_4 << 8) + *VAR_3++;
    VAR_2 -= 8;
  }

  VAR_4 = (VAR_4 << VAR_2) + ( *VAR_3 & ( (1 << VAR_2) - 1) );
  return VAR_4;
}
