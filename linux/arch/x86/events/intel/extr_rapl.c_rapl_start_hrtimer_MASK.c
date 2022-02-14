
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_pmu {int timer_interval; int hrtimer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rapl_pmu *VAR_1)
{
       FUNC_0(&VAR_1->hrtimer, VAR_1->timer_interval,
       VAR_0);
}
