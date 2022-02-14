
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct nvm_tgt_dev {int parent; } ;


 struct ppa_addr FUNC_0 (int ,struct ppa_addr) ;
 int FUNC_1 (struct nvm_tgt_dev*,struct ppa_addr*) ;

__attribute__((used)) static void FUNC_2(struct nvm_tgt_dev *VAR_0,
    struct ppa_addr *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1[VAR_3] = FUNC_0(VAR_0->parent, VAR_1[VAR_3]);
  FUNC_1(VAR_0, &VAR_1[VAR_3]);
 }
}
