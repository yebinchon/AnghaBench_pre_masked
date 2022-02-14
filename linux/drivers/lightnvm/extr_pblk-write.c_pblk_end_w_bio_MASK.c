
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_w_ctx {int bios; int flags; } ;
struct pblk_rb {int inflight_flush_point; } ;
struct pblk_c_ctx {int nr_valid; int sentry; scalar_t__ nr_padded; } ;
struct pblk {struct pblk_rb rwb; int sync_writes; } ;
struct nvm_rq {int bio; int nr_ppas; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct bio*) ;
 struct bio* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pblk*,int ,int,scalar_t__) ;
 int FUNC_7 (struct pblk*,struct nvm_rq*,int ) ;
 unsigned long FUNC_8 (struct pblk_rb*,int) ;
 struct pblk_w_ctx* FUNC_9 (struct pblk_rb*,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static unsigned long FUNC_11(struct pblk *VAR_2, struct nvm_rq *VAR_3,
        struct pblk_c_ctx *VAR_4)
{
 struct bio *VAR_5;
 struct pblk_rb *VAR_6 = &VAR_2->rwb;
 unsigned long VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->nr_valid; VAR_8++) {
  struct pblk_w_ctx *VAR_9;
  int VAR_10 = VAR_4->sentry + VAR_8;
  int VAR_11;

  VAR_9 = FUNC_9(VAR_6, VAR_10);
  VAR_11 = FUNC_0(VAR_9->flags);

  if (VAR_11 & VAR_0) {
   VAR_11 &= ~VAR_0;

   FUNC_10(&VAR_9->flags, VAR_11);




  }

  while ((VAR_5 = FUNC_4(&VAR_9->bios)))
   FUNC_3(VAR_5);
 }

 if (VAR_4->nr_padded)
  FUNC_6(VAR_2, VAR_3->bio, VAR_4->nr_valid,
       VAR_4->nr_padded);





 VAR_7 = FUNC_8(&VAR_2->rwb, VAR_4->nr_valid);

 FUNC_5(VAR_3->bio);
 FUNC_7(VAR_2, VAR_3, VAR_1);

 return VAR_7;
}
