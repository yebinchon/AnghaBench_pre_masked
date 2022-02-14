
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_fq {int dummy; } ;
struct device {int dummy; } ;
struct caam_drv_ctx {struct qman_fq* req_fq; int context_a; int sh_desc; void** prehdr; int rsp_fq; struct device* qidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qman_fq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qman_fq*) ;
 void* FUNC_2 (int) ;
 struct qman_fq* FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int ,int,int ) ;
 int FUNC_9 (struct qman_fq*) ;
 scalar_t__ FUNC_10 (struct device*,struct qman_fq*) ;
 int FUNC_11 (int ,int*,int ) ;
 int FUNC_12 (struct qman_fq*) ;

int FUNC_13(struct caam_drv_ctx *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 struct qman_fq *VAR_9, *VAR_10;
 struct device *VAR_11 = VAR_5->qidev;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 > VAR_2) {
  FUNC_6(VAR_11, "Invalid descriptor len: %d words\n", VAR_8);
  return -VAR_1;
 }


 VAR_10 = VAR_5->req_fq;


 VAR_9 = FUNC_3(VAR_5->qidev, VAR_5->rsp_fq,
        VAR_5->context_a, 0);
 if (FUNC_0(VAR_9)) {
  FUNC_6(VAR_11, "FQ allocation for shdesc update failed\n");
  return FUNC_1(VAR_9);
 }


 VAR_5->req_fq = VAR_9;


 VAR_7 = FUNC_9(VAR_10);
 if (VAR_7) {
  FUNC_6(VAR_11, "Old CAAM FQ empty failed: %d\n", VAR_7);


  VAR_5->req_fq = VAR_10;

  if (FUNC_10(VAR_11, VAR_9))
   FUNC_7(VAR_11, "New CAAM FQ kill failed\n");

  return VAR_7;
 }





 VAR_5->prehdr[0] = FUNC_2((1 << VAR_4) |
        VAR_8);
 VAR_5->prehdr[1] = FUNC_2(VAR_3);
 FUNC_11(VAR_5->sh_desc, VAR_6, FUNC_4(VAR_6));
 FUNC_8(VAR_11, VAR_5->context_a,
       sizeof(VAR_5->sh_desc) +
       sizeof(VAR_5->prehdr),
       VAR_0);


 VAR_7 = FUNC_12(VAR_9);
 if (VAR_7) {
  FUNC_6(VAR_11, "Fail to sched new CAAM FQ, ecode = %d\n", VAR_7);






  VAR_5->req_fq = VAR_10;

  if (FUNC_10(VAR_11, VAR_9))
   FUNC_7(VAR_11, "New CAAM FQ kill failed\n");
 } else if (FUNC_10(VAR_11, VAR_10)) {
  FUNC_7(VAR_11, "Old CAAM FQ kill failed\n");
 }

 return 0;
}
