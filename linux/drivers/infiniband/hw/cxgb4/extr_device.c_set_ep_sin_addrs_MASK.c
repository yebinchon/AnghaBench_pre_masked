
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct iw_cm_id {int remote_addr; int local_addr; } ;
struct TYPE_2__ {int remote_addr; int local_addr; struct iw_cm_id* cm_id; } ;
struct c4iw_ep {TYPE_1__ com; } ;


 struct sockaddr_in VAR_0 ;

__attribute__((used)) static void FUNC_0(struct c4iw_ep *VAR_1,
        struct sockaddr_in **VAR_2,
        struct sockaddr_in **VAR_3,
        struct sockaddr_in **VAR_4,
        struct sockaddr_in **VAR_5)
{
 struct iw_cm_id *VAR_6 = VAR_1->com.cm_id;

 *VAR_4 = (struct sockaddr_in *)&VAR_1->com.local_addr;
 *VAR_5 = (struct sockaddr_in *)&VAR_1->com.remote_addr;
 if (VAR_6) {
  *VAR_2 = (struct sockaddr_in *)&VAR_6->local_addr;
  *VAR_3 = (struct sockaddr_in *)&VAR_6->remote_addr;
 } else {
  *VAR_2 = &VAR_0;
  *VAR_3 = &VAR_0;
 }
}
