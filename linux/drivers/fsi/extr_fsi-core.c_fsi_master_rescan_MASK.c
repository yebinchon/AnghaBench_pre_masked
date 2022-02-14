
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master {int scan_lock; } ;


 int FUNC_0 (struct fsi_master*) ;
 int FUNC_1 (struct fsi_master*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct fsi_master *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->scan_lock);
 FUNC_1(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_3(&VAR_0->scan_lock);

 return VAR_1;
}
