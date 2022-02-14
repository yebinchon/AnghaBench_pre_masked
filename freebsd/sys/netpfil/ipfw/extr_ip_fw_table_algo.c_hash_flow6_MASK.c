
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int dport; int sport; } ;
struct TYPE_6__ {int* __u6_addr32; } ;
struct TYPE_7__ {TYPE_1__ __u6_addr; } ;
struct TYPE_9__ {int* __u6_addr32; } ;
struct TYPE_10__ {TYPE_4__ __u6_addr; } ;
struct fhashentry6 {TYPE_3__ e; TYPE_2__ sip6; TYPE_5__ dip6; } ;



__attribute__((used)) static __inline uint32_t
FUNC_0(struct fhashentry6 *VAR_0, int VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = (VAR_0->dip6.__u6_addr.__u6_addr32[2]) ^
     (VAR_0->dip6.__u6_addr.__u6_addr32[3]) ^
     (VAR_0->sip6.__u6_addr.__u6_addr32[2]) ^
     (VAR_0->sip6.__u6_addr.__u6_addr32[3]) ^
     (VAR_0->e.dport) ^ (VAR_0->e.sport);

 return (VAR_2 % (VAR_1 - 1));
}
