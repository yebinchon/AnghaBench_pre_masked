
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_add_message {int user_id; int peer_msg_id; int text_len; char* text; int ua_hash; void* front; void* port; void* ip; void* date; void* peer_id; void* legacy_id; scalar_t__ type; } ;


 void** VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 struct lev_add_message* FUNC_5 (int) ;

void FUNC_6 (void) {
  int VAR_18, VAR_19, VAR_20 = VAR_0[VAR_8];
  int VAR_21 = VAR_0[VAR_12], VAR_22 = (VAR_21 ? 4 : 0);
  char *VAR_23, *VAR_24;
  VAR_6 = VAR_0[VAR_14];
  if (FUNC_0 (VAR_6) < 0 || !VAR_6 || !VAR_20) {
    return;
  }
  if (VAR_1[VAR_13] == 2 && !FUNC_3 (VAR_4[VAR_13], "\\N")) {
    VAR_1[VAR_13] = 0;
    VAR_4[VAR_13][0] = 0;
  }
  static char VAR_25[32];
  int VAR_26 = VAR_20 < 0 ? FUNC_2 (VAR_25, "\x1ras %d\t", VAR_6) : 0;
  struct lev_add_message *VAR_27 = FUNC_5 (sizeof (struct lev_add_message) + VAR_22 + VAR_26 + VAR_1[VAR_13] + 1);
  VAR_27->type = VAR_22 ? VAR_3 + 1 : VAR_2;
  VAR_27->user_id = VAR_6;
  VAR_27->legacy_id = VAR_0[VAR_10];
  VAR_27->peer_id = VAR_0[VAR_17];
  VAR_27->peer_msg_id = (VAR_20 >= 0 ? VAR_20 : -VAR_20);
  VAR_27->date = VAR_0[VAR_7];
  VAR_27->ip = VAR_0[VAR_11];
  VAR_27->port = VAR_0[VAR_15];
  VAR_27->front = VAR_0[VAR_9];
  VAR_27->ua_hash = FUNC_4 (VAR_4[VAR_16], 0, 10);
  VAR_19 = VAR_1[VAR_13];
  VAR_27->text_len = VAR_26 + VAR_19;
  VAR_23 = VAR_27->text;
  if (VAR_22) {
    *((int *) VAR_23) = VAR_21;
    VAR_23 += 4;
  }
  if (VAR_26) {
    FUNC_1 (VAR_23, VAR_25, VAR_26);
    VAR_23 += VAR_26;
  }
  VAR_24 = VAR_4[VAR_13];
  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
    if ((unsigned char) VAR_24[VAR_18] < ' ' && VAR_24[VAR_18] != '\t') {
      *VAR_23++ = ' ';
    } else {
      *VAR_23++ = VAR_24[VAR_18];
    }
  }
  *VAR_23++ = 0;

  VAR_5++;
}
