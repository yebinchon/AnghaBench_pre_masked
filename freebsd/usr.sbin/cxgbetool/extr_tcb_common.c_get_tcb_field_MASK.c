
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; int lo; int rawval; unsigned int val; } ;
typedef TYPE_1__ _TCBVAR ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,scalar_t__,scalar_t__) ;

void
FUNC_2(_TCBVAR *VAR_0,unsigned char *VAR_1)
{
  FUNC_0(VAR_0->hi-VAR_0->lo+1<=64);
  FUNC_0(VAR_0->hi>=VAR_0->lo);

  VAR_0->rawval=FUNC_1(VAR_1,VAR_0->lo,VAR_0->hi);

  VAR_0->val=(unsigned) (VAR_0->rawval & 0xFFFFFFFF);


}
