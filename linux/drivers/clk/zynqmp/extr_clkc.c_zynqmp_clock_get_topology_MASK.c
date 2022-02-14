
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct topology_resp {int topology; } ;
struct clock_topology {int dummy; } ;
struct TYPE_2__ {int clk_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clock_topology*,struct topology_resp*,size_t*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int,struct topology_resp*) ;

__attribute__((used)) static int FUNC_3(u32 VAR_3,
         struct clock_topology *VAR_4,
         u32 *VAR_5)
{
 int VAR_6, VAR_7;
 struct topology_resp VAR_8 = { };

 *VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6 += FUNC_0(VAR_8.topology)) {
  VAR_7 = FUNC_2(VAR_2[VAR_3].clk_id, VAR_6,
         &VAR_8);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_1(VAR_4, &VAR_8,
        VAR_5);
  if (VAR_7 == VAR_0)
   return 0;
 }

 return 0;
}
