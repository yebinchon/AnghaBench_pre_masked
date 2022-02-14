
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppa_addr {int dummy; } ;
struct pblk_line {TYPE_1__* w_err_gc; int id; struct pblk_emeta* emeta; } ;
struct pblk_g_ctx {struct pblk_line* private; } ;
struct pblk_emeta {int nr_entries; int sync; } ;
struct pblk {int inflight_io; int close_wq; } ;
struct nvm_rq {int nr_ppas; scalar_t__ error; struct pblk* private; } ;
struct TYPE_2__ {int has_write_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct pblk_g_ctx* FUNC_2 (struct nvm_rq*) ;
 struct ppa_addr* FUNC_3 (struct nvm_rq*) ;
 int FUNC_4 (struct pblk*,struct nvm_rq*) ;
 int FUNC_5 (struct pblk*,char*,int ) ;
 int FUNC_6 (struct pblk*,struct nvm_rq*,int ) ;
 int FUNC_7 (struct pblk*,struct pblk_line*,int *,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (struct pblk*,struct nvm_rq*) ;
 int FUNC_9 (struct pblk*,struct ppa_addr) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct nvm_rq *VAR_3)
{
 struct pblk *VAR_4 = VAR_3->private;
 struct pblk_g_ctx *VAR_5 = FUNC_2(VAR_3);
 struct pblk_line *VAR_6 = VAR_5->private;
 struct pblk_emeta *VAR_7 = VAR_6->emeta;
 struct ppa_addr *VAR_8 = FUNC_3(VAR_3);
 int VAR_9;

 FUNC_9(VAR_4, VAR_8[0]);

 if (VAR_3->error) {
  FUNC_8(VAR_4, VAR_3);
  FUNC_5(VAR_4, "metadata I/O failed. Line %d\n", VAR_6->id);
  VAR_6->w_err_gc->has_write_err = 1;
 } else {
  if (FUNC_10())
   FUNC_4(VAR_4, VAR_3);
 }

 VAR_9 = FUNC_0(VAR_3->nr_ppas, &VAR_7->sync);
 if (VAR_9 == VAR_7->nr_entries)
  FUNC_7(VAR_4, VAR_6, ((void*)0), VAR_2,
      VAR_0, VAR_4->close_wq);

 FUNC_6(VAR_4, VAR_3, VAR_1);

 FUNC_1(&VAR_4->inflight_io);
}
