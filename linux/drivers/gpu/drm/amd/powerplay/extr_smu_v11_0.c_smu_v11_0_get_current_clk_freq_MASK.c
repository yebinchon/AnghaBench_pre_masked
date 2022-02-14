
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,int) ;
 int FUNC_1 (struct smu_context*,int,int*) ;
 scalar_t__ FUNC_2 (struct smu_context*,int ) ;
 int FUNC_3 (struct smu_context*,int*) ;
 int FUNC_4 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_3,
       enum smu_clk_type VAR_4,
       uint32_t *VAR_5)
{
 int VAR_6 = 0;
 uint32_t VAR_7 = 0;
 int VAR_8;

 if (VAR_4 >= VAR_1 || !VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_3, VAR_4);
 if (VAR_8 < 0)
  return -VAR_0;


 if (FUNC_2(VAR_3, VAR_2) < 0)
  VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_7);
 else {
  VAR_6 = FUNC_4(VAR_3, VAR_2,
        (VAR_8 << 16));
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_3(VAR_3, &VAR_7);
  if (VAR_6)
   return VAR_6;
 }

 VAR_7 *= 100;
 *VAR_5 = VAR_7;

 return VAR_6;
}
