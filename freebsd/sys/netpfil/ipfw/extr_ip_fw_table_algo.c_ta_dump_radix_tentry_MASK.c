
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct TYPE_13__ {int sin6_addr; } ;
struct radix_addr_xentry {int value; int masklen; TYPE_5__ addr6; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {scalar_t__ sin_family; TYPE_2__ sin_addr; } ;
struct radix_addr_entry {int value; int masklen; TYPE_3__ addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_14__ {int kidx; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_12__ {int addr6; TYPE_1__ addr; } ;
struct TYPE_15__ {TYPE_6__ v; scalar_t__ subtype; int masklen; TYPE_4__ k; } ;
typedef TYPE_7__ ipfw_obj_tentry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, struct table_info *VAR_3, void *VAR_4,
    ipfw_obj_tentry *VAR_5)
{
 struct radix_addr_entry *VAR_6;




 VAR_6 = (struct radix_addr_entry *)VAR_4;


 if (VAR_6->addr.sin_family == VAR_0) {
  VAR_5->k.addr.s_addr = VAR_6->addr.sin_addr.s_addr;
  VAR_5->masklen = VAR_6->masklen;
  VAR_5->subtype = VAR_0;
  VAR_5->v.kidx = VAR_6->value;
 }

 return (0);
}
