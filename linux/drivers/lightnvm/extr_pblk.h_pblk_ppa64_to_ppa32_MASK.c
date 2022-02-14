
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ppa_addr {int dummy; } ;
struct pblk {int addrf; struct nvm_tgt_dev* dev; } ;
struct nvm_tgt_dev {int parent; } ;


 int FUNC_0 (int ,int *,struct ppa_addr) ;

__attribute__((used)) static inline u32 FUNC_1(struct pblk *VAR_0, struct ppa_addr VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;

 return FUNC_0(VAR_2->parent, &VAR_0->addrf, VAR_1);
}
