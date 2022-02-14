
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * fqs; int ern; } ;
struct qman_fq {int fqid; TYPE_1__ cb; } ;
struct TYPE_8__ {int cgid; int context_b; void* fq_ctrl; } ;
struct qm_mcc_initfq {TYPE_3__ fqd; void* we_mask; } ;
struct device {int dummy; } ;
typedef int opts ;
typedef int dma_addr_t ;
struct TYPE_7__ {int cgrid; } ;
struct TYPE_9__ {TYPE_2__ cgr; } ;


 int VAR_0 ;
 struct qman_fq* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct qman_fq*) ;
 struct qman_fq* FUNC_6 (int,int ) ;
 int FUNC_7 (struct qm_mcc_initfq*,int ,int) ;
 TYPE_5__ VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int FUNC_10 (int ,int,struct qman_fq*) ;
 int FUNC_11 (struct qman_fq*) ;
 int FUNC_12 (struct qman_fq*) ;
 int FUNC_13 (struct qman_fq*,int,struct qm_mcc_initfq*) ;
 int FUNC_14 () ;

__attribute__((used)) static struct qman_fq *FUNC_15(struct device *VAR_14,
       struct qman_fq *VAR_15,
       dma_addr_t VAR_16,
       int VAR_17)
{
 int VAR_18;
 struct qman_fq *VAR_19;
 struct qm_mcc_initfq VAR_20;

 VAR_19 = FUNC_6(sizeof(*VAR_19), VAR_1);
 if (!VAR_19)
  return FUNC_0(-VAR_0);

 VAR_19->cb.ern = VAR_11;
 VAR_19->cb.fqs = ((void*)0);

 VAR_18 = FUNC_10(0, VAR_2 |
    VAR_3, VAR_19);
 if (VAR_18) {
  FUNC_4(VAR_14, "Failed to create session req FQ\n");
  goto create_req_fq_fail;
 }

 FUNC_7(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.we_mask = FUNC_1(VAR_10 | VAR_9 |
       VAR_8 |
       VAR_7 | VAR_6);
 VAR_20.fqd.fq_ctrl = FUNC_1(VAR_5 | VAR_4);
 FUNC_9(&VAR_20.fqd, VAR_13, 2);
 VAR_20.fqd.context_b = FUNC_2(FUNC_12(VAR_15));
 FUNC_8(&VAR_20.fqd, VAR_16);
 VAR_20.fqd.cgid = VAR_12.cgr.cgrid;

 VAR_18 = FUNC_13(VAR_19, VAR_17, &VAR_20);
 if (VAR_18) {
  FUNC_4(VAR_14, "Failed to init session req FQ\n");
  goto init_req_fq_fail;
 }

 FUNC_3(VAR_14, "Allocated request FQ %u for CPU %u\n", VAR_19->fqid,
  FUNC_14());
 return VAR_19;

init_req_fq_fail:
 FUNC_11(VAR_19);
create_req_fq_fail:
 FUNC_5(VAR_19);
 return FUNC_0(VAR_18);
}
