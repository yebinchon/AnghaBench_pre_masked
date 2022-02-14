
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int buflen; int * buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,char const*) ;
 int FUNC_1 (int *,int,unsigned long*,int,int) ;

__attribute__((used)) static int FUNC_2(struct kobj_uevent_env *VAR_1,
       const char *VAR_2, unsigned long *VAR_3, int VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_1, "%s", VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_1->buf[VAR_1->buflen - 1],
     sizeof(VAR_1->buf) - VAR_1->buflen,
     VAR_3, VAR_4, 0);
 if (VAR_5 >= (sizeof(VAR_1->buf) - VAR_1->buflen))
  return -VAR_0;

 VAR_1->buflen += VAR_5;
 return 0;
}
