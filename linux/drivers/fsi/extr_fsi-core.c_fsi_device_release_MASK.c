
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct fsi_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct fsi_device*) ;
 int FUNC_1 (int ) ;
 struct fsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct fsi_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->dev.of_node);
 FUNC_0(VAR_1);
}
