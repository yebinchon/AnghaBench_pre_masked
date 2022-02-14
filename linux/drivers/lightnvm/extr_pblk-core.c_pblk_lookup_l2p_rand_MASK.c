
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk {scalar_t__ capacity; int trans_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct ppa_addr FUNC_1 (struct pblk*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pblk *VAR_1, struct ppa_addr *VAR_2,
     u64 *VAR_3, int VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1->trans_lock);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = VAR_3[VAR_6];
  if (VAR_5 != VAR_0) {

   if (!(VAR_5 < VAR_1->capacity)) {
    FUNC_0(1, "pblk: corrupted L2P map request\n");
    continue;
   }
   VAR_2[VAR_6] = FUNC_1(VAR_1, VAR_5);
  }
 }
 FUNC_3(&VAR_1->trans_lock);
}
