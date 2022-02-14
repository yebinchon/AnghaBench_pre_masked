
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vTotal; scalar_t__ hTotal; scalar_t__ dotClock; } ;
typedef TYPE_1__ XRRModeInfo ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static int FUNC_1(const XRRModeInfo* VAR_0)
{
    if (VAR_0->hTotal && VAR_0->vTotal)
        return (int) FUNC_0((double) VAR_0->dotClock / ((double) VAR_0->hTotal * (double) VAR_0->vTotal));
    else
        return 0;
}
