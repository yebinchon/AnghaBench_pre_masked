
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root; } ;
typedef TYPE_1__ treap ;
typedef int* changes ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2 (changes *VAR_0) {
  changes VAR_1 = *VAR_0;


  if ((long)(VAR_1) < 0) {
  } else

  if (VAR_1) {
    if (VAR_1[0] < 0) {
      FUNC_1 (((treap *)VAR_1)->root);
      FUNC_0 (VAR_1, sizeof (treap));
    } else {
      FUNC_0 (VAR_1, sizeof (int) * (VAR_1[0] + 1));
    }
  }

  *VAR_0 = ((void*)0);
}
