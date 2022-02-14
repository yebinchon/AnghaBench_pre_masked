
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scpi_opp {unsigned long freq; } ;
struct scpi_clk {TYPE_1__* info; } ;
struct TYPE_2__ {int count; struct scpi_opp* opps; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct scpi_clk *VAR_1, unsigned long VAR_2)
{
 int VAR_3, VAR_4 = VAR_1->info->count;
 const struct scpi_opp *VAR_5 = VAR_1->info->opps;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++, VAR_5++)
  if (VAR_5->freq == VAR_2)
   return VAR_3;
 return -VAR_0;
}
