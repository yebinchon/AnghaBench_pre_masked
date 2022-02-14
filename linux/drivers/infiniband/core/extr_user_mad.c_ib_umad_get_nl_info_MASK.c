
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_umad_device {TYPE_1__* ports; } ;
struct ib_device {int dummy; } ;
struct ib_client_nl_info {size_t port; int * cdev; int abi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,size_t) ;
 size_t FUNC_1 (struct ib_device*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_2, void *VAR_3,
          struct ib_client_nl_info *VAR_4)
{
 struct ib_umad_device *VAR_5 = VAR_3;

 if (!FUNC_0(VAR_2, VAR_4->port))
  return -VAR_0;

 VAR_4->abi = VAR_1;
 VAR_4->cdev = &VAR_5->ports[VAR_4->port - FUNC_1(VAR_2)].dev;

 return 0;
}
