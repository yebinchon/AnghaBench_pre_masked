
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int pstate_sclk; int pstate_mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*,int ,int*,int *) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_2)
{
 int VAR_3 = 0;
 uint32_t VAR_4 = 0, VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_1, &VAR_4, ((void*)0));
 if (VAR_3)
  return VAR_3;

 VAR_2->pstate_sclk = VAR_4 * 100;

 VAR_3 = FUNC_0(VAR_2, VAR_0, &VAR_5, ((void*)0));
 if (VAR_3)
  return VAR_3;

 VAR_2->pstate_mclk = VAR_5 * 100;

 return VAR_3;
}
