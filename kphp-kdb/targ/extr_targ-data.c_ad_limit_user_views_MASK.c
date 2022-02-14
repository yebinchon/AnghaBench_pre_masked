
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int a; int type; } ;
struct advert {scalar_t__ price; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct advert* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct advert*) ;

__attribute__((used)) static int FUNC_4 (struct lev_generic *VAR_1) {
  int VAR_2 = VAR_1->a;
  int VAR_3 = VAR_1->type & 0xffff;
  FUNC_1 (!VAR_3 || VAR_3 == 100);
  struct advert *VAR_4 = FUNC_2 (VAR_2, FUNC_0 (VAR_2));
  if (!VAR_4) {
    return -1;
  }

  FUNC_1 (FUNC_3 (VAR_4) >= 0);
  FUNC_1 (VAR_4->price < 0);

  if (!VAR_3) {
    VAR_4->flags &= ~VAR_0;
  } else {
    VAR_4->flags |= VAR_0;
  }

  return 1;
}
