
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int type; int a; int b; } ;


 scalar_t__ FUNC_0 (char*,char) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (struct lev_generic *VAR_1) {
  if (FUNC_0 ("LEV_TX_INCR_MESSAGE_FLAGS", '+') < 0) {
    return;
  }
  FUNC_1 (VAR_0, "%d\t%d\t%d\n", VAR_1->type & 0xff, VAR_1->a, VAR_1->b);
}
