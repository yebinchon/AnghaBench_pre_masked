
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name_hashes; int uid; int name; } ;
typedef TYPE_1__ user_t ;
struct lev_username {int user_id; char* s; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,char*,int) ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9 (struct lev_username *VAR_2, int VAR_3) {
  int VAR_4, VAR_5 = 0;
  int VAR_6 = VAR_2->user_id;
  char *VAR_7 = VAR_2->s;

  FUNC_1 (!VAR_7[VAR_3]);



  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    if (VAR_7[VAR_4] == 9) { VAR_5++; }
    else if ((unsigned char) VAR_7[VAR_4] < ' ') {
      FUNC_5 (VAR_1, "name of %d: '%s' (len=%d)\n", VAR_6, VAR_7, VAR_3);

      break;
    }
  }
  FUNC_1 (VAR_5 >= 0);
  user_t *VAR_8 = FUNC_6 (VAR_6);
  if (VAR_8) {
    FUNC_4 (VAR_8->name);
    VAR_8->name = FUNC_3 (VAR_7, VAR_3);
    FUNC_2 (VAR_8->uid, VAR_8->name_hashes);
    VAR_8->name_hashes = FUNC_8 (VAR_8->name, 0, ~2, 1, VAR_0);
    FUNC_0 (VAR_8->uid, VAR_8->name_hashes);

    FUNC_7 (VAR_8);
    return 1;
  }
  return 0;
}
