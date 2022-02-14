
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef scalar_t__ u_char ;
struct in_addr {scalar_t__ s_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct proxy_entry {scalar_t__ proxy_port; scalar_t__ proto; scalar_t__ server_port; int proxy_type; struct proxy_entry* next; struct in_addr server_addr; TYPE_4__ dst_addr; TYPE_3__ src_addr; TYPE_2__ dst_mask; TYPE_1__ src_mask; } ;
struct libalias {struct proxy_entry* proxyList; } ;


 int FUNC_0 (struct libalias*) ;

int
FUNC_1(struct libalias *VAR_0, struct in_addr *VAR_1,
    u_short * VAR_2, struct in_addr VAR_3,
    struct in_addr VAR_4, u_short VAR_5, u_char VAR_6)
{
 struct proxy_entry *VAR_7;

 FUNC_0(VAR_0);

 VAR_7 = VAR_0->proxyList;
 while (VAR_7 != ((void*)0)) {
  u_short VAR_8;

  VAR_8 = VAR_7->proxy_port;
  if ((VAR_5 == VAR_8 || VAR_8 == 0)
      && VAR_6 == VAR_7->proto
      && VAR_3.s_addr != VAR_7->server_addr.s_addr) {
   struct in_addr VAR_9;
   struct in_addr VAR_10;

   VAR_9.s_addr = VAR_3.s_addr & VAR_7->src_mask.s_addr;
   VAR_10.s_addr = VAR_4.s_addr & VAR_7->dst_mask.s_addr;

   if ((VAR_9.s_addr == VAR_7->src_addr.s_addr)
       && (VAR_10.s_addr == VAR_7->dst_addr.s_addr)) {
    if ((*VAR_2 = VAR_7->server_port) == 0)
     *VAR_2 = VAR_5;
    *VAR_1 = VAR_7->server_addr;
    return (VAR_7->proxy_type);
   }
  }
  VAR_7 = VAR_7->next;
 }

 return (0);
}
