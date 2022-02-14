
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,int ) ;
 int FUNC_1 (struct smu_context*,int ) ;
 int FUNC_2 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_1, bool VAR_2)
{
 if (!FUNC_1(VAR_1, VAR_0))
  return 0;

 if (VAR_2 == FUNC_0(VAR_1, VAR_0))
  return 0;

 return FUNC_2(VAR_1, VAR_0, VAR_2);
}
