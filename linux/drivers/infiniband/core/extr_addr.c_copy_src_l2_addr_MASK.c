
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_dev_addr {int network; } ;
struct net_device {scalar_t__ type; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dst_entry const*,scalar_t__) ;
 int FUNC_1 (struct rdma_dev_addr*,TYPE_1__*) ;
 int FUNC_2 (struct sockaddr const*,struct rdma_dev_addr*) ;

__attribute__((used)) static int FUNC_3(struct rdma_dev_addr *VAR_6,
       const struct sockaddr *VAR_7,
       const struct dst_entry *VAR_8,
       const struct net_device *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_8->dev->flags & VAR_2)
  VAR_10 = FUNC_2(VAR_7, VAR_6);
 else
  FUNC_1(VAR_6, VAR_8->dev);






 if (FUNC_0(VAR_8, VAR_7->sa_family) &&
     VAR_9->type != VAR_1)
  VAR_6->network = VAR_7->sa_family == VAR_0 ?
      VAR_4 :
      VAR_5;
 else
  VAR_6->network = VAR_3;

 return VAR_10;
}
