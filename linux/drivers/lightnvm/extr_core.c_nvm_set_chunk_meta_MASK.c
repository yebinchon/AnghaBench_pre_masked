
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ppa_addr {int dummy; } ;
struct nvm_tgt_dev {struct nvm_dev* parent; } ;
struct nvm_rq {int nr_ppas; int ppa_addr; } ;
struct TYPE_4__ {scalar_t__ version; } ;
struct nvm_dev {TYPE_1__* ops; TYPE_2__ geo; } ;
struct TYPE_3__ {int (* set_bb_tbl ) (struct nvm_dev*,int *,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nvm_rq*,int ,int) ;
 int FUNC_1 (struct nvm_tgt_dev*,struct nvm_rq*) ;
 int FUNC_2 (struct nvm_tgt_dev*,struct nvm_rq*) ;
 int FUNC_3 (struct nvm_tgt_dev*,struct nvm_rq*,struct ppa_addr*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct nvm_dev*,int *,int ,int) ;

int FUNC_6(struct nvm_tgt_dev *VAR_3, struct ppa_addr *VAR_4,
         int VAR_5, int VAR_6)
{
 struct nvm_dev *VAR_7 = VAR_3->parent;
 struct nvm_rq VAR_8;
 int VAR_9;

 if (VAR_7->geo.version == VAR_2)
  return 0;

 if (VAR_5 > VAR_1) {
  FUNC_4("unable to update all blocks atomically\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_8, 0, sizeof(struct nvm_rq));

 FUNC_3(VAR_3, &VAR_8, VAR_4, VAR_5);
 FUNC_2(VAR_3, &VAR_8);

 VAR_9 = VAR_7->ops->set_bb_tbl(VAR_7, &VAR_8.ppa_addr, VAR_8.nr_ppas, VAR_6);
 FUNC_1(VAR_3, &VAR_8);
 if (VAR_9)
  return -VAR_0;

 return 0;
}
