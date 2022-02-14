
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
 int FUNC_0 (struct smu_context*,int) ;
 int FUNC_1 (struct smu_context*,int,int*) ;
 int FUNC_2 (struct smu_context*,int,int,int*) ;
 int FUNC_3 (struct smu_context*,int,int*) ;
 int FUNC_4 (char*,char*,int,int,char*) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_0,
   enum smu_clk_type VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0;
 uint32_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 uint32_t VAR_9[3] = {0};
 uint32_t VAR_10 = 0;

 switch (VAR_1) {
 case 132:
 case 130:
 case 129:
 case 131:
 case 128:
 case 133:
 case 134:
  VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_6);
  if (VAR_5)
   return VAR_4;


  VAR_6 = VAR_6 / 100;

  VAR_5 = FUNC_3(VAR_0, VAR_1, &VAR_8);
  if (VAR_5)
   return VAR_4;

  if (!FUNC_0(VAR_0, VAR_1)) {
   for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3++) {
    VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_3, &VAR_7);
    if (VAR_5)
     return VAR_4;

    VAR_4 += FUNC_4(VAR_2 + VAR_4, "%d: %uMhz %s\n", VAR_3, VAR_7,
      VAR_6 == VAR_7 ? "*" : "");
   }
  } else {
   VAR_5 = FUNC_2(VAR_0, VAR_1, 0, &VAR_9[0]);
   if (VAR_5)
    return VAR_4;
   VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_8 - 1, &VAR_9[2]);
   if (VAR_5)
    return VAR_4;

   VAR_9[1] = VAR_6;
   VAR_10 = VAR_6 == VAR_9[0] ? 0 :
         VAR_6 == VAR_9[2] ? 2 : 1;
   if (VAR_10 != 1)
    VAR_9[1] = (VAR_9[0] + VAR_9[2]) / 2;

   for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
    VAR_4 += FUNC_4(VAR_2 + VAR_4, "%d: %uMhz %s\n", VAR_3, VAR_9[VAR_3],
      VAR_3 == VAR_10 ? "*" : "");
   }

  }
  break;
 default:
  break;
 }

 return VAR_4;
}
