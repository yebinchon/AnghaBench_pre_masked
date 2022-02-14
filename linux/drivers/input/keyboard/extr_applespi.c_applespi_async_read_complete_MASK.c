
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; } ;
struct applespi_data {int gpe; TYPE_2__ rd_m; TYPE_1__* spi; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct applespi_data*) ;
 int FUNC_2 (struct applespi_data*,int,int) ;
 int FUNC_3 (int *,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct applespi_data *VAR_1 = VAR_0;

 if (VAR_1->rd_m.status < 0) {
  FUNC_3(&VAR_1->spi->dev, "Error reading from device: %d\n",
    VAR_1->rd_m.status);





  FUNC_2(VAR_1, 1, 1);
 } else {
  FUNC_1(VAR_1);
 }

 FUNC_0(((void*)0), VAR_1->gpe);
}
