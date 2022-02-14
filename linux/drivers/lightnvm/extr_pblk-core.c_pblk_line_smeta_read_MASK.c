
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line_meta {int smeta_sec; } ;
struct pblk_line {int smeta; int id; } ;
struct pblk {int inflight_io; struct pblk_line_meta lm; } ;
struct nvm_rq {int nr_ppas; int is_seq; scalar_t__ error; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ppa_addr FUNC_0 (struct pblk*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvm_rq*,int ,int) ;
 struct ppa_addr* FUNC_3 (struct nvm_rq*) ;
 int FUNC_4 (struct pblk*,struct nvm_rq*) ;
 int FUNC_5 (struct pblk*,char*,int) ;
 int FUNC_6 (struct pblk*,struct nvm_rq*) ;
 int FUNC_7 (struct pblk*,struct pblk_line*) ;
 int FUNC_8 (struct pblk*,struct nvm_rq*) ;
 int FUNC_9 (struct pblk*,struct nvm_rq*,int ) ;

int FUNC_10(struct pblk *VAR_3, struct pblk_line *VAR_4)
{
 struct pblk_line_meta *VAR_5 = &VAR_3->lm;
 struct ppa_addr *VAR_6;
 struct nvm_rq VAR_7;
 u64 VAR_8 = FUNC_7(VAR_3, VAR_4);
 int VAR_9, VAR_10;

 FUNC_2(&VAR_7, 0, sizeof(struct nvm_rq));

 VAR_10 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_7.opcode = VAR_1;
 VAR_7.nr_ppas = VAR_5->smeta_sec;
 VAR_7.is_seq = 1;
 VAR_6 = FUNC_3(&VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_5->smeta_sec; VAR_9++, VAR_8++)
  VAR_6[VAR_9] = FUNC_0(VAR_3, VAR_8, VAR_4->id);

 VAR_10 = FUNC_9(VAR_3, &VAR_7, VAR_4->smeta);
 if (VAR_10) {
  FUNC_5(VAR_3, "smeta I/O submission failed: %d\n", VAR_10);
  goto clear_rqd;
 }

 FUNC_1(&VAR_3->inflight_io);

 if (VAR_7.error && VAR_7.error != VAR_2) {
  FUNC_8(VAR_3, &VAR_7);
  VAR_10 = -VAR_0;
 }

clear_rqd:
 FUNC_6(VAR_3, &VAR_7);
 return VAR_10;
}
