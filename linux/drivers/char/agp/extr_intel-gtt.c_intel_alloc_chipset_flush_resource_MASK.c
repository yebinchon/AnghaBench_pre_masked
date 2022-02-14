
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* bridge_dev; int ifp_resource; } ;
struct TYPE_3__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_2.bridge_dev->bus, &VAR_2.ifp_resource, VAR_0,
         VAR_0, VAR_1, 0,
         VAR_3, VAR_2.bridge_dev);

 return VAR_4;
}
