
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ib_gid {scalar_t__ raw; } ;
typedef int u16 ;
struct in6_addr {int dummy; } ;
struct ib_qp {scalar_t__ qp_type; int usecnt; TYPE_2__* device; } ;
struct TYPE_3__ {int (* attach_mcast ) (struct ib_qp*,union ib_gid*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_qp*,int ) ;
 int FUNC_2 (struct in6_addr*) ;
 int FUNC_3 (struct ib_qp*,union ib_gid*,int ) ;

int FUNC_4(struct ib_qp *VAR_3, union ib_gid *VAR_4, u16 VAR_5)
{
 int VAR_6;

 if (!VAR_3->device->ops.attach_mcast)
  return -VAR_1;

 if (!FUNC_2((struct in6_addr *)VAR_4->raw) ||
     VAR_3->qp_type != VAR_2 || !FUNC_1(VAR_3, VAR_5))
  return -VAR_0;

 VAR_6 = VAR_3->device->ops.attach_mcast(VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  FUNC_0(&VAR_3->usecnt);
 return VAR_6;
}
