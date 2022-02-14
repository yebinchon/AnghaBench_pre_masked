
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_job_gather {unsigned int words; unsigned int offset; struct host1x_bo* bo; } ;
struct host1x_job {size_t num_gathers; struct host1x_job_gather* gathers; } ;
struct host1x_bo {int dummy; } ;



void FUNC_0(struct host1x_job *VAR_0, struct host1x_bo *VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 struct host1x_job_gather *VAR_4 = &VAR_0->gathers[VAR_0->num_gathers];

 VAR_4->words = VAR_2;
 VAR_4->bo = VAR_1;
 VAR_4->offset = VAR_3;

 VAR_0->num_gathers++;
}
