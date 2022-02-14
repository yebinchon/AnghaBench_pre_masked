
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ve_spc_opp {int freq; int u_volt; } ;
struct device {int id; } ;
struct TYPE_2__ {int* num_opps; struct ve_spc_opp** opps; } ;


 int FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,char*,int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4 = 0, VAR_5;
 struct ve_spc_opp *VAR_6;

 VAR_2 = FUNC_2(VAR_1->id);
 VAR_2 = VAR_2 < 0 ? 0 : VAR_2;

 VAR_5 = VAR_0->num_opps[VAR_2];
 VAR_6 = VAR_0->opps[VAR_2];

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++, VAR_6++) {
  VAR_4 = FUNC_0(VAR_1, VAR_6->freq * 1000, VAR_6->u_volt);
  if (VAR_4) {
   FUNC_1(VAR_1, "failed to add opp %lu %lu\n",
     VAR_6->freq, VAR_6->u_volt);
   return VAR_4;
  }
 }
 return VAR_4;
}
