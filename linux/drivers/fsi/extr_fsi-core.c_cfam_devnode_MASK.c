
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct fsi_slave {int cdev_idx; } ;
struct device {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ) ;
 struct fsi_slave* FUNC_1 (struct device*) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_1, umode_t *VAR_2,
     kuid_t *VAR_3, kgid_t *VAR_4)
{
 struct fsi_slave *VAR_5 = FUNC_1(VAR_1);




 return FUNC_0(VAR_0, "cfam%d", VAR_5->cdev_idx);

}
