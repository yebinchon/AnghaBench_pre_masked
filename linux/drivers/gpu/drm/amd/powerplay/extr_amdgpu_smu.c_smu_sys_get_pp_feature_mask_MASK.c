
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef size_t int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,int*,int) ;
 size_t FUNC_1 (struct smu_context*,int) ;
 int FUNC_2 (struct smu_context*,int) ;
 char* FUNC_3 (struct smu_context*,int) ;
 size_t FUNC_4 (char*,char*,int,...) ;

size_t FUNC_5(struct smu_context *VAR_1, char *VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4 = 0, VAR_5 = 0;
 uint32_t VAR_6[2] = { 0 };
 int32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9[VAR_0];
 uint64_t VAR_10 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_6, 2);
 if (VAR_4)
  goto failed;

 VAR_3 = FUNC_4(VAR_2 + VAR_3, "features high: 0x%08x low: 0x%08x\n",
   VAR_6[1], VAR_6[0]);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_7 = FUNC_1(VAR_1, VAR_5);
  if (VAR_7 < 0)
   continue;
  VAR_9[VAR_7] = VAR_5;
  VAR_10++;
 }

 for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
  VAR_3 += FUNC_4(VAR_2 + VAR_3, "%02d. %-20s (%2d) : %s\n",
          VAR_8++,
          FUNC_3(VAR_1, VAR_9[VAR_5]),
          VAR_5,
          !!FUNC_2(VAR_1, VAR_9[VAR_5]) ?
          "enabled" : "disabled");
 }

failed:
 return VAR_3;
}
