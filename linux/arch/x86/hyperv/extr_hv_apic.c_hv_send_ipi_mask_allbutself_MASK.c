
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* send_IPI_mask_allbutself ) (struct cpumask const*,int) ;} ;


 int FUNC_0 (struct cpumask const*,int) ;
 int FUNC_1 (unsigned int,struct cpumask*) ;
 int FUNC_2 (struct cpumask*,struct cpumask const*) ;
 TYPE_1__ VAR_0 ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (struct cpumask const*,int) ;

__attribute__((used)) static void FUNC_5(const struct cpumask *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = FUNC_3();
 struct cpumask VAR_4;
 const struct cpumask *VAR_5;

 FUNC_2(&VAR_4, VAR_1);
 FUNC_1(VAR_3, &VAR_4);
 VAR_5 = &VAR_4;
 if (!FUNC_0(VAR_5, VAR_2))
  VAR_0.send_IPI_mask_allbutself(VAR_1, VAR_2);
}
