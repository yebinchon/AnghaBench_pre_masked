
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_job_gather {int handled; scalar_t__ bo; int base; } ;
struct host1x_job {unsigned int num_gathers; struct host1x_job_gather* gathers; int * gather_addr_phys; } ;
struct host1x {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct host1x_job*,struct device*) ;
 struct host1x* FUNC_2 (int ) ;
 int FUNC_3 (struct host1x_job*,struct host1x_job_gather*) ;
 int FUNC_4 (struct host1x_job*) ;
 int FUNC_5 (struct host1x*,struct host1x_job*) ;
 int FUNC_6 () ;

int FUNC_7(struct host1x_job *VAR_1, struct device *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5;
 struct host1x *VAR_6 = FUNC_2(VAR_2->parent);


 VAR_3 = FUNC_5(VAR_6, VAR_1);
 if (VAR_3)
  goto out;

 if (FUNC_0(VAR_0)) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   goto out;
 }


 for (VAR_4 = 0; VAR_4 < VAR_1->num_gathers; VAR_4++) {
  struct host1x_job_gather *VAR_7 = &VAR_1->gathers[VAR_4];


  if (VAR_7->handled)
   continue;


  if (!FUNC_0(VAR_0))
   VAR_7->base = VAR_1->gather_addr_phys[VAR_4];

  for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_1->num_gathers; VAR_5++) {
   if (VAR_1->gathers[VAR_5].bo == VAR_7->bo) {
    VAR_1->gathers[VAR_5].handled = 1;
    VAR_1->gathers[VAR_5].base = VAR_7->base;
   }
  }

  VAR_3 = FUNC_3(VAR_1, VAR_7);
  if (VAR_3)
   break;
 }

out:
 if (VAR_3)
  FUNC_4(VAR_1);
 FUNC_6();

 return VAR_3;
}
