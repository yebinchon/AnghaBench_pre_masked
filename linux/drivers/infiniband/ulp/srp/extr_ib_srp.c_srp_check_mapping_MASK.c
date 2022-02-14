
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct srp_request {int scmnd; TYPE_4__* indirect_desc; struct srp_fr_desc** fr_list; } ;
struct srp_rdma_ch {TYPE_2__* target; } ;
struct srp_map_state {int ndesc; int nmdesc; } ;
struct srp_fr_desc {TYPE_3__* mr; } ;
struct srp_device {scalar_t__ use_fmr; scalar_t__ use_fast_reg; } ;
struct scatterlist {int dummy; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_6__ {TYPE_1__* srp_host; } ;
struct TYPE_5__ {struct srp_device* srp_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct srp_map_state *VAR_0,
         struct srp_rdma_ch *VAR_1, struct srp_request *VAR_2,
         struct scatterlist *VAR_3, int VAR_4)
{
 struct srp_device *VAR_5 = VAR_1->target->srp_host->srp_dev;
 struct srp_fr_desc **VAR_6;
 u64 VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0->ndesc; VAR_9++)
  VAR_7 += FUNC_0(VAR_2->indirect_desc[VAR_9].len);
 if (VAR_5->use_fast_reg)
  for (VAR_9 = 0, VAR_6 = VAR_2->fr_list; VAR_9 < VAR_0->nmdesc; VAR_9++, VAR_6++)
   VAR_8 += (*VAR_6)->mr->length;
 else if (VAR_5->use_fmr)
  for (VAR_9 = 0; VAR_9 < VAR_0->nmdesc; VAR_9++)
   VAR_8 += FUNC_0(VAR_2->indirect_desc[VAR_9].len);
 if (VAR_7 != FUNC_2(VAR_2->scmnd) ||
     VAR_8 > FUNC_2(VAR_2->scmnd))
  FUNC_1("Inconsistent: scsi len %d <> desc len %lld <> mr len %lld; ndesc %d; nmdesc = %d\n",
         FUNC_2(VAR_2->scmnd), VAR_7, VAR_8,
         VAR_0->ndesc, VAR_0->nmdesc);
}
