
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {TYPE_1__ dgid; } ;
struct ipoib_path {int query_id; int done; int * query; TYPE_2__ pathrec; } ;
struct ipoib_dev_priv {int port; int ca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*,int,int,int ,int ,struct ipoib_path*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int ) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8,
     struct ipoib_path *VAR_9)
{
 struct ipoib_dev_priv *VAR_10 = FUNC_4(VAR_8);

 FUNC_3(VAR_10, "Start path record lookup for %pI6\n",
    VAR_9->pathrec.dgid.raw);

 FUNC_2(&VAR_9->done);

 VAR_9->query_id =
  FUNC_1(&VAR_6, VAR_10->ca, VAR_10->port,
       &VAR_9->pathrec,
       VAR_1 |
       VAR_4 |
       VAR_2 |
       VAR_5 |
       VAR_3,
       1000, VAR_0,
       VAR_7,
       VAR_9, &VAR_9->query);
 if (VAR_9->query_id < 0) {
  FUNC_5(VAR_10, "ib_sa_path_rec_get failed: %d\n", VAR_9->query_id);
  VAR_9->query = ((void*)0);
  FUNC_0(&VAR_9->done);
  return VAR_9->query_id;
 }

 return 0;
}
