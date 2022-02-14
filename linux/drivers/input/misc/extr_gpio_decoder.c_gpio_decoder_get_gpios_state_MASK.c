
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_descs {int ndescs; int * desc; } ;
struct gpio_decoder {int dev; struct gpio_descs* input_gpios; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_decoder *VAR_0)
{
 struct gpio_descs *VAR_1 = VAR_0->input_gpios;
 unsigned int VAR_2 = 0;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->ndescs; VAR_3++) {
  VAR_4 = FUNC_2(VAR_1->desc[VAR_3]);
  if (VAR_4 < 0) {
   FUNC_1(VAR_0->dev,
    "Error reading gpio %d: %d\n",
    FUNC_0(VAR_1->desc[VAR_3]), VAR_4);
   return VAR_4;
  }

  VAR_4 = !!VAR_4;
  VAR_2 = (VAR_2 << 1) | VAR_4;
 }

 return VAR_2;
}
