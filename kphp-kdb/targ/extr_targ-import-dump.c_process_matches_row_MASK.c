
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_proposal {int len; int text; scalar_t__ user_id; int type; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_8 ;
 struct lev_proposal* FUNC_2 (int) ;

void FUNC_3 (void) {
  struct lev_proposal *VAR_9;
  int VAR_10 = VAR_1[VAR_7];
  char *VAR_11 = VAR_3[VAR_7];
  int VAR_12;
  VAR_8 = VAR_0[VAR_6];

  if (!FUNC_0(VAR_8) || VAR_0[VAR_5] || !VAR_10 || VAR_10 >= 1024) {
    return;
  }

  VAR_9 = FUNC_2 (11 + VAR_10);
  VAR_9->type = VAR_2;
  VAR_9->user_id = VAR_8;
  VAR_9->len = VAR_10;

  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
    if ((unsigned char) VAR_11[VAR_12] < ' ') {
      VAR_11[VAR_12] = ' ';
    }
  }

  FUNC_1 (VAR_9->text, VAR_11);
  VAR_4++;
}
