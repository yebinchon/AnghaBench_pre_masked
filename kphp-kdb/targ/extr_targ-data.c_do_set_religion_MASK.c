
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int religion_hashes; int uid; int religion; } ;
typedef TYPE_1__ user_t ;
struct lev_religion {int str; int user_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct lev_religion* FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int) ;
 TYPE_1__* FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ,int ) ;

int FUNC_9 (int VAR_2, const char *VAR_3, int VAR_4) {
  if (VAR_4 < 0 || VAR_4 >= 256 || FUNC_2 (VAR_2) < 0) {
    return 0;
  }
  struct lev_religion *VAR_5 = FUNC_1 (VAR_0 + VAR_4, 9+VAR_4, VAR_2);

  FUNC_6 (VAR_5->str, VAR_3, VAR_4);

  user_t *VAR_6 = FUNC_7 (VAR_5->user_id);

  if (VAR_6) {
    FUNC_5 (VAR_6->religion);
    VAR_6->religion = FUNC_4 (VAR_5->str, VAR_4);
    FUNC_3 (VAR_6->uid, VAR_6->religion_hashes);
    VAR_6->religion_hashes = FUNC_8 (VAR_6->religion, 0, VAR_1);
    FUNC_0 (VAR_6->uid, VAR_6->religion_hashes);
    return 1;
  }

  return 0;
}
