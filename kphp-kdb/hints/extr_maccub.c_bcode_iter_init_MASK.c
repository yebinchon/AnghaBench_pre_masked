
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i; int k; int len; int * ptr; } ;
typedef TYPE_1__ bcode_iterator ;
typedef int * bcode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (bcode_iterator *VAR_0, bcode VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  VAR_0->ptr = VAR_1;
  VAR_0->i = -1;

  VAR_0->k = 0;
  int VAR_5 = 1;

  while (VAR_5 <= VAR_2) {
    VAR_5 += VAR_5;
    VAR_0->k++;
  }

  if (VAR_0->k > 0) {
    VAR_0->len = 8 * VAR_3 / VAR_0->k;
  } else {
    FUNC_0 (VAR_1 == ((void*)0));
    VAR_0->len = 0;
  }

  int VAR_6 = VAR_0->len;
  int VAR_7 = -1, VAR_8 = VAR_6;

  while (VAR_7 + 1 < VAR_8) {
    int VAR_9 = (VAR_7 + VAR_8) >> 1;
    if (FUNC_1 (VAR_0, VAR_9) <= VAR_4) {
      VAR_8 = VAR_9;
    } else {
      VAR_7 = VAR_9;
    }
  }
  VAR_0->i = VAR_8 - 1;
  FUNC_2 (VAR_0);
}
