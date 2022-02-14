
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7768_state {int gpio_sync_in; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ad7768_state*,int) ;
 int FUNC_3 (struct ad7768_state*,int ,int) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct ad7768_state *VAR_2)
{
 int VAR_3;







 VAR_3 = FUNC_3(VAR_2, VAR_0, 0x3);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, VAR_0, 0x2);
 if (VAR_3)
  return VAR_3;

 VAR_2->gpio_sync_in = FUNC_4(&VAR_2->spi->dev, "adi,sync-in",
       VAR_1);
 if (FUNC_0(VAR_2->gpio_sync_in))
  return FUNC_1(VAR_2->gpio_sync_in);


 return FUNC_2(VAR_2, 32000);
}
