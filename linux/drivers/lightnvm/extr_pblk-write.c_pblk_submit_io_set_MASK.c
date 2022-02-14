
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_line {int erase_bitmap; int left_eblks; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct pblk*,struct ppa_addr) ;
 int FUNC_3 (struct pblk*,char*,int) ;
 struct pblk_line* FUNC_4 (struct pblk*) ;
 int FUNC_5 (struct ppa_addr) ;
 int FUNC_6 (struct ppa_addr*) ;
 int FUNC_7 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_8 (struct pblk*,struct nvm_rq*,struct ppa_addr*) ;
 struct pblk_line* FUNC_9 (struct pblk*,struct nvm_rq*) ;
 int FUNC_10 (struct pblk*,struct nvm_rq*,int *) ;
 int FUNC_11 (struct pblk*,struct pblk_line*) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct pblk *VAR_2, struct nvm_rq *VAR_3)
{
 struct ppa_addr VAR_4;
 struct pblk_line *VAR_5;
 int VAR_6;

 FUNC_6(&VAR_4);


 VAR_6 = FUNC_8(VAR_2, VAR_3, &VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_2, "could not setup write request: %d\n", VAR_6);
  return VAR_0;
 }

 VAR_5 = FUNC_9(VAR_2, VAR_3);


 VAR_6 = FUNC_10(VAR_2, VAR_3, ((void*)0));
 if (VAR_6) {
  FUNC_3(VAR_2, "data I/O submission failed: %d\n", VAR_6);
  return VAR_0;
 }

 if (!FUNC_5(VAR_4)) {

  if (FUNC_2(VAR_2, VAR_4)) {
   struct pblk_line *VAR_7 = FUNC_4(VAR_2);
   struct nvm_tgt_dev *VAR_8 = VAR_2->dev;
   struct nvm_geo *VAR_9 = &VAR_8->geo;
   int VAR_10;

   FUNC_1(&VAR_7->left_eblks);
   VAR_10 = FUNC_7(VAR_9, VAR_4);
   FUNC_0(!FUNC_12(VAR_10, VAR_7->erase_bitmap));
  }
 }

 if (VAR_5) {

  VAR_6 = FUNC_11(VAR_2, VAR_5);
  if (VAR_6) {
   FUNC_3(VAR_2, "metadata I/O submission failed: %d",
     VAR_6);
   return VAR_0;
  }
 }

 return VAR_1;
}
