
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int fd; int handler; } ;
struct execdevice {int fd_out; } ;
typedef int ssize_t ;


 struct execdevice* FUNC_0 (int ) ;
 int FUNC_1 (int,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(struct physical *VAR_0, const void *VAR_1, size_t VAR_2)
{
  struct execdevice *VAR_3 = FUNC_0(VAR_0->handler);
  int VAR_4 = VAR_3->fd_out == -1 ? VAR_0->fd : VAR_3->fd_out;

  return FUNC_1(VAR_4, VAR_1, VAR_2);
}
