
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int handler; } ;
struct execdevice {int fd_out; } ;


 int FUNC_0 (int) ;
 struct execdevice* FUNC_1 (int ) ;
 int FUNC_2 (struct execdevice*) ;

__attribute__((used)) static void
FUNC_3(struct physical *VAR_0)
{
  struct execdevice *VAR_1 = FUNC_1(VAR_0->handler);

  if (VAR_1->fd_out != -1)
    FUNC_0(VAR_1->fd_out);
  FUNC_2(VAR_1);
}
