
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct sk_buff {scalar_t__ protocol; int dev; } ;
struct rxe_dev {int ib_dev; } ;
struct in6_addr {int dummy; } ;
struct ib_gid_attr {int dummy; } ;
struct TYPE_4__ {int daddr; } ;
struct TYPE_3__ {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_gid_attr const*) ;
 int FUNC_1 (struct ib_gid_attr const*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,struct in6_addr*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 struct ib_gid_attr* FUNC_6 (int *,union ib_gid*,int ,int,int ) ;
 int FUNC_7 (struct ib_gid_attr const*) ;

__attribute__((used)) static int FUNC_8(struct rxe_dev *VAR_2, struct sk_buff *VAR_3)
{
 const struct ib_gid_attr *VAR_4;
 union ib_gid VAR_5;
 union ib_gid *VAR_6;

 if (VAR_3->protocol == FUNC_2(VAR_0)) {
  FUNC_4(FUNC_3(VAR_3)->daddr,
           (struct in6_addr *)&VAR_5);
  VAR_6 = &VAR_5;
 } else {
  VAR_6 = (union ib_gid *)&FUNC_5(VAR_3)->daddr;
 }

 VAR_4 = FUNC_6(&VAR_2->ib_dev, VAR_6,
      VAR_1,
      1, VAR_3->dev);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_7(VAR_4);
 return 0;
}
