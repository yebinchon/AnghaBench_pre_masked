
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts_nbus {struct gpio_descs* data; } ;
struct gpio_descs {int * desc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ts_nbus *VAR_0, u8 *VAR_1)
{
 struct gpio_descs *VAR_2 = VAR_0->data;
 int VAR_3, VAR_4;

 *VAR_1 = 0;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2->desc[VAR_4]);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_3)
   *VAR_1 |= FUNC_0(VAR_4);
 }

 return 0;
}
