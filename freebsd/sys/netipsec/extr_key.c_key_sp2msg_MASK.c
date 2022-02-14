
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dir; } ;
struct secpolicy {scalar_t__ policy; int state; int tcount; struct ipsecrequest** req; int priority; int id; TYPE_1__ spidx; } ;
struct sadb_x_policy {scalar_t__ sadb_x_policy_type; int sadb_x_policy_len; int sadb_x_policy_scope; int sadb_x_policy_priority; int sadb_x_policy_id; int sadb_x_policy_dir; int sadb_x_policy_exttype; } ;
struct sadb_x_ipsecrequest {size_t sadb_x_ipsecrequest_len; int sadb_x_ipsecrequest_reqid; int sadb_x_ipsecrequest_level; int sadb_x_ipsecrequest_mode; int sadb_x_ipsecrequest_proto; } ;
struct TYPE_6__ {scalar_t__ sa_len; } ;
struct TYPE_8__ {TYPE_2__ sa; } ;
struct TYPE_7__ {TYPE_4__ dst; TYPE_4__ src; int reqid; int mode; int proto; } ;
struct ipsecrequest {TYPE_3__ saidx; int level; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (size_t) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (void*,size_t) ;

int
FUNC_5(struct secpolicy *VAR_7, void *VAR_8, size_t *VAR_9)
{
 struct sadb_x_ipsecrequest *VAR_10;
 struct sadb_x_policy *VAR_11;
 struct ipsecrequest *VAR_12;
 size_t VAR_13, VAR_14;
 caddr_t VAR_15;
 int VAR_16, VAR_17;

 FUNC_0(VAR_7 != ((void*)0), ("null policy"));

 VAR_13 = sizeof(*VAR_11);
 if (*VAR_9 < VAR_13)
  return (VAR_0);

 VAR_16 = 0;
 FUNC_4(VAR_8, *VAR_9);
 VAR_11 = (struct sadb_x_policy *)VAR_8;
 VAR_11->sadb_x_policy_exttype = VAR_6;
 VAR_11->sadb_x_policy_type = VAR_7->policy;
 VAR_11->sadb_x_policy_dir = VAR_7->spidx.dir;
 VAR_11->sadb_x_policy_id = VAR_7->id;
 VAR_11->sadb_x_policy_priority = VAR_7->priority;
 switch (VAR_7->state) {
 case 129:
  VAR_11->sadb_x_policy_scope = VAR_3;
  break;
 case 128:
  VAR_11->sadb_x_policy_scope = VAR_4;
  break;
 default:
  VAR_11->sadb_x_policy_scope = VAR_2;
 }


 if (VAR_7->policy == VAR_5) {
  VAR_15 = (caddr_t)VAR_11 + sizeof(*VAR_11);
  for (VAR_17 = 0; VAR_17 < VAR_7->tcount; VAR_17++) {
   VAR_12 = VAR_7->req[VAR_17];
   VAR_14 = FUNC_1(sizeof(*VAR_10) +
       VAR_12->saidx.src.sa.sa_len +
       VAR_12->saidx.dst.sa.sa_len);
   VAR_13 += VAR_14;
   if (VAR_13 > *VAR_9) {
    VAR_16 = VAR_1;

    continue;
   }
   VAR_10 = (struct sadb_x_ipsecrequest *)VAR_15;
   VAR_10->sadb_x_ipsecrequest_len = VAR_14;
   VAR_10->sadb_x_ipsecrequest_proto = VAR_12->saidx.proto;
   VAR_10->sadb_x_ipsecrequest_mode = VAR_12->saidx.mode;
   VAR_10->sadb_x_ipsecrequest_level = VAR_12->level;
   VAR_10->sadb_x_ipsecrequest_reqid = VAR_12->saidx.reqid;

   VAR_15 += sizeof(*VAR_10);
   FUNC_3(&VAR_12->saidx.src, VAR_15, VAR_12->saidx.src.sa.sa_len);
   VAR_15 += VAR_12->saidx.src.sa.sa_len;
   FUNC_3(&VAR_12->saidx.dst, VAR_15, VAR_12->saidx.dst.sa.sa_len);
   VAR_15 += VAR_12->saidx.dst.sa.sa_len;
  }
 }
 VAR_11->sadb_x_policy_len = FUNC_2(VAR_13);
 if (VAR_16 == 0)
  *VAR_9 = VAR_13;
 else
  *VAR_9 = sizeof(*VAR_11);
 return (VAR_16);
}
