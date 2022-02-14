
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line {int lock; int invalid_bitmap; int id; } ;
struct pblk {scalar_t__ capacity; int trans_lock; int rwb; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 struct ppa_addr FUNC_2 (struct pblk*,int ,int ) ;
 int FUNC_3 (struct ppa_addr) ;
 int FUNC_4 (struct ppa_addr) ;
 int FUNC_5 (struct ppa_addr,struct ppa_addr) ;
 int FUNC_6 (int *,int ) ;
 struct ppa_addr FUNC_7 (struct pblk*,scalar_t__) ;
 int FUNC_8 (struct pblk*,scalar_t__,struct ppa_addr) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;

int FUNC_12(struct pblk *VAR_0, sector_t VAR_1, struct ppa_addr VAR_2,
         struct pblk_line *VAR_3, u64 VAR_4)
{
 struct ppa_addr VAR_5, VAR_6;
 int VAR_7 = 1;
 if (!(VAR_1 < VAR_0->capacity)) {
  FUNC_1(1, "pblk: corrupted L2P map request\n");
  return 0;
 }

 FUNC_9(&VAR_0->trans_lock);
 VAR_5 = FUNC_7(VAR_0, VAR_1);
 VAR_6 = FUNC_2(VAR_0, VAR_4, VAR_3->id);

 if (!FUNC_5(VAR_5, VAR_6)) {
  FUNC_9(&VAR_3->lock);
  FUNC_1(!FUNC_11(VAR_4, VAR_3->invalid_bitmap),
      "pblk: corrupted GC update");
  FUNC_10(&VAR_3->lock);

  VAR_7 = 0;
  goto out;
 }

 FUNC_8(VAR_0, VAR_1, VAR_2);
out:
 FUNC_10(&VAR_0->trans_lock);
 return VAR_7;
}
