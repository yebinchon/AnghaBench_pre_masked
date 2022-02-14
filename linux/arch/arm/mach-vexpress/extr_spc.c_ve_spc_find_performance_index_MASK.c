
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ve_spc_opp {scalar_t__ freq; } ;
struct TYPE_2__ {int* num_opps; struct ve_spc_opp** opps; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5 = VAR_1->num_opps[VAR_2];
 struct ve_spc_opp *VAR_6 = VAR_1->opps[VAR_2];

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_6++)
  if (VAR_6->freq == VAR_3)
   break;
 return (VAR_4 == VAR_5) ? -VAR_0 : VAR_4;
}
