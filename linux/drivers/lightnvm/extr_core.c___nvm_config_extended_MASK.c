
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_ioctl_create_extended {int lun_begin; int lun_end; int op; } ;
struct TYPE_2__ {int all_luns; } ;
struct nvm_dev {TYPE_1__ geo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct nvm_dev *VAR_4,
     struct nvm_ioctl_create_extended *VAR_5)
{
 if (VAR_5->lun_begin == 0xFFFF && VAR_5->lun_end == 0xFFFF) {
  VAR_5->lun_begin = 0;
  VAR_5->lun_end = VAR_4->geo.all_luns - 1;
 }


 if (VAR_5->op == 0xFFFF) {
  VAR_5->op = VAR_1;
 } else if (VAR_5->op < VAR_3 || VAR_5->op > VAR_2) {
  FUNC_1("invalid over provisioning value\n");
  return -VAR_0;
 }

 return FUNC_0(&VAR_4->geo, VAR_5->lun_begin, VAR_5->lun_end);
}
