
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rtable {int dummy; } ;
struct rt6_info {int dummy; } ;
struct net_device {scalar_t__ addr_len; } ;
struct neighbour {int nud_state; int ha; struct net_device* dev; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_5__ {scalar_t__ ip6; int ip; } ;
typedef TYPE_1__ sfe_ip_addr_t ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (struct rtable*) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;
 struct neighbour* FUNC_3 (struct dst_entry*,TYPE_1__*) ;
 int FUNC_4 (struct dst_entry*) ;
 int VAR_1 ;
 struct rtable* FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (struct neighbour*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct rt6_info* FUNC_10 (int *,struct in6_addr*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static bool FUNC_12(sfe_ip_addr_t *VAR_2, struct net_device **VAR_3, u8 *VAR_4, bool VAR_5)
{
 struct neighbour *VAR_6;
 struct rtable *VAR_7;
 struct rt6_info *VAR_8;
 struct dst_entry *VAR_9;
 struct net_device *VAR_10;






 if (VAR_5) {
  VAR_7 = FUNC_5(&VAR_1, VAR_2->ip, 0, 0, 0);
  if (FUNC_11(FUNC_1(VAR_7))) {
   goto ret_fail;
  }

  VAR_9 = (struct dst_entry *)VAR_7;
 } else {
  VAR_8 = FUNC_10(&VAR_1, (struct in6_addr *)VAR_2->ip6, 0, 0, 0);
  if (!VAR_8) {
   goto ret_fail;
  }

  VAR_9 = (struct dst_entry *)VAR_8;
 }

 FUNC_8();
 VAR_6 = FUNC_3(VAR_9, VAR_2);
 if (FUNC_11(!VAR_6)) {
  FUNC_9();
  FUNC_4(VAR_9);
  goto ret_fail;
 }

 if (FUNC_11(!(VAR_6->nud_state & VAR_0))) {
  FUNC_9();
  FUNC_7(VAR_6);
  FUNC_4(VAR_9);
  goto ret_fail;
 }

 VAR_10 = VAR_6->dev;
 if (!VAR_10) {
  FUNC_9();
  FUNC_7(VAR_6);
  FUNC_4(VAR_9);
  goto ret_fail;
 }

 FUNC_6(VAR_4, VAR_6->ha, (size_t)VAR_10->addr_len);

 FUNC_2(VAR_10);
 *VAR_3 = VAR_10;
 FUNC_9();
 FUNC_7(VAR_6);
 FUNC_4(VAR_9);

 return 1;

ret_fail:
 FUNC_0("failed to find MAC address for IP: %pIS\n", VAR_2);

 return 0;
}
