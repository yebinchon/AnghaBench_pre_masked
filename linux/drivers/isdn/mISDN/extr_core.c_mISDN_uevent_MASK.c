
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mISDNdevice {int nrbchan; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct mISDNdevice* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct mISDNdevice *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3)
  return 0;

 if (FUNC_0(VAR_2, "nchans=%d", VAR_3->nrbchan))
  return -VAR_0;

 return 0;
}
