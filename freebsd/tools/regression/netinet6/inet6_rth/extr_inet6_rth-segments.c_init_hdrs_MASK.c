
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;
struct cmsghdr {int dummy; } ;


 int FUNC_0 (void*,int ,size_t) ;

void
FUNC_1(struct msghdr *VAR_0, struct cmsghdr *VAR_1, char *VAR_2, size_t VAR_3)
{
 if (VAR_0 != ((void*)0))
  FUNC_0((void *)VAR_0, 0, sizeof(struct msghdr));
 if (VAR_1 != ((void*)0))
  FUNC_0((void *)VAR_1, 0, sizeof(struct cmsghdr));
 if (VAR_2 != ((void*)0))
  FUNC_0((void *)VAR_2, 0, VAR_3);
}
