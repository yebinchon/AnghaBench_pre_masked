
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {int mp; } ;
struct bundle {size_t phase; TYPE_1__ ncp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int * VAR_3 ;
 int FUNC_0 (struct bundle*,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct bundle*) ;

void
FUNC_5(struct bundle *VAR_4, u_int VAR_5)
{
  if (VAR_5 == VAR_4->phase)
    return;

  if (VAR_5 <= 128)
    FUNC_2(VAR_1, "bundle: %s\n", VAR_3[VAR_5]);

  switch (VAR_5) {
  case 131:
    VAR_4->phase = VAR_5;

    VAR_2 = 0;

    FUNC_1();
    break;

  case 130:
    VAR_4->phase = VAR_5;
    break;

  case 132:
    VAR_4->phase = VAR_5;
    FUNC_1();
    break;

  case 129:
    if (FUNC_4(&VAR_4->ncp, VAR_4)) {
      VAR_4->phase = VAR_5;
      FUNC_1();
    } else {
      FUNC_2(VAR_1, "bundle: All NCPs are disabled\n");
      FUNC_0(VAR_4, ((void*)0), VAR_0);
    }
    break;

  case 128:
    VAR_4->phase = VAR_5;
    FUNC_3(&VAR_4->ncp.mp);
    FUNC_1();
    break;
  }
}
