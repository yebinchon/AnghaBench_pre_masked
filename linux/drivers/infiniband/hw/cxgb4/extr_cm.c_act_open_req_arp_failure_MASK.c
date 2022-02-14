
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {scalar_t__ ss_family; } ;
struct TYPE_12__ {TYPE_5__* dev; int local_addr; TYPE_1__ remote_addr; } ;
struct c4iw_ep {int atid; TYPE_6__ com; } ;
struct TYPE_9__ {int tids; int * ports; } ;
struct TYPE_10__ {TYPE_3__ lldi; } ;
struct TYPE_11__ {TYPE_4__ rdev; int atids; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (struct c4iw_ep*,int ) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct c4iw_ep*,struct sk_buff*,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_4, struct sk_buff *VAR_5)
{
 struct c4iw_ep *VAR_6 = VAR_4;

 FUNC_4("ARP failure during connect\n");
 FUNC_1(VAR_6, -VAR_2);
 FUNC_0(&VAR_6->com, VAR_1);
 if (VAR_6->com.remote_addr.ss_family == VAR_0) {
  struct sockaddr_in6 *VAR_7 =
   (struct sockaddr_in6 *)&VAR_6->com.local_addr;
  FUNC_2(VAR_6->com.dev->rdev.lldi.ports[0],
       (const u32 *)&VAR_7->sin6_addr.s6_addr, 1);
 }
 FUNC_6(&VAR_6->com.dev->atids, VAR_6->atid);
 FUNC_3(VAR_6->com.dev->rdev.lldi.tids, VAR_6->atid);
 FUNC_5(VAR_6, VAR_5, VAR_3);
}
