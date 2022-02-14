
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct chan {int fd; scalar_t__ opened; int data; TYPE_3__* ops; scalar_t__ enabled; TYPE_2__* line; scalar_t__ output; scalar_t__ input; int free_list; } ;
struct TYPE_6__ {int (* close ) (int,int ) ;} ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int write_irq; int read_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct chan*) ;

__attribute__((used)) static void FUNC_5(struct chan *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_2->opened)
  return;

 if (VAR_3) {
  FUNC_1(&VAR_1, VAR_4);
  FUNC_0(&VAR_2->free_list, &VAR_0);
  FUNC_2(&VAR_1, VAR_4);
 } else {
  if (VAR_2->input && VAR_2->enabled)
   FUNC_4(VAR_2->line->driver->read_irq, VAR_2);
  if (VAR_2->output && VAR_2->enabled)
   FUNC_4(VAR_2->line->driver->write_irq, VAR_2);
  VAR_2->enabled = 0;
 }
 if (VAR_2->ops->close != ((void*)0))
  (*VAR_2->ops->close)(VAR_2->fd, VAR_2->data);

 VAR_2->opened = 0;
 VAR_2->fd = -1;
}
