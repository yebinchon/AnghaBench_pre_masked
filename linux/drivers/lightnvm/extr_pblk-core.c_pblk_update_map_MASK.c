
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {scalar_t__ capacity; int trans_lock; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ppa_addr) ;
 int FUNC_2 (struct pblk*,struct ppa_addr) ;
 int FUNC_3 (struct ppa_addr) ;
 struct ppa_addr FUNC_4 (struct pblk*,scalar_t__) ;
 int FUNC_5 (struct pblk*,scalar_t__,struct ppa_addr) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct pblk *VAR_0, sector_t VAR_1, struct ppa_addr VAR_2)
{
 struct ppa_addr VAR_3;


 if (!(VAR_1 < VAR_0->capacity)) {
  FUNC_0(1, "pblk: corrupted L2P map request\n");
  return;
 }

 FUNC_6(&VAR_0->trans_lock);
 VAR_3 = FUNC_4(VAR_0, VAR_1);

 if (!FUNC_1(VAR_3) && !FUNC_3(VAR_3))
  FUNC_2(VAR_0, VAR_3);

 FUNC_5(VAR_0, VAR_1, VAR_2);
 FUNC_7(&VAR_0->trans_lock);
}
