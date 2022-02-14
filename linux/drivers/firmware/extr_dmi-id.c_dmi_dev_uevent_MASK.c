
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int buflen; int * buf; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 ssize_t VAR_3;

 if (FUNC_0(VAR_2, "MODALIAS="))
  return -VAR_0;
 VAR_3 = FUNC_1(&VAR_2->buf[VAR_2->buflen - 1],
      sizeof(VAR_2->buf) - VAR_2->buflen);
 if (VAR_3 >= (sizeof(VAR_2->buf) - VAR_2->buflen))
  return -VAR_0;
 VAR_2->buflen += VAR_3;
 return 0;
}
