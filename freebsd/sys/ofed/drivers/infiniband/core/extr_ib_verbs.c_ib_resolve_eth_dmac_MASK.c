
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct in6_addr {int dummy; } ;
struct ib_gid_attr {int ndev; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ raw; } ;
struct TYPE_3__ {int hop_limit; TYPE_2__ dgid; int sgid_index; } ;
struct ib_ah_attr {scalar_t__ port_num; TYPE_1__ grh; scalar_t__ dmac; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,scalar_t__,int ,union ib_gid*,struct ib_gid_attr*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 int FUNC_4 (struct in6_addr*,char*) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (union ib_gid*,TYPE_2__*,scalar_t__,int ,int*) ;
 int FUNC_7 (struct ib_device*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct ib_device*) ;
 scalar_t__ FUNC_9 (struct in6_addr*) ;
 scalar_t__ FUNC_10 (struct ib_device*) ;

int FUNC_11(struct ib_device *VAR_2,
   struct ib_ah_attr *VAR_3)
{
 struct ib_gid_attr VAR_4;
 union ib_gid VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_3->port_num < FUNC_10(VAR_2) ||
     VAR_3->port_num > FUNC_8(VAR_2))
  return -VAR_0;

 if (!FUNC_7(VAR_2, VAR_3->port_num))
  return 0;

 if (FUNC_9((struct in6_addr *)VAR_3->grh.dgid.raw)) {
  if (FUNC_3((struct in6_addr *)VAR_3->grh.dgid.raw)) {
   __be32 VAR_8 = 0;

   FUNC_5(&VAR_8, VAR_3->grh.dgid.raw + 12, 4);
   FUNC_2(VAR_8, (char *)VAR_3->dmac);
  } else {
   FUNC_4((struct in6_addr *)VAR_3->grh.dgid.raw,
     (char *)VAR_3->dmac);
  }
  return 0;
 }

 VAR_7 = FUNC_1(VAR_2,
      VAR_3->port_num,
      VAR_3->grh.sgid_index,
      &VAR_5, &VAR_4);
 if (VAR_7 != 0)
  return (VAR_7);
 if (!VAR_4.ndev)
  return -VAR_1;

 VAR_7 = FUNC_6(&VAR_5,
        &VAR_3->grh.dgid,
        VAR_3->dmac,
        VAR_4.ndev, &VAR_6);
 FUNC_0(VAR_4.ndev);

 VAR_3->grh.hop_limit = VAR_6;
 return VAR_7;
}
