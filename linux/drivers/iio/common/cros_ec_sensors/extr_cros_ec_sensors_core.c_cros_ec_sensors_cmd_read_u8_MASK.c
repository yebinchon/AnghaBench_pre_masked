
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cros_ec_device {int (* cmd_readmem ) (struct cros_ec_device*,unsigned int,int,int *) ;} ;


 int FUNC_0 (struct cros_ec_device*,unsigned int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct cros_ec_device *VAR_0,
           unsigned int VAR_1, u8 *VAR_2)
{
 return VAR_0->cmd_readmem(VAR_0, VAR_1, 1, VAR_2);
}
