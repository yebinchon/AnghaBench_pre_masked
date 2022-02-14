
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_counter_config {scalar_t__ enabled; } ;
struct TYPE_2__ {int num_pmcs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,unsigned int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct op_counter_config *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;


 FUNC_4(FUNC_2() | VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_4->num_pmcs; ++VAR_8) {
  if (VAR_7[VAR_8].enabled) {
   FUNC_0(VAR_8, VAR_6[VAR_8]);
  } else {
   FUNC_0(VAR_8, 0);
  }
 }

 VAR_9 = FUNC_3(VAR_3);





 VAR_9 &= ~VAR_1;






 VAR_9 &= ~VAR_0;
 FUNC_5(VAR_3, VAR_9);

 VAR_5 = 1;

 FUNC_1("start on cpu %d, mmcr0 %x\n", FUNC_6(), VAR_9);
 return 0;
}
