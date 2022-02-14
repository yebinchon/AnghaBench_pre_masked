
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ifq_len; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {int flags; TYPE_3__ pkt_queue; TYPE_2__ mcmember; int logcount; struct ipoib_dev_priv* priv; } ;
struct ipoib_dev_priv {int dev; } ;
struct ib_sa_multicast {int rec; struct ipoib_mcast* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int ,char*,int) ;
 int FUNC_3 (struct ipoib_mcast*,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(int VAR_3,
       struct ib_sa_multicast *VAR_4)
{
 struct ipoib_mcast *VAR_5 = VAR_4->context;
 struct ipoib_dev_priv *VAR_6 = VAR_5->priv;


 if (VAR_3 == -VAR_0)
  return 0;

 if (!VAR_3)
  VAR_3 = FUNC_3(VAR_5, &VAR_4->rec);

 if (VAR_3) {
  if (VAR_5->logcount++ < 20)
   FUNC_2(VAR_6, "multicast join failed for %16D, status %d\n",
     VAR_5->mcmember.mgid.raw, ":", VAR_3);


  FUNC_1(VAR_6->dev, VAR_1, VAR_5->pkt_queue.ifq_len);
  FUNC_0(&VAR_5->pkt_queue);


  VAR_3 = FUNC_4(VAR_2,
         &VAR_5->flags);
 }
 return VAR_3;
}
