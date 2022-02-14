
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;






 int FUNC_0 (struct smu_context*,int) ;
 int FUNC_1 (struct smu_context*,int) ;
 int FUNC_2 (struct smu_context*,int) ;
 int FUNC_3 (struct smu_context*,int) ;

int FUNC_4(struct smu_context *VAR_0, uint32_t VAR_1,
      bool VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  break;
 case 131:
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  break;
 case 130:
  VAR_3 = FUNC_3(VAR_0, VAR_2);
  break;
 default:
  break;
 }

 return VAR_3;
}
