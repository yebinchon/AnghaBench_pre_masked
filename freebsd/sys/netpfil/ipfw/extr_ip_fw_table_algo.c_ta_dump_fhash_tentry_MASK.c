
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_20__ {int dip6; int sip6; } ;
struct TYPE_17__ {void* s_addr; } ;
struct TYPE_15__ {void* s_addr; } ;
struct TYPE_18__ {TYPE_5__ dip; TYPE_3__ sip; } ;
struct TYPE_21__ {TYPE_8__ a6; TYPE_6__ a4; } ;
struct tflow_entry {scalar_t__ af; TYPE_9__ a; void* sport; void* dport; int proto; } ;
struct table_info {int dummy; } ;
struct fhashentry6 {int dip6; int sip6; } ;
struct TYPE_19__ {int s_addr; } ;
struct TYPE_16__ {int s_addr; } ;
struct fhashentry4 {TYPE_7__ dip; TYPE_4__ sip; } ;
struct fhashentry {scalar_t__ af; int value; int sport; int dport; int proto; } ;
struct fhash_cfg {int dummy; } ;
struct TYPE_14__ {int kidx; } ;
struct TYPE_13__ {struct tflow_entry flow; } ;
struct TYPE_12__ {scalar_t__ subtype; int masklen; TYPE_2__ v; TYPE_1__ k; } ;
typedef TYPE_10__ ipfw_obj_tentry ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, struct table_info *VAR_2, void *VAR_3,
    ipfw_obj_tentry *VAR_4)
{
 struct fhash_cfg *VAR_5;
 struct fhashentry *VAR_6;
 struct fhashentry4 *VAR_7;



 struct tflow_entry *VAR_8;

 VAR_5 = (struct fhash_cfg *)VAR_1;
 VAR_6 = (struct fhashentry *)VAR_3;
 VAR_8 = &VAR_4->k.flow;

 VAR_8->af = VAR_6->af;
 VAR_8->proto = VAR_6->proto;
 VAR_8->dport = FUNC_1(VAR_6->dport);
 VAR_8->sport = FUNC_1(VAR_6->sport);
 VAR_4->v.kidx = VAR_6->value;
 VAR_4->subtype = VAR_6->af;

 if (VAR_6->af == VAR_0) {
  VAR_7 = (struct fhashentry4 *)VAR_6;
  VAR_8->a.a4.sip.s_addr = FUNC_0(VAR_7->sip.s_addr);
  VAR_8->a.a4.dip.s_addr = FUNC_0(VAR_7->dip.s_addr);
  VAR_4->masklen = 32;







 }

 return (0);
}
