
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int dummy; } ;
struct lev_generic {int type; int b; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct lev_generic*,int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int VAR_7 ;
 int FUNC_6 (struct lev_start*) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 int VAR_9 ;

int FUNC_8 (struct lev_generic *VAR_10, int VAR_11) {


  if (VAR_5) {
    if ((VAR_1 && --VAR_1 == 0) || FUNC_4() > VAR_0 * VAR_7) {
      FUNC_7 (VAR_8);
      FUNC_2 (13);
    }
  }

  int VAR_12;
  switch (VAR_10->type) {
  case 130:
    if (VAR_11 < 24 || VAR_10->b < 0 || VAR_10->b > 4096) { return -2; }
    VAR_12 = 24 + ((VAR_10->b + 3) & -4);
    if (VAR_11 < VAR_12) { return -2; }
    return FUNC_6 ((struct lev_start *) VAR_10) >= 0 ? VAR_12 : -1;
  case 133:
  case 128:
  case 137:
  case 132:
  case 131:
  case 129:
    return FUNC_1 (VAR_10, VAR_11);
  case 136:
    FUNC_0(VAR_6, VAR_2);
  case 134:
    FUNC_0(VAR_6, VAR_4);
  case 135:
    FUNC_0(VAR_6, VAR_3);
  }

  FUNC_3 (VAR_9, "unknown log event type %08x at position %d\n", VAR_10->type, FUNC_5());

  return -1;
}
