
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dispc_device {TYPE_2__* pdev; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static u32 FUNC_1(struct dispc_device *VAR_0)
{
 u32 VAR_1 = 0;


 FUNC_0(VAR_0->pdev->dev.of_node, "max-memory-bandwidth",
        &VAR_1);

 return VAR_1;
}
