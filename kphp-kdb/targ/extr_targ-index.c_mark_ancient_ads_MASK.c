
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct advert*) ;
 scalar_t__ FUNC_1 (int) ;
 struct advert* FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3 (void) {
  int VAR_5, VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    struct advert *VAR_7 = FUNC_2 (VAR_5);
    if (VAR_7) {
      if (FUNC_0 (VAR_7)) {
 VAR_7->flags |= VAR_1;
 VAR_6++;
      } else {
 if (!(VAR_7->flags & VAR_0)) {
   ++VAR_3;
 } else {
   VAR_6++;
 }
      }
    } else if (FUNC_1 (VAR_5)) {
      VAR_6++;
    }
  }
  VAR_4 = VAR_6;
}
