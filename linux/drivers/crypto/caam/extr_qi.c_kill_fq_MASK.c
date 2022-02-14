
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_fq {scalar_t__ state; int flags; int fqid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,struct qman_fq*) ;
 int FUNC_3 (struct qman_fq*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct qman_fq*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct qman_fq*) ;
 int FUNC_7 (struct qman_fq*,int *) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_4, struct qman_fq *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_5, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4, "qman_retire_fq failed: %d\n", VAR_7);
  return VAR_7;
 }

 if (!VAR_7)
  goto empty_fq;


 if (VAR_7 == 1) {

  do {
   FUNC_4(20);
  } while (VAR_5->state != VAR_3);

  FUNC_0(VAR_5->flags & VAR_0);
  FUNC_0(VAR_5->flags & VAR_2);
 }

empty_fq:
 if (VAR_5->flags & VAR_1) {
  VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (VAR_7) {
   FUNC_1(VAR_4, "empty_retired_fq fail for FQ: %u\n",
    VAR_5->fqid);
   return VAR_7;
  }
 }

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7)
  FUNC_1(VAR_4, "OOS of FQID: %u failed\n", VAR_5->fqid);

 FUNC_5(VAR_5);
 FUNC_3(VAR_5);

 return VAR_7;
}
