
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_num_polling_cpus; scalar_t__ nr_first_cpu_id; int nr_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct TestContext*) ;
 int FUNC_2 (struct TestContext*) ;
 int FUNC_3 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_4(struct TestContext *VAR_1)
{
 int VAR_2 = 0;

 if ((VAR_2 = FUNC_0(VAR_1)) != 0) {
  return VAR_2;
 }

 VAR_1->nr_mode = VAR_0;
 VAR_1->nr_num_polling_cpus = 1;
 VAR_1->nr_first_cpu_id = 0;
 if ((VAR_2 = FUNC_3(VAR_1))) {
  FUNC_1(VAR_1);






  return VAR_2;

 }

 if ((VAR_2 = FUNC_2(VAR_1))) {
  FUNC_1(VAR_1);
  return VAR_2;
 }

 return FUNC_1(VAR_1);
}
