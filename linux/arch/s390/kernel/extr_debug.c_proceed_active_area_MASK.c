
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active_area; int nr_areas; } ;
typedef TYPE_1__ debug_info_t ;



__attribute__((used)) static inline void FUNC_0(debug_info_t *VAR_0)
{
 VAR_0->active_area++;
 VAR_0->active_area = VAR_0->active_area % VAR_0->nr_areas;
}
