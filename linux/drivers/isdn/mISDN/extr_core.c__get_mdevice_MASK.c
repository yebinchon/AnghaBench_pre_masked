
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mISDNdevice {scalar_t__ const id; } ;
struct device {int dummy; } ;


 struct mISDNdevice* FUNC_0 (struct device*) ;

__attribute__((used)) static int
FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 struct mISDNdevice *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return 0;
 if (VAR_2->id != *(const u_int *)VAR_1)
  return 0;
 return 1;
}
