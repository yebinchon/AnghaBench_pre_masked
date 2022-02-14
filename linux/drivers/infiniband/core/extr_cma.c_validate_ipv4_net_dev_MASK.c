
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct net_device {int ifindex; } ;
struct flowi4 {void* saddr; void* daddr; int flowi4_iif; } ;
struct fib_result {int dummy; } ;
typedef int fl4 ;
typedef void* __be32 ;


 struct net_device* FUNC_0 (struct fib_result) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct flowi4*,struct fib_result*,int ) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (struct flowi4*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static bool FUNC_10(struct net_device *VAR_0,
      const struct sockaddr_in *VAR_1,
      const struct sockaddr_in *VAR_2)
{
 __be32 VAR_3 = VAR_1->sin_addr.s_addr,
        VAR_4 = VAR_2->sin_addr.s_addr;
 struct fib_result VAR_5;
 struct flowi4 VAR_6;
 int VAR_7;
 bool VAR_8;

 if (FUNC_5(VAR_4) || FUNC_3(VAR_4) ||
     FUNC_3(VAR_3) || FUNC_6(VAR_4) ||
     FUNC_6(VAR_3) || FUNC_4(VAR_3) ||
     FUNC_4(VAR_4))
  return 0;

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6 = VAR_0->ifindex;
 VAR_6 = VAR_3;
 VAR_6 = VAR_4;

 FUNC_8();
 VAR_7 = FUNC_2(FUNC_1(VAR_0), &VAR_6, &VAR_5, 0);
 VAR_8 = VAR_7 == 0 && FUNC_0(VAR_5) == VAR_0;
 FUNC_9();

 return VAR_8;
}
