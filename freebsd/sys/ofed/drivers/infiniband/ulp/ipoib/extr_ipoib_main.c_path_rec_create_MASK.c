
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int uint8_t ;
struct TYPE_5__ {int * raw; } ;
struct TYPE_6__ {int numb_path; int traffic_class; int pkey; int sgid; TYPE_1__ dgid; } ;
struct ipoib_path {TYPE_2__ pathrec; int hwaddr; int queue; struct ipoib_dev_priv* priv; } ;
struct ipoib_dev_priv {TYPE_4__* broadcast; int pkey; int local_gid; } ;
struct TYPE_7__ {int traffic_class; } ;
struct TYPE_8__ {TYPE_3__ mcmember; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 struct ipoib_path* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static struct ipoib_path *
FUNC_4(struct ipoib_dev_priv *VAR_2, uint8_t *VAR_3)
{
 struct ipoib_path *VAR_4;

 if (!VAR_2->broadcast)
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->priv = VAR_2;

 FUNC_0(&VAR_4->queue, sizeof(VAR_4->queue));




 FUNC_3(VAR_4->pathrec.dgid.raw, &VAR_3[4], sizeof (union ib_gid));
 VAR_4->pathrec.sgid = VAR_2->local_gid;
 VAR_4->pathrec.pkey = FUNC_1(VAR_2->pkey);
 VAR_4->pathrec.numb_path = 1;
 VAR_4->pathrec.traffic_class = VAR_2->broadcast->mcmember.traffic_class;

 return VAR_4;
}
