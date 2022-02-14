
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device_attr {int dummy; } ;
struct TYPE_2__ {struct ib_device_attr props; } ;
struct rvt_dev_info {TYPE_1__ dparms; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (struct ib_device*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_1,
       struct ib_device_attr *VAR_2,
       struct ib_udata *VAR_3)
{
 struct rvt_dev_info *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->inlen || VAR_3->outlen)
  return -VAR_0;



 *VAR_2 = VAR_4->dparms.props;
 return 0;
}
