
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; scalar_t__ disabled_since; int price; scalar_t__ userlist_computed_at; int ad_id; int users; int user_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct advert*) ;
 int VAR_5 ;
 int FUNC_1 (struct advert*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct advert*) ;
 int FUNC_4 (struct advert*) ;
 int FUNC_5 (struct advert*) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (struct advert*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (struct advert*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9 (struct advert *VAR_10, int VAR_11) {
  if (!VAR_10) {
    return 0;
  }
  if (VAR_10->flags & VAR_0) {
    int VAR_12 = FUNC_7 (VAR_10);
    if (VAR_12 < 0) {
      return VAR_12;
    }
    FUNC_2 (VAR_10->disabled_since <= VAR_7 - VAR_3);
  }

  if (VAR_11) {
    VAR_10->price = VAR_11;
  }

  FUNC_2 (VAR_10->price);

  if (VAR_10->flags & VAR_2) {
    if (VAR_10->userlist_computed_at <= VAR_7 - VAR_4) {
      FUNC_3 (VAR_10);
    } else {
      FUNC_5 (VAR_10);
    }
    return 0;
  }

  if (!VAR_10->user_list || VAR_10->disabled_since <= VAR_7 - VAR_3 || VAR_10->userlist_computed_at <= VAR_7 - VAR_4) {
    FUNC_4 (VAR_10);
  }

  FUNC_8 (VAR_10);
  VAR_10->flags |= VAR_2;
  VAR_5++;

  if (!VAR_6) {
    FUNC_0 (VAR_10);
  } else {
    VAR_10->flags |= VAR_1;
  }

  FUNC_1 (VAR_10);
  FUNC_5 (VAR_10);

  if (VAR_9 > 2) {
    FUNC_6 (VAR_8, "enabled previously disabled ad #%d: %d users\n", VAR_10->ad_id, VAR_10->users);
  }

  return 1;
}
