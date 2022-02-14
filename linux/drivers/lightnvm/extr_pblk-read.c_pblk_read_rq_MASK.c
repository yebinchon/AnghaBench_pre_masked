
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_sec_meta {void* lba; } ;
struct pblk {int cache_reads; int inflight_reads; } ;
struct nvm_rq {struct ppa_addr ppa_addr; int meta_list; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef void* __le64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ppa_addr) ;
 struct pblk_sec_meta* FUNC_3 (struct pblk*,int ,int ) ;
 int FUNC_4 (struct pblk*,struct ppa_addr*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct ppa_addr) ;
 int FUNC_6 (struct pblk*,struct bio*,int ,struct ppa_addr) ;

__attribute__((used)) static void FUNC_7(struct pblk *VAR_1, struct nvm_rq *VAR_2, struct bio *VAR_3,
    sector_t VAR_4, bool *VAR_5)
{
 struct pblk_sec_meta *VAR_6 = FUNC_3(VAR_1, VAR_2->meta_list, 0);
 struct ppa_addr VAR_7;

 FUNC_4(VAR_1, &VAR_7, VAR_4, 1, VAR_5);





retry:
 if (FUNC_5(VAR_7)) {
  __le64 VAR_8 = FUNC_1(VAR_0);

  VAR_6->lba = VAR_8;
  return;
 }




 if (FUNC_2(VAR_7)) {
  if (!FUNC_6(VAR_1, VAR_3, VAR_4, VAR_7)) {
   FUNC_4(VAR_1, &VAR_7, VAR_4, 1, VAR_5);
   goto retry;
  }

  VAR_6->lba = FUNC_1(VAR_4);




 } else {
  VAR_2->ppa_addr = VAR_7;
 }
}
