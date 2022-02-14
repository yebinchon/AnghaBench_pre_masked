
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ppa_addr {scalar_t__ ppa; } ;
struct nvm_tgt_dev {struct nvm_dev* parent; } ;
struct TYPE_3__ {scalar_t__ version; } ;
struct nvm_dev {TYPE_2__* ops; TYPE_1__ geo; } ;
struct nvm_chk_meta {int dummy; } ;
typedef int sector_t ;
struct TYPE_4__ {int (* get_chk_meta ) (struct nvm_dev*,int ,int,struct nvm_chk_meta*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvm_dev*,int ,int,struct nvm_chk_meta*) ;
 int FUNC_1 (struct nvm_tgt_dev*,struct ppa_addr*,int) ;
 int FUNC_2 (struct nvm_dev*,int ,int,struct nvm_chk_meta*) ;

int FUNC_3(struct nvm_tgt_dev *VAR_1, struct ppa_addr VAR_2,
         int VAR_3, struct nvm_chk_meta *VAR_4)
{
 struct nvm_dev *VAR_5 = VAR_1->parent;

 FUNC_1(VAR_1, &VAR_2, 1);

 if (VAR_5->geo.version == VAR_0)
  return FUNC_0(VAR_5, (sector_t)VAR_2.ppa, VAR_3, VAR_4);

 return VAR_5->ops->get_chk_meta(VAR_5, (sector_t)VAR_2.ppa, VAR_3, VAR_4);
}
