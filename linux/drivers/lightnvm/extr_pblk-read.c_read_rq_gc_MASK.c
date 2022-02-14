
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line {int id; } ;
struct pblk {scalar_t__ capacity; int inflight_reads; int trans_lock; } ;
struct nvm_rq {struct ppa_addr ppa_addr; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct ppa_addr FUNC_1 (struct pblk*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ppa_addr,struct ppa_addr) ;
 struct ppa_addr FUNC_4 (struct pblk*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct pblk *VAR_1, struct nvm_rq *VAR_2,
        struct pblk_line *VAR_3, sector_t VAR_4,
        u64 VAR_5)
{
 struct ppa_addr VAR_6, VAR_7;
 int VAR_8 = 0;

 if (VAR_4 == VAR_0)
  goto out;


 if (VAR_4 >= VAR_1->capacity) {
  FUNC_0(1, "pblk: read lba out of bounds\n");
  goto out;
 }

 FUNC_5(&VAR_1->trans_lock);
 VAR_6 = FUNC_4(VAR_1, VAR_4);
 FUNC_6(&VAR_1->trans_lock);

 VAR_7 = FUNC_1(VAR_1, VAR_5, VAR_3->id);
 if (!FUNC_3(VAR_6, VAR_7))
  goto out;

 VAR_2->ppa_addr = VAR_6;
 VAR_8 = 1;





out:
 return VAR_8;
}
