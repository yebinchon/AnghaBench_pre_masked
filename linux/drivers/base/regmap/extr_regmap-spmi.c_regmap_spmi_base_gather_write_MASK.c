
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,scalar_t__,scalar_t__ const) ;
 int FUNC_2 (void*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_3(void *VAR_0,
      const void *VAR_1, size_t VAR_2,
      const void *VAR_3, size_t VAR_4)
{
 const u8 *VAR_5 = VAR_3;
 u8 VAR_6 = *(u8 *)VAR_1;
 int VAR_7 = 0;

 FUNC_0(VAR_2 != 1);





 if (VAR_6 == 0 && VAR_4) {
  VAR_7 = FUNC_2(VAR_0, *VAR_5);
  if (VAR_7)
   goto err_out;

  VAR_5++;
  VAR_6++;
  VAR_4--;
 }

 while (VAR_4) {
  VAR_7 = FUNC_1(VAR_0, VAR_6, *VAR_5);
  if (VAR_7)
   goto err_out;

  VAR_5++;
  VAR_6++;
  VAR_4--;
 }

err_out:
 return VAR_7;
}
