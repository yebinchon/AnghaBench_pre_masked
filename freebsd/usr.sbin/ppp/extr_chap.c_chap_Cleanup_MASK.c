
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* local; char* peer; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_5__ {int fd; TYPE_1__ buf; scalar_t__ pid; } ;
struct chap {scalar_t__ peertries; TYPE_3__ challenge; TYPE_2__ child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int*) ;

__attribute__((used)) static void
FUNC_9(struct chap *VAR_4, int VAR_5)
{
  if (VAR_4->child.pid) {
    int VAR_6;

    FUNC_4(VAR_4->child.fd);
    VAR_4->child.fd = -1;
    if (VAR_5)
      FUNC_5(VAR_4->child.pid, VAR_2);
    VAR_4->child.pid = 0;
    VAR_4->child.buf.len = 0;

    if (FUNC_8(&VAR_6) == -1)
      FUNC_6(VAR_0, "Chap: wait: %s\n", FUNC_7(VAR_3));
    else if (FUNC_2(VAR_6))
      FUNC_6(VAR_1, "Chap: Child received signal %d\n", FUNC_3(VAR_6));
    else if (FUNC_1(VAR_6) && FUNC_0(VAR_6))
      FUNC_6(VAR_0, "Chap: Child exited %d\n", FUNC_0(VAR_6));
  }
  *VAR_4->challenge.local = *VAR_4->challenge.peer = '\0';

  VAR_4->peertries = 0;

}
