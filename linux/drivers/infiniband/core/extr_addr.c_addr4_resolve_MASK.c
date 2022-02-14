
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rtable {int dst; } ;
struct rdma_dev_addr {int hoplimit; int net; int bound_dev_if; } ;
struct flowi4 {void* saddr; int flowi4_oif; void* daddr; } ;
typedef int fl4 ;
typedef void* __be32 ;


 int FUNC_0 (struct rtable*) ;
 int FUNC_1 (int *) ;
 struct rtable* FUNC_2 (int ,struct flowi4*) ;
 int FUNC_3 (struct flowi4*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sockaddr *VAR_0,
    const struct sockaddr *VAR_1,
    struct rdma_dev_addr *VAR_2,
    struct rtable **VAR_3)
{
 struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_0;
 const struct sockaddr_in *VAR_5 =
   (const struct sockaddr_in *)VAR_1;

 __be32 VAR_6 = VAR_4->sin_addr.s_addr;
 __be32 VAR_7 = VAR_5->sin_addr.s_addr;
 struct rtable *VAR_8;
 struct flowi4 VAR_9;
 int VAR_10;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9 = VAR_7;
 VAR_9 = VAR_6;
 VAR_9 = VAR_2->bound_dev_if;
 VAR_8 = FUNC_2(VAR_2->net, &VAR_9);
 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_4->sin_addr.s_addr = VAR_9;

 VAR_2->hoplimit = FUNC_1(&VAR_8->dst);

 *VAR_3 = VAR_8;
 return 0;
}
