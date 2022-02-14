
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* send_IPI_mask ) (struct cpumask const*,int) ;} ;


 int FUNC_0 (struct cpumask const*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct cpumask const*,int) ;

__attribute__((used)) static void FUNC_2(const struct cpumask *VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2))
  VAR_0.send_IPI_mask(VAR_1, VAR_2);
}
