
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int a; int type; } ;
struct advert {int recent_views_limit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct advert* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct advert*) ;

__attribute__((used)) static int FUNC_4 (struct lev_generic *VAR_0) {
  int VAR_1 = VAR_0->a;
  int VAR_2 = VAR_0->type & 0xffff;
  struct advert *VAR_3 = FUNC_2 (VAR_1, FUNC_0 (VAR_1));
  if (!VAR_3) {
    return -1;
  }

  FUNC_1 (FUNC_3 (VAR_3) >= 0);

  VAR_3->recent_views_limit = VAR_2;

  return 1;
}
