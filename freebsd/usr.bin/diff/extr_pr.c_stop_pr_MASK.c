
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr {scalar_t__ ostdout; scalar_t__ kq; TYPE_1__* e; } ;
struct TYPE_2__ {int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pr*) ;
 int FUNC_10 (scalar_t__,int *,int ,TYPE_1__*,int,int *) ;
 int VAR_1 ;

void
FUNC_11(struct pr *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_8(VAR_1);
 if (VAR_2->ostdout != VAR_0) {
  FUNC_4(VAR_0);
  FUNC_5(VAR_2->ostdout, VAR_0);
  FUNC_4(VAR_2->ostdout);
 }
 if (FUNC_10(VAR_2->kq, ((void*)0), 0, VAR_2->e, 1, ((void*)0)) == -1)
  FUNC_6(2, "kevent");
 VAR_3 = VAR_2->e[0].data;
 FUNC_4(VAR_2->kq);
 FUNC_9(VAR_2);
 if (FUNC_1(VAR_3) && FUNC_0(VAR_3) != 0)
  FUNC_7(2, "pr exited abnormally");
 else if (FUNC_2(VAR_3))
  FUNC_7(2, "pr killed by signal %d",
      FUNC_3(VAR_3));
}
