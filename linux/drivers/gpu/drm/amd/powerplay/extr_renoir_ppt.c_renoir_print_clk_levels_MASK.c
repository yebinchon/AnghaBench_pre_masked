
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * clocks_table; } ;
struct smu_context {TYPE_1__ smu_table; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_4__ {int* ClockFrequency; int member_0; } ;
typedef TYPE_2__ SmuMetrics_t ;
typedef int DpmClocks_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int VAR_12 ;
 int FUNC_1 (struct smu_context*,int const,int*,int*) ;
 int FUNC_2 (struct smu_context*,int ,int ,void*,int) ;
 scalar_t__ FUNC_3 (char*,char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_13,
   enum smu_clk_type VAR_14, char *VAR_15)
{
 int VAR_16, VAR_17 = 0, VAR_18 = 0;
 uint32_t VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 DpmClocks_t *VAR_24 = VAR_13->smu_table.clocks_table;
 SmuMetrics_t VAR_25 = {0};

 if (!VAR_24 || VAR_14 >= VAR_11)
  return -VAR_5;

 VAR_18 = FUNC_2(VAR_13, VAR_12, 0,
          (void *)&VAR_25, 0);
 if (VAR_18)
  return VAR_18;

 switch (VAR_14) {
 case 131:
 case 129:

  VAR_19 = VAR_25.ClockFrequency[VAR_2];
  VAR_18 = FUNC_1(VAR_13, 131, &VAR_22, &VAR_23);
  if (!VAR_18) {

   if (VAR_19 == VAR_23)
    VAR_16 = 2;
   else if (VAR_19 == VAR_22)
    VAR_16 = 0;
   else
    VAR_16 = 1;

   VAR_17 += FUNC_3(VAR_15 + VAR_17, "0: %uMhz %s\n", VAR_22,
     VAR_16 == 0 ? "*" : "");
   VAR_17 += FUNC_3(VAR_15 + VAR_17, "1: %uMhz %s\n",
     VAR_16 == 1 ? VAR_19 : VAR_10,
     VAR_16 == 1 ? "*" : "");
   VAR_17 += FUNC_3(VAR_15 + VAR_17, "2: %uMhz %s\n", VAR_23,
     VAR_16 == 2 ? "*" : "");
  }
  return VAR_17;
 case 128:
  VAR_21 = VAR_9;
  VAR_19 = VAR_25.ClockFrequency[VAR_3];
  break;
 case 130:
  VAR_21 = VAR_8;
  VAR_19 = VAR_25.ClockFrequency[VAR_4];
  break;
 case 133:
  VAR_21 = VAR_6;
  VAR_19 = VAR_25.ClockFrequency[VAR_0];
  break;
 case 132:
  VAR_21 = VAR_7;
  VAR_19 = VAR_25.ClockFrequency[VAR_1];
  break;
 default:
  return -VAR_5;
 }

 for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++) {
  FUNC_0(VAR_24, VAR_14, VAR_16, VAR_20);
  VAR_17 += FUNC_3(VAR_15 + VAR_17, "%d: %uMhz %s\n", VAR_16, VAR_20,
    VAR_19 == VAR_20 ? "*" : "");
 }

 return VAR_17;
}
