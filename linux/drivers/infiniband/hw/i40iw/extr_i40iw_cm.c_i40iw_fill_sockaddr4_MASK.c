
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_port; void* sin_family; } ;
struct iw_cm_event {int remote_addr; int local_addr; } ;
struct i40iw_cm_node {int * rem_addr; int * loc_addr; int rem_port; int loc_port; } ;


 void* VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct i40iw_cm_node *VAR_1,
     struct iw_cm_event *VAR_2)
{
 struct sockaddr_in *VAR_3 = (struct sockaddr_in *)&VAR_2->local_addr;
 struct sockaddr_in *VAR_4 = (struct sockaddr_in *)&VAR_2->remote_addr;

 VAR_3->sin_family = VAR_0;
 VAR_4->sin_family = VAR_0;

 VAR_3->sin_port = FUNC_1(VAR_1->loc_port);
 VAR_4->sin_port = FUNC_1(VAR_1->rem_port);

 VAR_3->sin_addr.s_addr = FUNC_0(VAR_1->loc_addr[0]);
 VAR_4->sin_addr.s_addr = FUNC_0(VAR_1->rem_addr[0]);
}
