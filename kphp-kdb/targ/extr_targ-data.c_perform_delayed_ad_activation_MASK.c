
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; struct advert* hash_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 struct advert** VAR_4 ;
 int FUNC_0 (struct advert*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;

int FUNC_2 (void) {
  long VAR_6;
  int VAR_7 = 0;
  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    struct advert *VAR_8;
    for (VAR_8 = VAR_4[VAR_6]; VAR_8; VAR_8 = VAR_8->hash_next) {
      if (VAR_8->flags & VAR_1) {
 FUNC_1 ((VAR_8->flags & (VAR_2 | VAR_0)) == VAR_2);
 VAR_8->flags &= ~VAR_1;
 FUNC_0 (VAR_8);
 VAR_7++;
      }
    }
  }
  return VAR_7;
}
