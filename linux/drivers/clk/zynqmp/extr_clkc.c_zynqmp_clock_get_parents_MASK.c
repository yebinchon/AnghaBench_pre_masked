
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct parents_resp {int parents; } ;
struct clock_parent {int dummy; } ;
struct TYPE_2__ {int clk_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct clock_parent*,struct parents_resp*,scalar_t__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int,struct parents_resp*) ;

__attribute__((used)) static int FUNC_3(u32 VAR_3, struct clock_parent *VAR_4,
        u32 *VAR_5)
{
 int VAR_6 = 0, VAR_7;
 struct parents_resp VAR_8 = { };

 *VAR_5 = 0;
 do {

  VAR_7 = FUNC_2(VAR_2[VAR_3].clk_id, VAR_6,
        &VAR_8);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_1(&VAR_4[VAR_6], &VAR_8,
       VAR_5);
  if (VAR_7 == VAR_0)
   return 0;
  VAR_6 += FUNC_0(VAR_8.parents);
 } while (*VAR_5 <= VAR_1);

 return 0;
}
