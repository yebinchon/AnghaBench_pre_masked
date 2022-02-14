
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*,int,...) ;
 int FUNC_2 (TYPE_1__*,int,int *,int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{

 int VAR_5;
 dma_addr_t VAR_6;

 VAR_3 =
  (void *) FUNC_0(FUNC_2(&VAR_4->dev, (1 << 20),
          &VAR_6, VAR_1));

 VAR_5 = FUNC_6(VAR_4->dev.of_node);
 while (VAR_5 > 0) {
  enum of_gpio_flags VAR_7;
  int VAR_8 = FUNC_5(VAR_4->dev.of_node,
          --VAR_5, &VAR_7);
  if (FUNC_4(VAR_8, "vmmc-relay"))
   continue;
  FUNC_1(&VAR_4->dev, "requested GPIO %d\n", VAR_8);
  FUNC_3(VAR_8,
          (VAR_7 & VAR_2) ? (0) : (1));
 }

 FUNC_1(&VAR_4->dev, "reserved %dMB at 0x%p", (1 << 20) >> 20, VAR_3);

 return 0;
}
