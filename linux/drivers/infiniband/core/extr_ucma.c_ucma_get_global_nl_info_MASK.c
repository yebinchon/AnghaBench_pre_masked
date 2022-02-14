
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_client_nl_info {int cdev; int abi; } ;
struct TYPE_2__ {int this_device; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ib_client_nl_info *VAR_2)
{
 VAR_2->abi = VAR_0;
 VAR_2->cdev = VAR_1.this_device;
 return 0;
}
