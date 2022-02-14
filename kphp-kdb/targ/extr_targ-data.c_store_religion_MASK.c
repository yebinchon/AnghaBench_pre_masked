
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int religion_hashes; int uid; int religion; } ;
typedef TYPE_1__ user_t ;
struct lev_religion {char* str; int type; int user_id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_1__* FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8 (struct lev_religion *VAR_1, int VAR_2) {
  char *VAR_3 = VAR_1->str;
  int VAR_4 = VAR_1->type & 0xff;
  user_t *VAR_5;

  if (VAR_2 < VAR_4+9) { return -2; }

  FUNC_1 (!VAR_3[VAR_4]);


  VAR_5 = FUNC_6 (VAR_1->user_id);

  if (VAR_5) {
    FUNC_4 (VAR_5->religion);
    VAR_5->religion = FUNC_3 (VAR_4);
    FUNC_5 (VAR_5->religion, VAR_3, VAR_4);
    FUNC_2 (VAR_5->uid, VAR_5->religion_hashes);
    VAR_5->religion_hashes = FUNC_7 (VAR_5->religion, 0, VAR_0);
    FUNC_0 (VAR_5->uid, VAR_5->religion_hashes);
  }

  return 9+VAR_4;
}
