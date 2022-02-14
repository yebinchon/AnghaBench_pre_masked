
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_w_ctx {scalar_t__ lba; int ppa; int flags; } ;
struct pblk_rb_entry {int cacheline; struct pblk_w_ctx w_ctx; } ;
struct pblk_rb {struct pblk_rb_entry* entries; } ;
struct pblk_line {int ref; int sec_to_update; } ;
struct pblk {int trans_lock; struct pblk_rb rwb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct ppa_addr,int ) ;
 struct pblk_line* FUNC_4 (struct pblk*,int ) ;
 size_t FUNC_5 (struct pblk_rb*,unsigned int,unsigned int) ;
 struct ppa_addr FUNC_6 (struct pblk*,scalar_t__) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct pblk *VAR_3, unsigned int VAR_4,
      unsigned int VAR_5)
{
 struct pblk_rb *VAR_6 = &VAR_3->rwb;
 struct pblk_rb_entry *VAR_7;
 struct pblk_line *VAR_8;
 struct pblk_w_ctx *VAR_9;
 struct ppa_addr VAR_10;
 int VAR_11;
 unsigned int VAR_12;

 FUNC_8(&VAR_3->trans_lock);
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_7 = &VAR_6->entries[FUNC_5(VAR_6, VAR_4, VAR_12)];
  VAR_9 = &VAR_7->w_ctx;


  if (VAR_9->lba != VAR_0) {
   VAR_10 = FUNC_6(VAR_3, VAR_9->lba);
   if (!FUNC_3(VAR_10, VAR_7->cacheline))
    VAR_9->lba = VAR_0;
  }


  VAR_11 = FUNC_0(VAR_9->flags);
  VAR_11 |= VAR_1;

  FUNC_7(&VAR_9->flags, VAR_11);




  VAR_8 = FUNC_4(VAR_3, VAR_9->ppa);
  FUNC_1(&VAR_8->sec_to_update);
  FUNC_2(&VAR_8->ref, VAR_2);
 }
 FUNC_9(&VAR_3->trans_lock);
}
