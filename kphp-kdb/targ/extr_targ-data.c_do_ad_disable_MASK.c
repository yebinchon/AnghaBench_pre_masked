
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct advert*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct advert* FUNC_4 (int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_5 (int VAR_4) {
  struct advert *VAR_5 = FUNC_4 (VAR_4, 0);
  if (!VAR_5 && VAR_3 > 0 && !FUNC_1 (VAR_4)) {
    FUNC_3 (VAR_2, "warning: disabling undefined ad %d\n", VAR_4);
  }
  if (VAR_5 && (VAR_5->flags & VAR_0)) {
    FUNC_2 (VAR_1, 8, VAR_4);
    FUNC_0 (VAR_5);
    return 1;
  }
  return 0;
}
