
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct physical {TYPE_1__ cfg; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct physical*) ;
 int FUNC_4 (struct physical*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void
FUNC_5(struct physical *VAR_16, const char *VAR_17, int VAR_18)
{
  FUNC_0(&VAR_16->link);
  if (VAR_18 == VAR_3 || VAR_18 == VAR_4 ||
      (VAR_18 == VAR_5 && FUNC_3(VAR_16)))
    FUNC_1(&VAR_16->link, &VAR_13);
  else {
    FUNC_1(&VAR_16->link, &VAR_7);
    FUNC_1(&VAR_16->link, &VAR_9);
  }
  if (VAR_18 != VAR_4)
    FUNC_1(&VAR_16->link, &VAR_6);
  FUNC_1(&VAR_16->link, &VAR_12);
  FUNC_1(&VAR_16->link, &VAR_10);
  FUNC_1(&VAR_16->link, &VAR_8);
  FUNC_1(&VAR_16->link, &VAR_15);
  FUNC_1(&VAR_16->link, &VAR_14);

  FUNC_1(&VAR_16->link, &VAR_11);

  if (VAR_18 == VAR_2 && FUNC_3(VAR_16)) {
    FUNC_2(VAR_0, "Sync device setting ignored for ``%s'' device\n", VAR_17);
    VAR_16->cfg.speed = VAR_1;
  } else if (VAR_18 == VAR_3 && !FUNC_3(VAR_16)) {
    FUNC_2(VAR_0, "Async device setting ignored for ``%s'' device\n",
               VAR_17);
    FUNC_4(VAR_16);
  }
}
