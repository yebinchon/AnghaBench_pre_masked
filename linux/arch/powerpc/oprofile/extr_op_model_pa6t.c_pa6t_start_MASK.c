
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct op_counter_config {scalar_t__ enabled; } ;
struct TYPE_2__ {int num_pmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned long) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,int) ;
 unsigned long* VAR_5 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct op_counter_config *VAR_6)
{
 int VAR_7;


 u64 VAR_8 = VAR_3 | VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_pmcs; VAR_7++)
  if (VAR_6[VAR_7].enabled)
   FUNC_0(VAR_7, VAR_5[VAR_7]);
  else
   FUNC_0(VAR_7, 0UL);

 FUNC_1(VAR_1, VAR_8);

 VAR_4 = 1;

 FUNC_2("start on cpu %d, mmcr0 %llx\n", FUNC_3(), VAR_8);

 return 0;
}
