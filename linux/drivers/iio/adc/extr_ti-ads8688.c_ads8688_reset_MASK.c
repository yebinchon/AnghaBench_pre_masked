
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int dummy; } ;
struct ads8688_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int * d8; int d32; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct ads8688_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2)
{
 struct ads8688_state *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 <<= VAR_0;
 VAR_3->data[0].d32 = FUNC_1(VAR_4);

 return FUNC_3(VAR_3->spi, &VAR_3->data[0].d8[0], 4);
}
