
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ interface_id; int subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {scalar_t__ interface_id; int subnet_prefix; } ;
struct TYPE_9__ {TYPE_2__ global; } ;
struct ipoib_dev_priv {scalar_t__ port; TYPE_3__* dev; TYPE_5__ local_gid; int flags; int ca; } ;
struct TYPE_8__ {TYPE_5__* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,union ib_gid*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_5__*,union ib_gid*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ,union ib_gid*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static bool FUNC_8(struct ipoib_dev_priv *VAR_2)
{
 union ib_gid VAR_3;
 union ib_gid VAR_4;
 union ib_gid *VAR_5;
 int VAR_6;
 u16 VAR_7;
 u8 VAR_8;
 bool VAR_9 = 0;

 VAR_5 = (union ib_gid *)(VAR_2->dev->dev_addr + 4);
 if (FUNC_5(VAR_2->ca, VAR_2->port, 0, &VAR_4))
  return 0;

 FUNC_3(VAR_2->dev);




 VAR_2->local_gid.global.subnet_prefix = VAR_4;
 VAR_5->global.subnet_prefix = VAR_4;
 VAR_3.global.subnet_prefix = VAR_4;

 VAR_3.global.interface_id = VAR_2->local_gid.global.interface_id;

 FUNC_4(VAR_2->dev);

 VAR_6 = FUNC_1(VAR_2->ca, &VAR_3, &VAR_8, &VAR_7);

 FUNC_3(VAR_2->dev);

 if (VAR_3.global.interface_id !=
     VAR_2->local_gid.global.interface_id)



  goto out;
 if (!FUNC_7(VAR_1, &VAR_2->flags)) {
  if (!VAR_6 && VAR_8 == VAR_2->port) {
   FUNC_6(VAR_1, &VAR_2->flags);
   if (VAR_7 == 0)
    FUNC_0(VAR_0,
       &VAR_2->flags);
   else
    FUNC_6(VAR_0, &VAR_2->flags);
   VAR_9 = 1;
  } else {
   VAR_9 = 0;
  }
 } else {
  if (!VAR_6 && VAR_8 == VAR_2->port) {
   VAR_9 = 1;
  } else {
   if (!FUNC_7(VAR_0, &VAR_2->flags)) {
    FUNC_2(&VAR_2->local_gid, &VAR_4,
           sizeof(VAR_2->local_gid));
    FUNC_2(VAR_2->dev->dev_addr + 4, &VAR_4,
           sizeof(VAR_2->local_gid));
    VAR_9 = 1;
   }
  }
 }

out:
 FUNC_4(VAR_2->dev);

 return VAR_9;
}
