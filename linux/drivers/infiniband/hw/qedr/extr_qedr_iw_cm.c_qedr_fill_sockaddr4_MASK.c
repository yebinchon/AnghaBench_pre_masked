
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_port; void* sin_family; } ;
struct qed_iwarp_cm_info {int * remote_ip; int * local_ip; int remote_port; int local_port; } ;
struct iw_cm_event {int remote_addr; int local_addr; } ;


 void* VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(const struct qed_iwarp_cm_info *VAR_1,
      struct iw_cm_event *VAR_2)
{
 struct sockaddr_in *VAR_3 = (struct sockaddr_in *)&VAR_2->local_addr;
 struct sockaddr_in *VAR_4 = (struct sockaddr_in *)&VAR_2->remote_addr;

 VAR_3->sin_family = VAR_0;
 VAR_4->sin_family = VAR_0;

 VAR_3->sin_port = FUNC_1(VAR_1->local_port);
 VAR_4->sin_port = FUNC_1(VAR_1->remote_port);

 VAR_3->sin_addr.s_addr = FUNC_0(VAR_1->local_ip[0]);
 VAR_4->sin_addr.s_addr = FUNC_0(VAR_1->remote_ip[0]);
}
