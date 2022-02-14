
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_line_meta {int lun_bitmap_len; } ;
struct pblk_line {int left_eblks; } ;
struct pblk_c_ctx {unsigned int nr_valid; unsigned int nr_padded; unsigned long* lun_bitmap; int sentry; } ;
struct pblk {struct pblk_line_meta lm; } ;
struct nvm_rq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long*) ;
 unsigned long* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct pblk_c_ctx* FUNC_4 (struct nvm_rq*) ;
 int FUNC_5 (struct pblk*,struct nvm_rq*,unsigned int,int ) ;
 int VAR_2 ;
 struct pblk_line* FUNC_6 (struct pblk*) ;
 int FUNC_7 (struct pblk*,struct nvm_rq*,int ,unsigned long*,unsigned int,struct ppa_addr*) ;
 int FUNC_8 (struct pblk*,struct nvm_rq*,int ,unsigned long*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_9(struct pblk *VAR_3, struct nvm_rq *VAR_4,
      struct ppa_addr *VAR_5)
{
 struct pblk_line_meta *VAR_6 = &VAR_3->lm;
 struct pblk_line *VAR_7 = FUNC_6(VAR_3);
 struct pblk_c_ctx *VAR_8 = FUNC_4(VAR_4);
 unsigned int VAR_9 = VAR_8->nr_valid;
 unsigned int VAR_10 = VAR_8->nr_padded;
 unsigned int VAR_11 = VAR_9 + VAR_10;
 unsigned long *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_6->lun_bitmap_len, VAR_1);
 if (!VAR_12)
  return -VAR_0;
 VAR_8->lun_bitmap = VAR_12;

 VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_11, VAR_2);
 if (VAR_13) {
  FUNC_1(VAR_12);
  return VAR_13;
 }

 if (FUNC_3(!VAR_7 || !FUNC_0(&VAR_7->left_eblks)))
  VAR_13 = FUNC_8(VAR_3, VAR_4, VAR_8->sentry, VAR_12,
       VAR_9, 0);
 else
  VAR_13 = FUNC_7(VAR_3, VAR_4, VAR_8->sentry, VAR_12,
       VAR_9, VAR_5);

 return VAR_13;
}
