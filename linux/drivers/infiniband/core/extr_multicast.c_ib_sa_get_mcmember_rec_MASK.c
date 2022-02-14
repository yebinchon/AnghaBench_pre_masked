
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef size_t u8 ;
struct mcast_port {int lock; } ;
struct ib_sa_mcmember_rec {int dummy; } ;
struct mcast_group {struct ib_sa_mcmember_rec rec; } ;
struct mcast_device {size_t start_port; struct mcast_port* port; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mcast_device* FUNC_0 (struct ib_device*,int *) ;
 int VAR_2 ;
 struct mcast_group* FUNC_1 (struct mcast_port*,union ib_gid*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ib_device *VAR_3, u8 VAR_4,
      union ib_gid *VAR_5, struct ib_sa_mcmember_rec *VAR_6)
{
 struct mcast_device *VAR_7;
 struct mcast_port *VAR_8;
 struct mcast_group *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 VAR_7 = FUNC_0(VAR_3, &VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = &VAR_7->port[VAR_4 - VAR_7->start_port];
 FUNC_2(&VAR_8->lock, VAR_10);
 VAR_9 = FUNC_1(VAR_8, VAR_5);
 if (VAR_9)
  *VAR_6 = VAR_9->rec;
 else
  VAR_11 = -VAR_0;
 FUNC_3(&VAR_8->lock, VAR_10);

 return VAR_11;
}
