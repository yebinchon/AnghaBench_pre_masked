
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int a; int type; } ;
struct advert {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct advert* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct advert*) ;

__attribute__((used)) static int FUNC_4 (struct lev_generic *VAR_3) {
  int VAR_4 = VAR_3->a;
  int VAR_5 = (VAR_3->type & -0x100) == VAR_2 ? VAR_3->type & 0xff : VAR_3->type & 1;
  struct advert *VAR_6 = FUNC_2 (VAR_4, FUNC_0 (VAR_4));
  if (!VAR_6) {
    return -1;
  }

  FUNC_1 (FUNC_3 (VAR_6) >= 0);

  VAR_6->flags = (VAR_6->flags & ~VAR_0) | (VAR_5 << VAR_1);

  return 1;
}
