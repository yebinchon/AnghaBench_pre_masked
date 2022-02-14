
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {int val80h; int val40h; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_3,
       unsigned int VAR_4)
{
 FUNC_0();
 FUNC_2(0x40, VAR_1);
 FUNC_2(0x00, VAR_0);
 FUNC_1();
 FUNC_3(1000);

 FUNC_0();


 FUNC_2(0x80, VAR_1);
 FUNC_2(VAR_2[VAR_4].val80h, VAR_0);


 FUNC_2(0x40, VAR_1);
 FUNC_2(VAR_2[VAR_4].val40h, VAR_0);
 FUNC_3(10000);
 FUNC_1();

 return 0;
}
