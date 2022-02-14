
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int dip6; int sip6; } ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_12__ {TYPE_4__ dip; TYPE_2__ sip; } ;
struct TYPE_14__ {TYPE_6__ a6; TYPE_5__ a4; } ;
struct tflow_entry {TYPE_7__ a; int sport; int dport; int proto; } ;
struct tentry_info {scalar_t__ subtype; scalar_t__ paddr; } ;
struct fhashentry6 {int dip6; int sip6; } ;
struct TYPE_10__ {void* s_addr; } ;
struct TYPE_8__ {void* s_addr; } ;
struct fhashentry4 {TYPE_3__ dip; TYPE_1__ sip; } ;
struct fhashentry {scalar_t__ af; void* sport; void* dport; int proto; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct tentry_info *VAR_3, struct fhashentry *VAR_4)
{






 struct tflow_entry *VAR_5;

 VAR_5 = (struct tflow_entry *)VAR_3->paddr;

 VAR_4->af = VAR_3->subtype;
 VAR_4->proto = VAR_5->proto;
 VAR_4->dport = FUNC_1(VAR_5->dport);
 VAR_4->sport = FUNC_1(VAR_5->sport);

 if (VAR_3->subtype == VAR_0) {
 } else {

  return (VAR_2);
 }

 return (0);
}
