
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int uaddrf; int addrf; int addrf_len; int min_write_pgs; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int version; int clba; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (struct pblk*,char*,...) ;
 int FUNC_2 (struct pblk*,struct nvm_geo*,void*) ;
 int FUNC_3 (struct nvm_geo*,void*,int *) ;

__attribute__((used)) static int FUNC_4(struct pblk *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_1->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 int VAR_4;

 switch (VAR_3->version) {
 case 129:
  FUNC_0(VAR_3->clba, VAR_1->min_write_pgs, &VAR_4);
  if (VAR_4) {
   FUNC_1(VAR_1, "bad configuration of sectors/pages\n");
   return -VAR_0;
  }

  VAR_1->addrf_len = FUNC_2(VAR_1, VAR_3,
       (void *)&VAR_1->addrf);
  break;
 case 128:
  VAR_1->addrf_len = FUNC_3(VAR_3, (void *)&VAR_1->addrf,
       &VAR_1->uaddrf);
  break;
 default:
  FUNC_1(VAR_1, "OCSSD revision not supported (%d)\n",
        VAR_3->version);
  return -VAR_0;
 }

 return 0;
}
