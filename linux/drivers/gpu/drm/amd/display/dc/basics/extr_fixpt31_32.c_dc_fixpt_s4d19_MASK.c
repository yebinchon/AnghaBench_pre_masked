
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fixed31_32 {scalar_t__ value; } ;
struct TYPE_2__ {scalar_t__ value; } ;


 TYPE_1__ FUNC_0 (struct fixed31_32) ;
 int FUNC_1 (scalar_t__,int,int) ;

int FUNC_2(struct fixed31_32 VAR_0)
{
 if (VAR_0.value < 0)
  return -(int)FUNC_1(FUNC_0(VAR_0).value, 4, 19);
 else
  return FUNC_1(VAR_0.value, 4, 19);
}
