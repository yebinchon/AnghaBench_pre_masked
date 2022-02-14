
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_privacy {int* List; int type; int key; int user_id; } ;
typedef int privacy_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int VAR_6 ;
 struct lev_set_privacy* FUNC_2 (int) ;

void FUNC_3 (privacy_key_t VAR_7, int VAR_8, const char *VAR_9) {
  int VAR_10 = -1;
  const char *VAR_11 = "";
  FUNC_0 (VAR_7);



  if (VAR_8 < 0) {
    VAR_10 = ((-VAR_8 & 0x1fe) >> 1);
    if (!VAR_10) {
      VAR_10 = VAR_2;
    }
    VAR_10 |= VAR_5 | VAR_4;
  } else if (VAR_8*2 < FUNC_1 (VAR_9)) {
    VAR_11 = VAR_9 + VAR_8*2;
  } else {
    VAR_11 = "*A";
  }

  if (VAR_11[0] == '*') {
    switch (VAR_11[1]) {
    case '0':
      VAR_10 = VAR_4 + VAR_5 + VAR_2;
      break;
    case 'A':
      VAR_10 = VAR_4 + VAR_5 + VAR_0;
      break;
    case 'G':
      VAR_10 = VAR_4 + VAR_5 + VAR_1;
      break;
    }
  }

  struct lev_set_privacy *VAR_12 = FUNC_2 (16 + (VAR_10 != -1 ? 4 : 0));
  VAR_12->type = VAR_3;
  VAR_12->user_id = VAR_6;
  VAR_12->key = VAR_7;
  if (VAR_10 != -1) {
    VAR_12->type++;
    VAR_12->List[0] = VAR_10;
  }


}
