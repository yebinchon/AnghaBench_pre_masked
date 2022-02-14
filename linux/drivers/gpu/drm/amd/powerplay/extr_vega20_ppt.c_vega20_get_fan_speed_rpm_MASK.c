
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*,int *) ;
 int FUNC_2 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_1,
        uint32_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0);

 if (VAR_3) {
  FUNC_0("Attempt to get current RPM from SMC Failed!\n");
  return VAR_3;
 }

 FUNC_1(VAR_1, VAR_2);

 return 0;
}
