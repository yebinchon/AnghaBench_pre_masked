
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chan {scalar_t__ primary; int data; int fd; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (int ,char const*,int,int ) ;} ;


 int FUNC_0 (int ,char const*,int,int ) ;

int FUNC_1(struct chan *VAR_0, const char *VAR_1, int VAR_2,
        int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (VAR_2 == 0 || !VAR_0 || !VAR_0->ops->write)
  return 0;

 VAR_4 = VAR_0->ops->write(VAR_0->fd, VAR_1, VAR_2, VAR_0->data);
 if (VAR_0->primary) {
  VAR_5 = VAR_4;
 }
 return VAR_5;
}
