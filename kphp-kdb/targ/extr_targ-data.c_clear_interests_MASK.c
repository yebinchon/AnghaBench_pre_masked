
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_generic {int type; int a; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2 (struct lev_generic *VAR_0) {
  user_t *VAR_1 = FUNC_0 (VAR_0->a);
  if (VAR_1) {
    FUNC_1 (VAR_1, VAR_0->type & 0xff);
  }
}
