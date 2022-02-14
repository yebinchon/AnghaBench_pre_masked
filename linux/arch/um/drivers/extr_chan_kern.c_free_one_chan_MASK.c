
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chan {int fd; scalar_t__ output; scalar_t__ primary; int data; TYPE_1__* ops; int list; } ;
struct TYPE_2__ {int (* free ) (int ) ;} ;


 int FUNC_0 (struct chan*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct chan*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct chan *VAR_0)
{
 FUNC_3(&VAR_0->list);

 FUNC_0(VAR_0, 0);

 if (VAR_0->ops->free != ((void*)0))
  (*VAR_0->ops->free)(VAR_0->data);

 if (VAR_0->primary && VAR_0->output)
  FUNC_1(VAR_0->fd);
 FUNC_2(VAR_0);
}
