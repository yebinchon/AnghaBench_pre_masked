
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int fd; int fd2; scalar_t__ is_socket; scalar_t__ sync; scalar_t__ writable; scalar_t__ readable; scalar_t__ pid; } ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static struct mrb_io *
FUNC_1(mrb_state *VAR_0)
{
  struct mrb_io *VAR_1;

  VAR_1 = (struct mrb_io *)FUNC_0(VAR_0, sizeof(struct mrb_io));
  VAR_1->fd = -1;
  VAR_1->fd2 = -1;
  VAR_1->pid = 0;
  VAR_1->readable = 0;
  VAR_1->writable = 0;
  VAR_1->sync = 0;
  VAR_1->is_socket = 0;
  return VAR_1;
}
