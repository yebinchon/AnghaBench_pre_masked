
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ve_spc_opp {int freq; } ;
struct TYPE_2__ {int* num_opps; struct ve_spc_opp** opps; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4 = VAR_0->num_opps[VAR_1];
 struct ve_spc_opp *VAR_5 = VAR_0->opps[VAR_1];
 u32 VAR_6 = 0, VAR_7 = ~0, VAR_8;

 VAR_2 /= 1000;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++, VAR_5++) {
  VAR_8 = VAR_5->freq;
  if (VAR_8 >= VAR_2) {
   if (VAR_8 <= VAR_7)
    VAR_7 = VAR_8;
  } else {
   if (VAR_8 >= VAR_6)
    VAR_6 = VAR_8;
  }
 }
 if (VAR_7 != ~0)
  return VAR_7 * 1000;
 else
  return VAR_6 * 1000;
}
