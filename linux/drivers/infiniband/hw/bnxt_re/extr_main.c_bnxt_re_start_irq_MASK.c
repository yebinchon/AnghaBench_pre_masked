
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_rcfw {int dummy; } ;
struct bnxt_re_dev {int num_msix; struct bnxt_qplib_nq* nq; struct bnxt_msix_entry* msix_entries; struct bnxt_qplib_rcfw rcfw; } ;
struct bnxt_qplib_nq {int dummy; } ;
struct bnxt_msix_entry {int vector; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt_qplib_nq*,int,int ,int) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct bnxt_re_dev*) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, struct bnxt_msix_entry *VAR_3)
{
 struct bnxt_re_dev *VAR_4 = (struct bnxt_re_dev *)VAR_2;
 struct bnxt_msix_entry *VAR_5 = VAR_4->msix_entries;
 struct bnxt_qplib_rcfw *VAR_6 = &VAR_4->rcfw;
 struct bnxt_qplib_nq *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_3) {





  FUNC_2(FUNC_4(VAR_4), "Failed to re-start IRQs\n");
  return;
 }




 for (VAR_8 = 0; VAR_8 < VAR_4->num_msix; VAR_8++)
  VAR_4->msix_entries[VAR_8].vector = VAR_3[VAR_8].vector;

 FUNC_1(VAR_6, VAR_5[VAR_0].vector,
      0);
 for (VAR_8 = VAR_1 ; VAR_8 < VAR_4->num_msix; VAR_8++) {
  VAR_7 = &VAR_4->nq[VAR_8 - 1];
  VAR_9 = FUNC_0(VAR_7, VAR_8 - 1,
          VAR_5[VAR_8].vector, 0);
  if (VAR_9)
   FUNC_3(FUNC_4(VAR_4),
     "Failed to reinit NQ index %d\n", VAR_8 - 1);
 }
}
