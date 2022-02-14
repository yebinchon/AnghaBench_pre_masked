
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_gov_info_struct {int busy_spus; TYPE_1__* policy; } ;
struct TYPE_4__ {int busy_spus; } ;
struct TYPE_3__ {int cpu; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ,int) ;
 TYPE_2__* VAR_2 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct spu_gov_info_struct *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->policy->cpu;
 VAR_5 = FUNC_0(&VAR_2[FUNC_2(VAR_4)].busy_spus);

 VAR_3->busy_spus = FUNC_1(VAR_3->busy_spus, VAR_0, VAR_5 * VAR_1);
 FUNC_3("cpu %d: busy_spus=%d, info->busy_spus=%ld\n",
   VAR_4, VAR_5, VAR_3->busy_spus);

 return VAR_3->policy->max * VAR_3->busy_spus / VAR_1;
}
