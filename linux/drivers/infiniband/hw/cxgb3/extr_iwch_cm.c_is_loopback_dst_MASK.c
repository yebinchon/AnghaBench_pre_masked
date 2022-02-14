
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct net_device {int dummy; } ;
struct iw_cm_id {int m_remote_addr; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 struct net_device* FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct iw_cm_id *VAR_1)
{
 struct net_device *VAR_2;
 struct sockaddr_in *VAR_3 = (struct sockaddr_in *)&VAR_1->m_remote_addr;

 VAR_2 = FUNC_1(&VAR_0, VAR_3->sin_addr.s_addr);
 if (!VAR_2)
  return 0;
 FUNC_0(VAR_2);
 return 1;
}
