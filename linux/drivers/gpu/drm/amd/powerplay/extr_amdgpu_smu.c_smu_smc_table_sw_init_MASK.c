
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*) ;
 int FUNC_2 (struct smu_context*) ;
 int FUNC_3 (struct smu_context*) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0("Failed to init smu_initialize_pptable!\n");
  return VAR_1;
 }





 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0("Failed to init smc tables!\n");
  return VAR_1;
 }





 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0("Failed to init smu_init_power!\n");
  return VAR_1;
 }

 return 0;
}
