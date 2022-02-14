
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u6_addr32; } ;
struct TYPE_4__ {TYPE_1__ in6_u; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; void* sin6_port; void* sin6_family; } ;
struct iw_cm_event {int remote_addr; int local_addr; } ;
struct i40iw_cm_node {int rem_addr; int loc_addr; int rem_port; int loc_port; } ;


 void* VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct i40iw_cm_node *VAR_1,
     struct iw_cm_event *VAR_2)
{
 struct sockaddr_in6 *VAR_3 = (struct sockaddr_in6 *)&VAR_2->local_addr;
 struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6 *)&VAR_2->remote_addr;

 VAR_3->sin6_family = VAR_0;
 VAR_4->sin6_family = VAR_0;

 VAR_3->sin6_port = FUNC_0(VAR_1->loc_port);
 VAR_4->sin6_port = FUNC_0(VAR_1->rem_port);

 FUNC_1(VAR_3->sin6_addr.in6_u.u6_addr32,
       VAR_1->loc_addr);
 FUNC_1(VAR_4->sin6_addr.in6_u.u6_addr32,
       VAR_1->rem_addr);
}
