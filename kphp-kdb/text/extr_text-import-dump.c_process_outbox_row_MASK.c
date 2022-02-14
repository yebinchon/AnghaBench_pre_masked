
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_add_message {int user_id; int legacy_id; int peer_id; int date; int ip; int port; int front; int text_len; char* text; int ua_hash; scalar_t__ peer_msg_id; scalar_t__ type; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;
 struct lev_add_message* FUNC_5 (int) ;

void FUNC_6 (void) {
  int VAR_20 = VAR_0[VAR_18];
  int VAR_21, VAR_22;
  char *VAR_23, *VAR_24;
  VAR_8 = VAR_0[VAR_10];
  if (FUNC_0 (VAR_8) < 0 || VAR_8 <= 0 || VAR_20 <= 0) {
    return;
  }
  if (VAR_1[VAR_17] == 2 && !FUNC_2 (VAR_3[VAR_17], "\\N")) {
    VAR_1[VAR_17] = 3;
    FUNC_3 (VAR_3[VAR_17], "...");
  }
  if (VAR_1[VAR_14] == 2 && !FUNC_2 (VAR_3[VAR_14], "\\N")) {
    VAR_1[VAR_14] = 0;
    VAR_3[VAR_14][0] = 0;
  }
  struct lev_add_message *VAR_25 = FUNC_5 (sizeof (struct lev_add_message) + VAR_1[VAR_17] + VAR_1[VAR_14] + 2);
  VAR_25->type = VAR_2 + (VAR_0[VAR_16] ? 0 : VAR_6) + VAR_5 + (FUNC_1 (VAR_8, VAR_20) ? VAR_4 : 0);
  VAR_25->user_id = VAR_8;
  VAR_25->legacy_id = -VAR_0[VAR_12];
  VAR_25->peer_id = VAR_20;
  VAR_25->peer_msg_id = 0;
  VAR_25->date = VAR_0[VAR_9];
  VAR_25->ip = VAR_0[VAR_13];
  VAR_25->port = VAR_0[VAR_15];
  VAR_25->front = VAR_0[VAR_11];
  VAR_25->ua_hash = FUNC_4 (VAR_3[VAR_19], 0, 10);
  VAR_25->text_len = VAR_1[VAR_17] + 1 + VAR_1[VAR_14];
  VAR_23 = VAR_25->text;
  VAR_22 = VAR_1[VAR_17];
  VAR_24 = VAR_3[VAR_17];
  for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
    if ((unsigned char) VAR_24[VAR_21] < ' ') {
      *VAR_23++ = ' ';
    } else {
      *VAR_23++ = VAR_24[VAR_21];
    }
  }
  *VAR_23++ = 9;
  VAR_22 = VAR_1[VAR_14];
  VAR_24 = VAR_3[VAR_14];
  for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
    if ((unsigned char) VAR_24[VAR_21] < ' ' && VAR_24[VAR_21] != '\t') {
      *VAR_23++ = ' ';
    } else {
      *VAR_23++ = VAR_24[VAR_21];
    }
  }
  *VAR_23++ = 0;

  VAR_7++;
}
