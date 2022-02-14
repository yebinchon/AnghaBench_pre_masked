
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef int u8 ;
struct ib_port_attr {scalar_t__ subnet_prefix; } ;
struct TYPE_4__ {int (* query_port ) (struct ib_device*,int ,struct ib_port_attr*) ;int (* query_gid ) (struct ib_device*,int ,int ,union ib_gid*) ;} ;
struct ib_device {TYPE_2__ ops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ib_port_attr*,int ,int) ;
 scalar_t__ FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_4 (struct ib_device*,int ,int ,union ib_gid*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_1,
      u8 VAR_2,
      struct ib_port_attr *VAR_3)
{
 union ib_gid VAR_4 = {};
 int VAR_5;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 VAR_5 = VAR_1->ops.query_port(VAR_1, VAR_2, VAR_3);
 if (VAR_5 || VAR_3->subnet_prefix)
  return VAR_5;

 if (FUNC_2(VAR_1, VAR_2) !=
     VAR_0)
  return 0;

 VAR_5 = VAR_1->ops.query_gid(VAR_1, VAR_2, 0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->subnet_prefix = FUNC_0(VAR_4.global.subnet_prefix);
 return 0;
}
