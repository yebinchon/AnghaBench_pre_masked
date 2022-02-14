
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int submap_idx; int submap; } ;
typedef TYPE_1__ xen_feature_info_t ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

void
FUNC_1(void)
{
        xen_feature_info_t VAR_3;
        int VAR_4, VAR_5;

        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
                VAR_3.submap_idx = VAR_4;
                if (FUNC_0(VAR_1, &VAR_3) < 0)
                        break;
                for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
                        VAR_2[VAR_4*32 + VAR_5] = !!(VAR_3.submap & 1<<VAR_5);
        }
}
