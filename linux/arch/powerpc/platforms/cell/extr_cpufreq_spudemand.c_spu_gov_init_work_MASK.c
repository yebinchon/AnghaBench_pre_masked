
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_gov_info_struct {int work; TYPE_1__* policy; int poll_int; } ;
struct TYPE_2__ {int cpu; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spu_gov_info_struct *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1->poll_int);
 FUNC_0(&VAR_1->work, VAR_0);
 FUNC_1(VAR_1->policy->cpu, &VAR_1->work, VAR_2);
}
