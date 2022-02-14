
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvebu_mbus_state {TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ (* win_remap_offset ) (int const) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static bool FUNC_1(struct mvebu_mbus_state *VAR_1,
         const int VAR_2)
{
 return VAR_1->soc->win_remap_offset(VAR_2) != VAR_0;
}
