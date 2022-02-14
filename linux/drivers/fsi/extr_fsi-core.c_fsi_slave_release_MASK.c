
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devt; } ;
struct fsi_slave {TYPE_1__ dev; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fsi_slave*) ;
 int FUNC_2 (int ) ;
 struct fsi_slave* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct fsi_slave *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->dev.devt);
 FUNC_2(VAR_0->of_node);
 FUNC_1(VAR_1);
}
