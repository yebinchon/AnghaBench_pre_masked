
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct physical {int fd; TYPE_1__ link; scalar_t__ out; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 struct physical* FUNC_1 (struct fdescriptor*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ,int) ;

int
FUNC_4(struct fdescriptor *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4,
                     int *VAR_5, int VAR_6)
{
  struct physical *VAR_7 = FUNC_1(VAR_1);
  int VAR_8;

  VAR_8 = 0;
  if (VAR_7->fd >= 0) {
    if (VAR_2) {
      FUNC_0(VAR_7->fd, VAR_2);
      FUNC_3(VAR_0, "%s: fdset(r) %d\n", VAR_7->link.name, VAR_7->fd);
      VAR_8++;
    }
    if (VAR_4) {
      FUNC_0(VAR_7->fd, VAR_4);
      FUNC_3(VAR_0, "%s: fdset(e) %d\n", VAR_7->link.name, VAR_7->fd);
      VAR_8++;
    }
    if (VAR_3 && (VAR_6 || FUNC_2(&VAR_7->link) || VAR_7->out)) {
      FUNC_0(VAR_7->fd, VAR_3);
      FUNC_3(VAR_0, "%s: fdset(w) %d\n", VAR_7->link.name, VAR_7->fd);
      VAR_8++;
    }
    if (VAR_8 && *VAR_5 < VAR_7->fd + 1)
      *VAR_5 = VAR_7->fd + 1;
  }

  return VAR_8;
}
