
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union nat64lsn_pgidx {int chunk; scalar_t__ index; } ;
typedef int uintmax_t ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct sockopt_data {int dummy; } ;
struct nat64lsn_state {int flags; int timestamp; int proto; int aport; int sport; int dport; int ip_dst; TYPE_3__* host; } ;
struct nat64lsn_pg {int chunks_count; TYPE_2__** states_chunk; TYPE_1__* states; } ;
struct nat64lsn_cfg {int dummy; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {int idle; int proto; scalar_t__ flags; int aport; int sport; int dport; TYPE_4__ daddr; int host6; } ;
typedef TYPE_5__ ipfw_nat64lsn_state_v1 ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {struct nat64lsn_state* state; } ;
struct TYPE_6__ {struct nat64lsn_state* state; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nat64lsn_pg*,int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sockopt_data*,int) ;

__attribute__((used)) static int
FUNC_7(struct nat64lsn_cfg *VAR_3, union nat64lsn_pgidx *VAR_4,
    struct nat64lsn_pg *VAR_5, struct sockopt_data *VAR_6, uint32_t *VAR_7)
{
 ipfw_nat64lsn_state_v1 *VAR_8;
 struct nat64lsn_state *VAR_9;
 uint64_t VAR_10;
 uint32_t VAR_11, VAR_12;


 if (VAR_4->chunk > VAR_5->chunks_count - 1)
  return (VAR_1);

 FUNC_1(VAR_5, VAR_4->chunk, VAR_10);
 VAR_12 = 64 - FUNC_4(VAR_10);
 if (VAR_12 == 0)
  return (0);

 FUNC_0(VAR_0, "EXPORT PG 0x%16jx, count %d",
     (uintmax_t)VAR_4->index, VAR_12);

 VAR_8 = (ipfw_nat64lsn_state_v1 *)FUNC_6(VAR_6,
     VAR_12 * sizeof(ipfw_nat64lsn_state_v1));
 if (VAR_8 == ((void*)0))
  return (VAR_2);

 for (VAR_11 = 0; VAR_11 < 64; VAR_11++) {
  if (FUNC_3(VAR_10, VAR_11))
   continue;
  VAR_9 = VAR_5->chunks_count == 1 ? &VAR_5->states->state[VAR_11] :
      &VAR_5->states_chunk[VAR_4->chunk]->state[VAR_11];

  VAR_8->host6 = VAR_9->host->addr;
  VAR_8->daddr.s_addr = FUNC_5(VAR_9->ip_dst);
  VAR_8->dport = VAR_9->dport;
  VAR_8->sport = VAR_9->sport;
  VAR_8->aport = VAR_9->aport;
  VAR_8->flags = (uint8_t)(VAR_9->flags & 7);
  VAR_8->proto = VAR_9->proto;
  VAR_8->idle = FUNC_2(VAR_9->timestamp);
  VAR_8++;
 }
 *VAR_7 = VAR_12;
 return (0);
}
