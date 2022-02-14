
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master {int idx; int dev; int scan_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fsi_master*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fsi_master *VAR_1)
{
 if (VAR_1->idx >= 0) {
  FUNC_2(&VAR_0, VAR_1->idx);
  VAR_1->idx = -1;
 }

 FUNC_3(&VAR_1->scan_lock);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->scan_lock);
 FUNC_0(&VAR_1->dev);
}
