
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_add_message {int user_id; int legacy_id; int peer_id; int peer_msg_id; int date; int ip; int port; int front; int text_len; char* text; int ua_hash; scalar_t__ type; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
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
 size_t VAR_20 ;
 size_t VAR_21 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_22 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;
 struct lev_add_message* FUNC_5 (int) ;

void FUNC_6 (void) {
  int VAR_23 = VAR_0[VAR_10];
  int VAR_24, VAR_25;
  char *VAR_26, *VAR_27;
  VAR_22 = VAR_0[VAR_19];
  if (FUNC_0 (VAR_22) < 0 || VAR_22 <= 0 || VAR_23 <= 0) {
    return;
  }
  if (VAR_0[VAR_9] && VAR_0[VAR_9] < VAR_8) {
    VAR_0[VAR_17] = 1;
  }
  if (VAR_1[VAR_18] == 2 && !FUNC_2 (VAR_3[VAR_18], "\\N")) {
    VAR_1[VAR_18] = 3;
    FUNC_3 (VAR_3[VAR_18], "...");
  }
  if (VAR_1[VAR_14] == 2 && !FUNC_2 (VAR_3[VAR_14], "\\N")) {
    VAR_1[VAR_14] = 0;
    VAR_3[VAR_14][0] = 0;
  }
  struct lev_add_message *VAR_28 = FUNC_5 (sizeof (struct lev_add_message) + VAR_1[VAR_18] + VAR_1[VAR_14] + 2);
  VAR_28->type = VAR_2 + (VAR_0[VAR_17] ? 0 : VAR_6) + (VAR_0[VAR_20] ? VAR_5 : 0) + (FUNC_1 (VAR_22, VAR_23) ? VAR_4 : 0);
  VAR_28->user_id = VAR_22;
  VAR_28->legacy_id = VAR_0[VAR_12];
  VAR_28->peer_id = VAR_23;
  VAR_28->peer_msg_id = (VAR_0[VAR_17] ? 0 : -VAR_0[VAR_16]);
  VAR_28->date = VAR_0[VAR_9];
  VAR_28->ip = VAR_0[VAR_13];
  VAR_28->port = VAR_0[VAR_15];
  VAR_28->front = VAR_0[VAR_11];
  VAR_28->ua_hash = FUNC_4 (VAR_3[VAR_21], 0, 10);
  VAR_28->text_len = VAR_1[VAR_18] + 1 + VAR_1[VAR_14];
  VAR_26 = VAR_28->text;
  VAR_25 = VAR_1[VAR_18];
  VAR_27 = VAR_3[VAR_18];
  for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
    if ((unsigned char) VAR_27[VAR_24] < ' ') {
      *VAR_26++ = ' ';
    } else {
      *VAR_26++ = VAR_27[VAR_24];
    }
  }
  *VAR_26++ = 9;
  VAR_25 = VAR_1[VAR_14];
  VAR_27 = VAR_3[VAR_14];
  for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
    if ((unsigned char) VAR_27[VAR_24] < ' ' && VAR_27[VAR_24] != '\t') {
      *VAR_26++ = ' ';
    } else {
      *VAR_26++ = VAR_27[VAR_24];
    }
  }
  *VAR_26++ = 0;

  VAR_7++;
}
