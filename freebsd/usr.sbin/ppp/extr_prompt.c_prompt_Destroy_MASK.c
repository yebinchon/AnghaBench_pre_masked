
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int from; } ;
struct prompt {scalar_t__ Term; scalar_t__ fd_in; scalar_t__ fd_out; TYPE_1__ src; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct prompt*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct prompt*) ;
 int FUNC_5 (struct prompt*) ;
 scalar_t__ VAR_1 ;

void
FUNC_6(struct prompt *VAR_2, int VAR_3)
{
  if (VAR_2) {
    if (VAR_2->Term != VAR_1) {
      FUNC_1(VAR_2->Term);
      FUNC_0(VAR_2->fd_in);
      if (VAR_2->fd_out != VAR_2->fd_in)
        FUNC_0(VAR_2->fd_out);
      if (VAR_3)
        FUNC_3(VAR_0, "%s: Client connection dropped.\n", VAR_2->src.from);
    } else
      FUNC_5(VAR_2);

    FUNC_4(VAR_2);
    FUNC_2(VAR_2);
  }
}
