
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_sec_meta {void* lba; } ;
struct pblk {int inflight_reads; int cache_reads; } ;
struct nvm_rq {int is_seq; int * ppa_list; int nr_ppas; void* meta_list; } ;
struct bio {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef void* __le64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,int ) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 struct pblk_sec_meta* FUNC_5 (struct pblk*,void*,int) ;
 scalar_t__ FUNC_6 (struct pblk*,int) ;
 int FUNC_7 (struct pblk*,int *,scalar_t__,int ,int*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct pblk*,struct bio*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_10(struct pblk *VAR_2, struct nvm_rq *VAR_3,
     struct bio *VAR_4, sector_t VAR_5,
     bool *VAR_6)
{
 void *VAR_7 = VAR_3->meta_list;
 int VAR_8, VAR_9;

retry:
 VAR_8 = FUNC_7(VAR_2, VAR_3->ppa_list, VAR_5, VAR_3->nr_ppas,
     VAR_6);

 if (!*VAR_6)
  goto end;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  struct pblk_sec_meta *VAR_10 = FUNC_5(VAR_2, VAR_7, VAR_9);
  sector_t VAR_11 = VAR_5 + VAR_9;

  if (FUNC_8(VAR_3->ppa_list[VAR_9])) {
   __le64 VAR_12 = FUNC_3(VAR_0);

   VAR_10->lba = VAR_12;
  } else if (FUNC_4(VAR_3->ppa_list[VAR_9])) {





   if (!FUNC_9(VAR_2, VAR_4, VAR_11,
       VAR_3->ppa_list[VAR_9])) {
    if (VAR_9 == 0) {




     goto retry;
    } else {
     VAR_8 = VAR_9;
     goto end;
    }
   }
   VAR_10->lba = FUNC_3(VAR_11);



  }
  FUNC_2(VAR_4, VAR_1);
 }

end:
 if (FUNC_6(VAR_2, VAR_8))
  VAR_3->is_seq = 1;





 return VAR_8;
}
