
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_sec_meta {int lba; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int nr_ppas; void* meta_list; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ppa_addr* FUNC_2 (struct nvm_rq*) ;
 int FUNC_3 (struct pblk*,char*,scalar_t__,scalar_t__) ;
 struct pblk_sec_meta* FUNC_4 (struct pblk*,void*,int) ;
 int FUNC_5 (struct pblk*) ;
 int FUNC_6 (struct pblk*,struct ppa_addr*,char*,int) ;

__attribute__((used)) static void FUNC_7(struct pblk *VAR_1, struct nvm_rq *VAR_2,
    sector_t VAR_3)
{
 void *VAR_4 = VAR_2->meta_list;
 int VAR_5 = VAR_2->nr_ppas;
 int VAR_6;

 if (!FUNC_5(VAR_1))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct pblk_sec_meta *VAR_7 = FUNC_4(VAR_1, VAR_4, VAR_6);
  u64 VAR_8 = FUNC_1(VAR_7->lba);

  if (VAR_8 == VAR_0)
   continue;

  if (VAR_8 != VAR_3 + VAR_6) {





   FUNC_3(VAR_1, "corrupted read LBA (%llu/%llu)\n",
       VAR_8, (u64)VAR_3 + VAR_6);
   FUNC_0(1);
  }
 }
}
