
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_ioctl_create {int dev; } ;
struct nvm_dev {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct nvm_dev*,struct nvm_ioctl_create*) ;
 struct nvm_dev* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct nvm_ioctl_create *VAR_3)
{
 struct nvm_dev *VAR_4;
 int VAR_5;

 FUNC_0(&VAR_2);
 VAR_4 = FUNC_4(VAR_3->dev);
 FUNC_6(&VAR_2);

 if (!VAR_4) {
  FUNC_5("device not found\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_4->ref);
 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5)
  FUNC_2(&VAR_4->ref, VAR_1);

 return VAR_5;
}
