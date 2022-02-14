
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_add_message {int user_id; int legacy_id; int peer_id; int date; int ip; int port; int front; int text_len; char* text; int ua_hash; scalar_t__ peer_msg_id; scalar_t__ type; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_11 ;
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
 struct lev_add_message* FUNC_5 (int) ;

void FUNC_6 (void) {
  int VAR_22 = VAR_0[VAR_13];
  int VAR_23, VAR_24, VAR_25 = 0;
  char *VAR_26, *VAR_27;
  VAR_9 = VAR_0[VAR_20];
  if (FUNC_1 (VAR_9) < 0 || !VAR_9 || VAR_22 <= 0) {
    return;
  }
  if (VAR_1[VAR_18] == 2 && !FUNC_3 (VAR_4[VAR_18], "\\N")) {
    VAR_1[VAR_18] = 0;
    VAR_4[VAR_18][0] = 0;
  }
  if (VAR_1[VAR_18] >= 5 && VAR_4[VAR_18][0] == '[' && VAR_4[VAR_18][1] == '[') {
    VAR_25 = FUNC_0 (VAR_4[VAR_18], VAR_1[VAR_18]);
    if (VAR_11 > 2 && !VAR_25) {
      FUNC_2 (VAR_10, "has_media=%d for '%s'\n", VAR_25, VAR_4[VAR_18]);
    }
  }
  struct lev_add_message *VAR_28 = FUNC_5 (sizeof (struct lev_add_message) + VAR_1[VAR_18] + 1);
  VAR_28->type = (VAR_25 ? VAR_3 + VAR_25 * VAR_5 : VAR_2) +
            VAR_7 + (VAR_0[VAR_21] ? VAR_6 : 0);
  VAR_28->user_id = VAR_9;
  VAR_28->legacy_id = VAR_0[VAR_16];
  VAR_28->peer_id = (VAR_22 == VAR_9 ? (int) 2e9 : VAR_22);
  VAR_28->peer_msg_id = 0;
  VAR_28->date = VAR_0[VAR_12];
  VAR_28->ip = VAR_0[VAR_17];
  VAR_28->port = VAR_0[VAR_19];
  VAR_28->front = VAR_0[VAR_14];
  VAR_28->ua_hash = FUNC_4 (VAR_4[VAR_15], 0, 10);
  VAR_28->text_len = VAR_24 = VAR_1[VAR_18];
  VAR_26 = VAR_28->text;
  VAR_27 = VAR_4[VAR_18];
  for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
    if ((unsigned char) VAR_27[VAR_23] < ' ' && VAR_27[VAR_23] != '\t') {
      *VAR_26++ = ' ';
    } else {
      *VAR_26++ = VAR_27[VAR_23];
    }
  }
  *VAR_26++ = 0;

  VAR_8++;
}
