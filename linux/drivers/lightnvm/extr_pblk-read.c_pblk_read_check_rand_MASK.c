
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_sec_meta {int lba; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int nr_ppas; void* meta_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ppa_addr* FUNC_3 (struct nvm_rq*) ;
 int FUNC_4 (struct pblk*,char*,scalar_t__,scalar_t__) ;
 struct pblk_sec_meta* FUNC_5 (struct pblk*,void*,int) ;
 int FUNC_6 (struct pblk*) ;
 int FUNC_7 (struct pblk*,struct ppa_addr*,char*,int) ;

__attribute__((used)) static void FUNC_8(struct pblk *VAR_1, struct nvm_rq *VAR_2,
     u64 *VAR_3, int VAR_4)
{
 void *VAR_5 = VAR_2->meta_list;
 int VAR_6, VAR_7;

 if (!FUNC_6(VAR_1))
  return;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct pblk_sec_meta *VAR_8 = FUNC_5(VAR_1,
          VAR_5, VAR_7);
  u64 VAR_9 = VAR_3[VAR_6];
  u64 VAR_10;

  if (VAR_9 == VAR_0)
   continue;

  VAR_10 = FUNC_2(VAR_8->lba);

  if (VAR_9 != VAR_10) {





   FUNC_4(VAR_1, "corrupted read LBA (%llu/%llu)\n",
       VAR_10, VAR_9);
   FUNC_0(1);
  }

  VAR_7++;
 }

 FUNC_1(VAR_7 != VAR_2->nr_ppas, "pblk: corrupted random request\n");
}
