
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int dummy; } ;
struct net_device {int dummy; } ;
struct ipoib_ah {struct ib_ah* ah; int ref; scalar_t__ last_send; struct net_device* dev; } ;
struct ib_pd {int dummy; } ;
struct ib_ah {int dummy; } ;


 int VAR_0 ;
 struct ipoib_ah* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ib_ah*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,struct ib_ah*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ipoib_ah*) ;
 struct ipoib_ah* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 struct ib_ah* FUNC_7 (struct ib_pd*,struct rdma_ah_attr*,int ) ;

struct ipoib_ah *FUNC_8(struct net_device *VAR_3,
     struct ib_pd *VAR_4, struct rdma_ah_attr *VAR_5)
{
 struct ipoib_ah *VAR_6;
 struct ib_ah *VAR_7;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->dev = VAR_3;
 VAR_6->last_send = 0;
 FUNC_6(&VAR_6->ref);

 VAR_7 = FUNC_7(VAR_4, VAR_5, VAR_2);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_6);
  VAR_6 = (struct ipoib_ah *)VAR_7;
 } else {
  VAR_6->ah = VAR_7;
  FUNC_2(FUNC_3(VAR_3), "Created ah %p\n", VAR_6->ah);
 }

 return VAR_6;
}
