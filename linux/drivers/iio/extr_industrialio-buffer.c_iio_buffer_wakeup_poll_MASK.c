
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {TYPE_1__* buffer; } ;
struct TYPE_2__ {int pollq; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct iio_dev *VAR_0)
{
 if (!VAR_0->buffer)
  return;

 FUNC_0(&VAR_0->buffer->pollq);
}
