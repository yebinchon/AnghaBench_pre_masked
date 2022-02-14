
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct secpolicy {scalar_t__ policy; int tcount; TYPE_6__** req; } ;
struct sadb_x_policy {int dummy; } ;
struct sadb_x_ipsecrequest {int dummy; } ;
struct TYPE_9__ {int sa_len; } ;
struct TYPE_10__ {TYPE_3__ sa; } ;
struct TYPE_7__ {int sa_len; } ;
struct TYPE_8__ {TYPE_1__ sa; } ;
struct TYPE_11__ {TYPE_4__ dst; TYPE_2__ src; } ;
struct TYPE_12__ {TYPE_5__ saidx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;

__attribute__((used)) static size_t
FUNC_1(struct secpolicy *VAR_1)
{
 size_t VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = sizeof(struct sadb_x_policy);

 if (VAR_1->policy != VAR_0)
  return (VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_1->tcount; VAR_4++) {
  VAR_3 = sizeof(struct sadb_x_ipsecrequest)
   + VAR_1->req[VAR_4]->saidx.src.sa.sa_len
   + VAR_1->req[VAR_4]->saidx.dst.sa.sa_len;

  VAR_2 += FUNC_0(VAR_3);
 }
 return (VAR_2);
}
