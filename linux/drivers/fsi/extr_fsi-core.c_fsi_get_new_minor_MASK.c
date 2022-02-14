
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_device {int slave; } ;
typedef enum fsi_dev_type { ____Placeholder_fsi_dev_type } fsi_dev_type ;
typedef int dev_t ;


 int FUNC_0 (int ,int,int *,int*) ;

int FUNC_1(struct fsi_device *VAR_0, enum fsi_dev_type VAR_1,
        dev_t *VAR_2, int *VAR_3)
{
 return FUNC_0(VAR_0->slave, VAR_1, VAR_2, VAR_3);
}
