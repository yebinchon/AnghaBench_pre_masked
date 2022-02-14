
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int pm_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1, uint32_t VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1->pm_enabled)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2);
 return VAR_3;
}
