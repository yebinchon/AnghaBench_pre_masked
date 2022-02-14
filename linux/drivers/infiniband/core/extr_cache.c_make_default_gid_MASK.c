
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subnet_prefix; } ;
union ib_gid {int * raw; TYPE_1__ global; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,struct net_device*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, union ib_gid *VAR_1)
{
 VAR_1->global.subnet_prefix = FUNC_1(0xfe80000000000000LL);
 FUNC_0(&VAR_1->raw[8], VAR_0);
}
