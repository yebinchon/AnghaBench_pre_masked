
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interval; } ;
typedef TYPE_1__ ikcpcb ;



int FUNC_0(ikcpcb *VAR_0, int VAR_1)
{
 if (VAR_1 > 5000) VAR_1 = 5000;
 else if (VAR_1 < 10) VAR_1 = 10;
 VAR_0->interval = VAR_1;
 return 0;
}
