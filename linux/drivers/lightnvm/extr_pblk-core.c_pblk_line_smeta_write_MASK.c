
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_sec_meta {int lba; } ;
struct pblk_line_meta {int smeta_sec; } ;
struct pblk_line {int smeta; int id; TYPE_1__* emeta; } ;
struct pblk {int inflight_io; struct pblk_line_meta lm; } ;
struct nvm_rq {int nr_ppas; int is_seq; scalar_t__ error; int meta_list; int opcode; } ;
typedef int __le64 ;
struct TYPE_2__ {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ppa_addr FUNC_0 (struct pblk*,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct pblk*,int ) ;
 int FUNC_4 (struct nvm_rq*,int ,int) ;
 struct ppa_addr* FUNC_5 (struct nvm_rq*) ;
 int FUNC_6 (struct pblk*,struct nvm_rq*) ;
 int FUNC_7 (struct pblk*,char*,int) ;
 int FUNC_8 (struct pblk*,struct nvm_rq*) ;
 struct pblk_sec_meta* FUNC_9 (struct pblk*,int ,int) ;
 int FUNC_10 (struct pblk*,struct nvm_rq*) ;
 int FUNC_11 (struct pblk*,struct nvm_rq*,int ) ;

__attribute__((used)) static int FUNC_12(struct pblk *VAR_3, struct pblk_line *VAR_4,
     u64 VAR_5)
{
 struct pblk_line_meta *VAR_6 = &VAR_3->lm;
 struct ppa_addr *VAR_7;
 struct nvm_rq VAR_8;
 __le64 *VAR_9 = FUNC_3(VAR_3, VAR_4->emeta->buf);
 __le64 VAR_10 = FUNC_2(VAR_0);
 int VAR_11, VAR_12;

 FUNC_4(&VAR_8, 0, sizeof(struct nvm_rq));

 VAR_12 = FUNC_6(VAR_3, &VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_8.opcode = VAR_2;
 VAR_8.nr_ppas = VAR_6->smeta_sec;
 VAR_8.is_seq = 1;
 VAR_7 = FUNC_5(&VAR_8);

 for (VAR_11 = 0; VAR_11 < VAR_6->smeta_sec; VAR_11++, VAR_5++) {
  struct pblk_sec_meta *VAR_13 = FUNC_9(VAR_3,
          VAR_8.meta_list, VAR_11);

  VAR_7[VAR_11] = FUNC_0(VAR_3, VAR_5, VAR_4->id);
  VAR_13->lba = VAR_9[VAR_5] = VAR_10;
 }

 VAR_12 = FUNC_11(VAR_3, &VAR_8, VAR_4->smeta);
 if (VAR_12) {
  FUNC_7(VAR_3, "smeta I/O submission failed: %d\n", VAR_12);
  goto clear_rqd;
 }

 FUNC_1(&VAR_3->inflight_io);

 if (VAR_8.error) {
  FUNC_10(VAR_3, &VAR_8);
  VAR_12 = -VAR_1;
 }

clear_rqd:
 FUNC_8(VAR_3, &VAR_8);
 return VAR_12;
}
