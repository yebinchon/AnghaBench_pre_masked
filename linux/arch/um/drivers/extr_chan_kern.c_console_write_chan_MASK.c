
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chan {scalar_t__ primary; int fd; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* console_write ) (int ,char const*,int) ;} ;


 int FUNC_0 (int ,char const*,int) ;

int FUNC_1(struct chan *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if (!VAR_0 || !VAR_0->ops->console_write)
  return 0;

 VAR_3 = VAR_0->ops->console_write(VAR_0->fd, VAR_1, VAR_2);
 if (VAR_0->primary)
  VAR_4 = VAR_3;
 return VAR_4;
}
