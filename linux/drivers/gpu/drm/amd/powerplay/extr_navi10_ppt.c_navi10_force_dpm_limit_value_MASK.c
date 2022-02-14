
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct smu_context*,int,int *,int *) ;
 int FUNC_2 (struct smu_context*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3, bool VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 uint32_t VAR_7, VAR_8, VAR_9;
 enum smu_clk_type VAR_10;

 enum smu_clk_type VAR_11[] = {
  VAR_0,
  VAR_1,
  VAR_2,
 };

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_11); VAR_6++) {
  VAR_10 = VAR_11[VAR_6];
  VAR_5 = FUNC_1(VAR_3, VAR_10, &VAR_7, &VAR_8);
  if (VAR_5)
   return VAR_5;

  VAR_9 = VAR_4 ? VAR_8 : VAR_7;
  VAR_5 = FUNC_2(VAR_3, VAR_10, VAR_9, VAR_9);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_5;
}
