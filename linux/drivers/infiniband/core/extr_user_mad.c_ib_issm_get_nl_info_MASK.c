
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_umad_device {TYPE_1__* ports; } ;
struct ib_device {int dummy; } ;
struct ib_client_nl_info {size_t port; int * cdev; int abi; } ;
struct TYPE_2__ {int sm_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_umad_device* FUNC_0 (struct ib_device*,int *) ;
 int FUNC_1 (struct ib_device*,size_t) ;
 size_t FUNC_2 (struct ib_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_3, void *VAR_4,
          struct ib_client_nl_info *VAR_5)
{
 struct ib_umad_device *VAR_6 =
  FUNC_0(VAR_3, &VAR_2);

 if (!FUNC_1(VAR_3, VAR_5->port))
  return -VAR_0;

 VAR_5->abi = VAR_1;
 VAR_5->cdev = &VAR_6->ports[VAR_5->port - FUNC_2(VAR_3)].sm_dev;

 return 0;
}
