
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_9__ {int a4; int a6; } ;
struct chashentry {scalar_t__ type; int value; TYPE_3__ a; } ;
struct chash_cfg {int mask4; int mask6; } ;
struct TYPE_10__ {int kidx; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {int addr6; TYPE_1__ addr; } ;
struct TYPE_11__ {int masklen; TYPE_4__ v; scalar_t__ subtype; TYPE_2__ k; } ;
typedef TYPE_5__ ipfw_obj_tentry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, struct table_info *VAR_3, void *VAR_4,
    ipfw_obj_tentry *VAR_5)
{
 struct chash_cfg *VAR_6;
 struct chashentry *VAR_7;

 VAR_6 = (struct chash_cfg *)VAR_2;
 VAR_7 = (struct chashentry *)VAR_4;

 if (VAR_7->type == VAR_0) {
  VAR_5->k.addr.s_addr = FUNC_0(VAR_7->a.a4 << (32 - VAR_6->mask4));
  VAR_5->masklen = VAR_6->mask4;
  VAR_5->subtype = VAR_0;
  VAR_5->v.kidx = VAR_7->value;







 }

 return (0);
}
