
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct physical {TYPE_1__ link; int handler; } ;
struct fdescriptor {int dummy; } ;
struct execdevice {int fd_out; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 struct physical* FUNC_1 (struct fdescriptor*) ;
 struct execdevice* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (struct fdescriptor*,int *,int *,int *,int*,int ) ;

__attribute__((used)) static int
FUNC_5(struct fdescriptor *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4, int *VAR_5)
{
  struct physical *VAR_6 = FUNC_1(VAR_1);
  struct execdevice *VAR_7 = FUNC_2(VAR_6->handler);
  int VAR_8 = 0;

  if (VAR_3 && VAR_7->fd_out >= 0) {
    FUNC_0(VAR_7->fd_out, VAR_3);
    FUNC_3(VAR_0, "%s: fdset(w) %d\n", VAR_6->link.name, VAR_7->fd_out);
    VAR_8++;
    VAR_3 = ((void*)0);
  }

  if (VAR_4 && VAR_7->fd_out >= 0) {
    FUNC_0(VAR_7->fd_out, VAR_4);
    FUNC_3(VAR_0, "%s: fdset(e) %d\n", VAR_6->link.name, VAR_7->fd_out);
    VAR_8++;
  }

  if (VAR_8 && *VAR_5 <= VAR_7->fd_out)
    *VAR_5 = VAR_7->fd_out + 1;

  return VAR_8 + FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0);
}
