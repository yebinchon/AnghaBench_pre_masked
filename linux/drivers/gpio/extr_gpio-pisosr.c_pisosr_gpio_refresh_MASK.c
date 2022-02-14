
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pisosr_gpio {int lock; int buffer_size; int buffer; int spi; scalar_t__ load_gpio; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct pisosr_gpio *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->lock);

 if (VAR_0->load_gpio) {
  FUNC_0(VAR_0->load_gpio, 1);
  FUNC_4(1);
  FUNC_0(VAR_0->load_gpio, 0);
  FUNC_4(1);
 }

 VAR_1 = FUNC_3(VAR_0->spi, VAR_0->buffer, VAR_0->buffer_size);

 FUNC_2(&VAR_0->lock);

 return VAR_1;
}
