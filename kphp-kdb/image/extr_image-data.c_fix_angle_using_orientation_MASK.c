
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int orientation; } ;
typedef TYPE_1__ Image ;






__attribute__((used)) static void FUNC_0 (Image *VAR_0, int *VAR_1) {
  switch (VAR_0->orientation) {
    case 130:
      (*VAR_1) += 2;
      break;
    case 128:
      (*VAR_1) += 1;
      break;
    case 129:
      (*VAR_1) += 3;
      break;
    default:
      break;
  }
}
