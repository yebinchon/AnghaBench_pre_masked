
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nmode; TYPE_2__ const* modes; } ;
typedef TYPE_1__ XRRScreenResources ;
struct TYPE_6__ {scalar_t__ id; } ;
typedef TYPE_2__ XRRModeInfo ;
typedef scalar_t__ RRMode ;



__attribute__((used)) static const XRRModeInfo* FUNC_0(const XRRScreenResources* VAR_0, RRMode VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->nmode; VAR_2++)
    {
        if (VAR_0->modes[VAR_2].id == VAR_1)
            return VAR_0->modes + VAR_2;
    }

    return ((void*)0);
}
