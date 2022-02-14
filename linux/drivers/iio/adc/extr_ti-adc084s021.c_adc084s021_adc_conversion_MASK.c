
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int len; } ;
struct adc084s021 {int * rx_buf; int message; int spi; TYPE_1__ spi_trans; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct adc084s021 *VAR_0, void *VAR_1)
{
 int VAR_2 = (VAR_0->spi_trans.len >> 1) - 1;
 int VAR_3, VAR_4 = 0;
 u16 *VAR_5 = VAR_1;


 VAR_3 = FUNC_0(VAR_0->spi, &VAR_0->message);
 if (VAR_3 < 0)
  return VAR_3;

 for (; VAR_4 < VAR_2; VAR_4++)
  *(VAR_5 + VAR_4) = VAR_0->rx_buf[VAR_4 + 1];

 return VAR_3;
}
