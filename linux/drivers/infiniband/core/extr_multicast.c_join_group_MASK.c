
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int join_state; } ;
struct TYPE_3__ {TYPE_2__ rec; } ;
struct mcast_member {int list; TYPE_1__ multicast; int state; } ;
struct mcast_group {int active_list; TYPE_2__ rec; } ;


 int VAR_0 ;
 int FUNC_0 (struct mcast_group*,int ,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct mcast_group *VAR_1, struct mcast_member *VAR_2,
         u8 VAR_3)
{
 VAR_2->state = VAR_0;
 FUNC_0(VAR_1, VAR_3, 1);
 VAR_1->rec.join_state |= VAR_3;
 VAR_2->multicast.rec = VAR_1->rec;
 VAR_2->multicast.rec.join_state = VAR_3;
 FUNC_1(&VAR_2->list, &VAR_1->active_list);
}
