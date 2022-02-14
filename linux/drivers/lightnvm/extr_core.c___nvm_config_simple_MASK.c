
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_ioctl_create_simple {int lun_begin; int lun_end; } ;
struct nvm_geo {int all_luns; } ;
struct nvm_dev {struct nvm_geo geo; } ;


 int FUNC_0 (struct nvm_geo*,int,int) ;

__attribute__((used)) static int FUNC_1(struct nvm_dev *VAR_0,
          struct nvm_ioctl_create_simple *VAR_1)
{
 struct nvm_geo *VAR_2 = &VAR_0->geo;

 if (VAR_1->lun_begin == -1 && VAR_1->lun_end == -1) {
  VAR_1->lun_begin = 0;
  VAR_1->lun_end = VAR_2->all_luns - 1;
 }

 return FUNC_0(VAR_2, VAR_1->lun_begin, VAR_1->lun_end);
}
