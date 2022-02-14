
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int surface_mutex; } ;
typedef TYPE_1__ IJKFF_Pipeline_Opaque ;
typedef TYPE_2__ IJKFF_Pipeline ;


 int FUNC_0 (int ) ;

int FUNC_1(IJKFF_Pipeline* VAR_0)
{
    IJKFF_Pipeline_Opaque *VAR_1 = VAR_0->opaque;
    return FUNC_0(VAR_1->surface_mutex);
}
