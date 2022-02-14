
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_geo {int all_luns; } ;
struct nvm_dev {int lun_map; int lock; int mlock; int targets; int area_list; struct nvm_geo geo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nvm_dev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct nvm_dev *VAR_2)
{
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 int VAR_4;

 VAR_2->lun_map = FUNC_2(FUNC_0(VAR_3->all_luns),
     sizeof(unsigned long), VAR_1);
 if (!VAR_2->lun_map)
  return -VAR_0;

 FUNC_1(&VAR_2->area_list);
 FUNC_1(&VAR_2->targets);
 FUNC_4(&VAR_2->mlock);
 FUNC_6(&VAR_2->lock);

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  goto err_fmtype;

 return 0;
err_fmtype:
 FUNC_3(VAR_2->lun_map);
 return VAR_4;
}
