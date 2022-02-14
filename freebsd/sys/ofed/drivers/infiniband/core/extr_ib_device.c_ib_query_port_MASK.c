
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef scalar_t__ u8 ;
struct ib_port_attr {scalar_t__ subnet_prefix; } ;
struct ib_device {int (* query_port ) (struct ib_device*,scalar_t__,struct ib_port_attr*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,scalar_t__,int ,union ib_gid*,int *) ;
 int FUNC_2 (struct ib_port_attr*,int ,int) ;
 scalar_t__ FUNC_3 (struct ib_device*) ;
 scalar_t__ FUNC_4 (struct ib_device*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ib_device*) ;
 int FUNC_6 (struct ib_device*,scalar_t__,struct ib_port_attr*) ;

int FUNC_7(struct ib_device *VAR_2,
    u8 VAR_3,
    struct ib_port_attr *VAR_4)
{
 union ib_gid VAR_5;
 int VAR_6;

 if (VAR_3 < FUNC_5(VAR_2) || VAR_3 > FUNC_3(VAR_2))
  return -VAR_0;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_6 = VAR_2->query_port(VAR_2, VAR_3, VAR_4);
 if (VAR_6 || VAR_4->subnet_prefix)
  return VAR_6;

 if (FUNC_4(VAR_2, VAR_3) != VAR_1)
  return 0;

 VAR_6 = FUNC_1(VAR_2, VAR_3, 0, &VAR_5, ((void*)0));
 if (VAR_6)
  return VAR_6;

 VAR_4->subnet_prefix = FUNC_0(VAR_5.global.subnet_prefix);
 return 0;
}
