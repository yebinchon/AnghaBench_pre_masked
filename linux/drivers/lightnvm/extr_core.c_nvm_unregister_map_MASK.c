
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_dev_map {struct nvm_dev_map* chnls; struct nvm_dev_map* lun_offs; } ;
struct TYPE_2__ {int num_ch; } ;
struct nvm_dev {TYPE_1__ geo; struct nvm_dev_map* rmap; } ;


 int FUNC_0 (struct nvm_dev_map*) ;

__attribute__((used)) static void FUNC_1(struct nvm_dev *VAR_0)
{
 struct nvm_dev_map *VAR_1 = VAR_0->rmap;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->geo.num_ch; VAR_2++)
  FUNC_0(VAR_1->chnls[VAR_2].lun_offs);

 FUNC_0(VAR_1->chnls);
 FUNC_0(VAR_1);
}
