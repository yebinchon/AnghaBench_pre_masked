
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cros_ec_device {int (* cmd_readmem ) (struct cros_ec_device*,unsigned int,int,int *) ;} ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cros_ec_device*,unsigned int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct cros_ec_device *VAR_0,
      unsigned int VAR_1, u16 *VAR_2)
{
 __le16 VAR_3;
 int VAR_4 = VAR_0->cmd_readmem(VAR_0, VAR_1, 2, &VAR_3);

 if (VAR_4 >= 0)
  *VAR_2 = FUNC_0(VAR_3);

 return VAR_4;
}
