
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int mutex; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smu_context*,int *,int) ;
 int FUNC_4 (struct smu_context*,int *) ;
 int FUNC_5 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_6(struct smu_context *VAR_3, enum smu_clk_type VAR_4,
       uint32_t *VAR_5, uint32_t *VAR_6)
{
 int VAR_7 = 0;

 FUNC_0(&VAR_3->mutex);

 if (VAR_6) {
  switch (VAR_4) {
  case 130:
  case 129:
   VAR_7 = FUNC_5(VAR_3, VAR_1);
   if (VAR_7) {
    FUNC_2("Attempt to get max GX frequency from SMC Failed !\n");
    goto failed;
   }
   VAR_7 = FUNC_4(VAR_3, VAR_6);
   if (VAR_7)
    goto failed;
   break;
  case 128:
   VAR_7 = FUNC_3(VAR_3, VAR_6, 1);
   if (VAR_7)
    goto failed;
   break;
  default:
   VAR_7 = -VAR_0;
   goto failed;

  }
 }

 if (VAR_5) {
  switch (VAR_4) {
  case 130:
  case 129:
   VAR_7 = FUNC_5(VAR_3, VAR_2);
   if (VAR_7) {
    FUNC_2("Attempt to get min GX frequency from SMC Failed !\n");
    goto failed;
   }
   VAR_7 = FUNC_4(VAR_3, VAR_5);
   if (VAR_7)
    goto failed;
   break;
  case 128:
   VAR_7 = FUNC_3(VAR_3, VAR_5, 0);
   if (VAR_7)
    goto failed;
   break;
  default:
   VAR_7 = -VAR_0;
   goto failed;
  }

 }
failed:
 FUNC_1(&VAR_3->mutex);
 return VAR_7;
}
