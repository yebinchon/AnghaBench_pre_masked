
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ip6; int ip; } ;
typedef TYPE_1__ sfe_ip_addr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int FUNC_2(sfe_ip_addr_t *VAR_0,
     sfe_ip_addr_t *VAR_1, int VAR_2)
{
 return VAR_2 ? FUNC_0(VAR_0->ip, VAR_1->ip) : FUNC_1(VAR_0->ip6, VAR_1->ip6);
}
