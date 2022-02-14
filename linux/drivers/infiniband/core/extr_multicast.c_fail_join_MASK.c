
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* callback ) (int,TYPE_1__*) ;} ;
struct mcast_member {TYPE_1__ multicast; int list; } ;
struct mcast_group {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct mcast_group *VAR_0, struct mcast_member *VAR_1,
       int VAR_2)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_0->lock);
 return VAR_1->multicast.callback(VAR_2, &VAR_1->multicast);
}
