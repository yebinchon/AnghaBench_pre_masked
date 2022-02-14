
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int powered; int recalib_wq; int mode; struct psmouse* psmouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*,int) ;
 int FUNC_3 (struct hgpk_data*) ;
 struct hgpk_data* FUNC_4 (int,int ) ;

int FUNC_5(struct psmouse *VAR_4)
{
 struct hgpk_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(struct hgpk_data), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto alloc_fail;
 }

 VAR_4->private = VAR_5;

 VAR_5->psmouse = VAR_4;
 VAR_5->powered = 1;
 VAR_5->mode = VAR_2;
 FUNC_0(&VAR_5->recalib_wq, VAR_3);

 VAR_6 = FUNC_2(VAR_4, 0);
 if (VAR_6)
  goto init_fail;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  goto init_fail;

 return 0;

init_fail:
 FUNC_3(VAR_5);
alloc_fail:
 return VAR_6;
}
