
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct TYPE_2__ {int counter_mem_size; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 TYPE_1__* VAR_1 ;
 struct cpumask* FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct cpumask*,struct cpumask const*,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2)
{
 const struct cpumask *VAR_3;
 static struct cpumask VAR_4;
 int VAR_5 = 0;


 VAR_3 = FUNC_1(VAR_2);


 if (FUNC_2(&VAR_4, VAR_3, &VAR_0))
  return 0;

 if (!FUNC_4(VAR_2)) {
  VAR_5 = FUNC_0(VAR_2, VAR_1->counter_mem_size);
  if (VAR_5) {
   FUNC_5("core_imc memory allocation for cpu %d failed\n", VAR_2);
   return VAR_5;
  }
 }


 FUNC_3(VAR_2, &VAR_0);
 return 0;
}
