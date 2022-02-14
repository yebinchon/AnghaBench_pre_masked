
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_fq {int dummy; } ;
struct qm_mcr_queryfq_np {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qm_mcr_queryfq_np*,int ) ;
 int FUNC_2 (struct qman_fq*,struct qm_mcr_queryfq_np*) ;

__attribute__((used)) static int FUNC_3(struct qman_fq *VAR_1)
{
 int VAR_2;
 struct qm_mcr_queryfq_np VAR_3;


 do {
  VAR_2 = FUNC_2(VAR_1, &VAR_3);
  if (VAR_2)
   return VAR_2;

  if (!FUNC_1(&VAR_3, VAR_0))
   break;

  FUNC_0(20);
 } while (1);





 FUNC_0(20);
 return 0;
}
