
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_dev {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nvm_dev* FUNC_1 (int,int ,int) ;

struct nvm_dev *FUNC_2(int VAR_1)
{
 struct nvm_dev *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct nvm_dev), VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(&VAR_2->ref);

 return VAR_2;
}
