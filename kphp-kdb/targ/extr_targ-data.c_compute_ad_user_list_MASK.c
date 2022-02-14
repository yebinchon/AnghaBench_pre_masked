
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int* user_list; int users; int prev_user_creations; int userlist_computed_at; int flags; int ad_id; int query; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 scalar_t__ VAR_8 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*,int ,int) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_7 (struct advert *VAR_13) {
  if (VAR_13->user_list) {
    VAR_10--;
    VAR_11 -= VAR_13->users;
    FUNC_2 (VAR_13->user_list);
    VAR_13->user_list = 0;
    VAR_13->users = 0;
  }

  FUNC_6 ();

  VAR_7 = 0;

  FUNC_0 (!FUNC_1 (VAR_13->query));
  VAR_6 = -1;
  VAR_2 = VAR_1;
  VAR_3 = 0;
  VAR_8 = 0;

  int VAR_14 = FUNC_5 (VAR_13->ad_id);
  VAR_6 = 0;

  if (VAR_8) {
    VAR_13->flags |= VAR_0;
  } else {
    VAR_13->flags &= ~VAR_0;
  }

  FUNC_0 (VAR_14 >= 0 && VAR_14 == VAR_5);

  VAR_13->users = VAR_14;

  VAR_13->user_list = FUNC_3 (VAR_14 * 4 + 4);
  FUNC_4 (VAR_13->user_list, VAR_4, VAR_14 * 4);
  VAR_13->user_list[VAR_14] = 0x7fffffff;
  VAR_13->userlist_computed_at = VAR_9;
  VAR_13->prev_user_creations = VAR_12;

  VAR_10++;
  VAR_11 += VAR_14;

  return VAR_14;
}
