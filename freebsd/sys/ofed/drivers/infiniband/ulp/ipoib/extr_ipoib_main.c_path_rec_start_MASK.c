
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int raw; } ;
struct ib_sa_path_rec {int mtu; TYPE_1__ dgid; int mtu_selector; } ;
struct ipoib_path {scalar_t__ query_id; int done; int * query; struct ib_sa_path_rec pathrec; } ;
struct ipoib_dev_priv {int port; int ca; struct ifnet* dev; } ;
struct ifnet {scalar_t__ if_mtu; } ;
typedef int ib_sa_comp_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,struct ib_sa_path_rec*,int,int,int ,int ,struct ipoib_path*,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int ,char*,int ) ;
 int VAR_14 ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct ipoib_dev_priv *VAR_16, struct ipoib_path *VAR_17)
{
 struct ifnet *VAR_18 = VAR_16->dev;

 ib_sa_comp_mask VAR_19 = VAR_8 | VAR_7;
 struct ib_sa_path_rec VAR_20;

 VAR_20 = VAR_17->pathrec;
 VAR_20.mtu_selector = VAR_5;

 switch (FUNC_6(VAR_18->if_mtu + VAR_13)) {
 case 512:
  VAR_20.mtu = VAR_3;
  break;
 case 1024:
  VAR_20.mtu = VAR_4;
  break;
 case 2048:
  VAR_20.mtu = VAR_1;
  break;
 case 4096:
  VAR_20.mtu = VAR_2;
  break;
 default:

  VAR_19 = 0;
  VAR_20.mtu = 0;
  VAR_20.mtu_selector = 0;
 }

 FUNC_4(VAR_16, "Start path record lookup for %16D MTU > %d\n",
    VAR_20.dgid.raw, ":",
    VAR_19 ? FUNC_1(VAR_20.mtu) : 0);

 FUNC_3(&VAR_17->done);

 VAR_17->query_id =
  FUNC_2(&VAR_14, VAR_16->ca, VAR_16->port,
       &VAR_20, VAR_19 |
       VAR_6 |
       VAR_11 |
       VAR_9 |
       VAR_12 |
       VAR_10,
       1000, VAR_0,
       VAR_15,
       VAR_17, &VAR_17->query);
 if (VAR_17->query_id < 0) {
  FUNC_5(VAR_16, "ib_sa_path_rec_get failed: %d\n", VAR_17->query_id);
  VAR_17->query = ((void*)0);
  FUNC_0(&VAR_17->done);
  return VAR_17->query_id;
 }

 return 0;
}
