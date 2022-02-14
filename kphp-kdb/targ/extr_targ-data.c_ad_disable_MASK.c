
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; int ad_id; int users; int disabled_since; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct advert*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (struct advert*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5 (struct advert *VAR_7) {
  if (!VAR_7) {
    return 0;
  }
  if (!(VAR_7->flags & VAR_2)) {
    return 1;
  }
  FUNC_0 (!(VAR_7->flags & VAR_0));

  VAR_7->flags &= ~VAR_2;
  VAR_3--;
  VAR_7->disabled_since = VAR_4;

  if (!(VAR_7->flags & VAR_1)) {
    FUNC_1 (VAR_7);
  } else {
    VAR_7->flags &= ~VAR_1;
  }

  if (VAR_6 > 2) {
    FUNC_2 (VAR_5, "disabled previously enabled ad #%d: %d users\n", VAR_7->ad_id, VAR_7->users);
  }

  FUNC_4 (VAR_7);
  FUNC_3 ();

  return 1;
}
