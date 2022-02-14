
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {scalar_t__ capacity; int trans_lock; int padded_wb; int pad_wa; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ppa_addr) ;
 int FUNC_6 (struct pblk*,struct ppa_addr) ;
 int FUNC_7 (struct ppa_addr,struct ppa_addr) ;
 int FUNC_8 (struct ppa_addr) ;
 struct ppa_addr FUNC_9 (struct pblk*,scalar_t__) ;
 int FUNC_10 (struct pblk*,scalar_t__,struct ppa_addr) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct pblk *VAR_1, sector_t VAR_2,
    struct ppa_addr VAR_3, struct ppa_addr VAR_4)
{
 struct ppa_addr VAR_5;






 if (VAR_2 == VAR_0) {
  FUNC_3(&VAR_1->pad_wa);



  if (!FUNC_8(VAR_3))
   FUNC_6(VAR_1, VAR_3);
  return;
 }


 if (!(VAR_2 < VAR_1->capacity)) {
  FUNC_1(1, "pblk: corrupted L2P map request\n");
  return;
 }

 FUNC_11(&VAR_1->trans_lock);
 VAR_5 = FUNC_9(VAR_1, VAR_2);




 if (!FUNC_7(VAR_5, VAR_4)) {
  if (!FUNC_8(VAR_3))
   FUNC_6(VAR_1, VAR_3);
  goto out;
 }





 FUNC_10(VAR_1, VAR_2, VAR_3);
out:
 FUNC_12(&VAR_1->trans_lock);
}
