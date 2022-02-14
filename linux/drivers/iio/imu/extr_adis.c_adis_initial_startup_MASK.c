
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adis {TYPE_2__* spi; TYPE_1__* data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int startup_delay; } ;


 int FUNC_0 (struct adis*) ;
 int FUNC_1 (struct adis*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct adis *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_2(&VAR_0->spi->dev, "Self-test failed, trying reset.\n");
  FUNC_0(VAR_0);
  FUNC_3(VAR_0->data->startup_delay);
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1) {
   FUNC_2(&VAR_0->spi->dev, "Second self-test failed, giving up.\n");
   return VAR_1;
  }
 }

 return 0;
}
