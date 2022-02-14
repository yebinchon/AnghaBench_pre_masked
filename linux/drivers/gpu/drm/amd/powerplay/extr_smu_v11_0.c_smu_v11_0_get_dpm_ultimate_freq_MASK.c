
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
 int FUNC_2 (struct smu_context*,int) ;
 int FUNC_3 (struct smu_context*,int*) ;
 int FUNC_4 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_3, enum smu_clk_type VAR_4,
       uint32_t *VAR_5, uint32_t *VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;
 uint32_t VAR_9 = 0;

 FUNC_0(&VAR_3->mutex);
 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (VAR_8 < 0) {
  VAR_7 = -VAR_0;
  goto failed;
 }
 VAR_9 = (VAR_8 & 0xffff) << 16;

 if (VAR_6) {
  VAR_7 = FUNC_4(VAR_3, VAR_1, VAR_9);
  if (VAR_7)
   goto failed;
  VAR_7 = FUNC_3(VAR_3, VAR_6);
  if (VAR_7)
   goto failed;
 }

 if (VAR_5) {
  VAR_7 = FUNC_4(VAR_3, VAR_2, VAR_9);
  if (VAR_7)
   goto failed;
  VAR_7 = FUNC_3(VAR_3, VAR_5);
  if (VAR_7)
   goto failed;
 }

failed:
 FUNC_1(&VAR_3->mutex);
 return VAR_7;
}
