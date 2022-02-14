
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct rdma_dev_addr {int dev_type; int bound_dev_if; int net; } ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ib_device*,union ib_gid*,int,int ,struct net_device*,int *) ;
 scalar_t__ FUNC_3 (struct ib_device*,int ) ;
 scalar_t__ FUNC_4 (struct ib_device*,int ) ;

__attribute__((used)) static inline int FUNC_5(struct ib_device *VAR_4, u8 VAR_5,
        enum ib_gid_type VAR_6,
        union ib_gid *VAR_7,
        const struct rdma_dev_addr *VAR_8)
{
 const int VAR_9 = VAR_8->dev_type;
 struct net_device *VAR_10;
 int VAR_11 = -VAR_2;

 if ((VAR_9 == VAR_1) && !FUNC_3(VAR_4, VAR_5))
  return VAR_11;

 if ((VAR_9 != VAR_1) && FUNC_3(VAR_4, VAR_5))
  return VAR_11;

 if (VAR_9 == VAR_0 && FUNC_4(VAR_4, VAR_5)) {
  VAR_10 = FUNC_0(VAR_8->net, VAR_8->bound_dev_if);
 } else {
  VAR_10 = ((void*)0);
  VAR_6 = VAR_3;
 }

 VAR_11 = FUNC_2(VAR_4, VAR_7, VAR_6, VAR_5,
      VAR_10, ((void*)0));

 if (VAR_10)
  FUNC_1(VAR_10);

 return VAR_11;
}
