
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int buflen; int * buf; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*) ;
 int FUNC_1 (int *,int,struct input_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct kobj_uevent_env *VAR_1,
      struct input_dev *VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_1, "MODALIAS="))
  return -VAR_0;

 VAR_3 = FUNC_1(&VAR_1->buf[VAR_1->buflen - 1],
       sizeof(VAR_1->buf) - VAR_1->buflen,
       VAR_2, 0);
 if (VAR_3 >= (sizeof(VAR_1->buf) - VAR_1->buflen))
  return -VAR_0;

 VAR_1->buflen += VAR_3;
 return 0;
}
