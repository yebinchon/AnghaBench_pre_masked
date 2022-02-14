
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scpi_opp {unsigned long freq; } ;
struct scpi_clk {TYPE_1__* info; } ;
struct TYPE_2__ {int count; struct scpi_opp* opps; } ;



__attribute__((used)) static long FUNC_0(struct scpi_clk *VAR_0, unsigned long VAR_1)
{
 int VAR_2;
 unsigned long VAR_3 = 0, VAR_4 = ~0, VAR_5;
 const struct scpi_opp *VAR_6 = VAR_0->info->opps;

 for (VAR_2 = 0; VAR_2 < VAR_0->info->count; VAR_2++, VAR_6++) {
  VAR_5 = VAR_6->freq;
  if (VAR_5 >= VAR_1) {
   if (VAR_5 <= VAR_4)
    VAR_4 = VAR_5;
   break;
  } else if (VAR_5 >= VAR_3) {
   VAR_3 = VAR_5;
  }
 }
 return VAR_4 != ~0 ? VAR_4 : VAR_3;
}
