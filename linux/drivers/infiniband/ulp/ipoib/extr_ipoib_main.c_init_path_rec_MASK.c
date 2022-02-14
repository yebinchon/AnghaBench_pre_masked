
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {int numb_path; int traffic_class; int pkey; int sgid; TYPE_1__ dgid; int rec_type; } ;
struct ipoib_path {TYPE_2__ pathrec; int dev; } ;
struct ipoib_dev_priv {TYPE_4__* broadcast; int pkey; int local_gid; int port; int ca; int dev; } ;
struct TYPE_7__ {int traffic_class; } ;
struct TYPE_8__ {TYPE_3__ mcmember; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ipoib_dev_priv *VAR_2, struct ipoib_path *VAR_3,
     void *VAR_4)
{
 VAR_3->dev = VAR_2->dev;

 if (FUNC_2(VAR_2->ca, VAR_2->port))
  VAR_3->pathrec.rec_type = VAR_1;
 else
  VAR_3->pathrec.rec_type = VAR_0;

 FUNC_1(VAR_3->pathrec.dgid.raw, VAR_4, sizeof(union ib_gid));
 VAR_3->pathrec.sgid = VAR_2->local_gid;
 VAR_3->pathrec.pkey = FUNC_0(VAR_2->pkey);
 VAR_3->pathrec.numb_path = 1;
 VAR_3->pathrec.traffic_class = VAR_2->broadcast->mcmember.traffic_class;
}
