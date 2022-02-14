
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_add_message {int peer_id; int text_len; char* text; scalar_t__ ua_hash; scalar_t__ front; scalar_t__ port; scalar_t__ ip; scalar_t__ date; scalar_t__ peer_msg_id; scalar_t__ legacy_id; scalar_t__ user_id; scalar_t__ type; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (char*,char*) ;
 struct lev_add_message* FUNC_2 (int) ;

void FUNC_3 (void) {
  int VAR_12, VAR_13, VAR_14 = 0;
  char *VAR_15, *VAR_16;
  VAR_7 = VAR_0[VAR_11];
  if (FUNC_0 (VAR_7) < 0 || VAR_7 <= 0) {
    return;
  }
  if (VAR_1[VAR_10] == 2 && !FUNC_1 (VAR_4[VAR_10], "\\N")) {
    VAR_1[VAR_10] = 0;
    VAR_4[VAR_10][0] = 0;
  }
  if (VAR_1[VAR_10] <= 2 && !VAR_0[VAR_8]) {
    return;
  }
  VAR_14 = (VAR_4[VAR_10][0] == ' ');
  struct lev_add_message *VAR_17 = FUNC_2 (sizeof (struct lev_add_message) + VAR_1[VAR_10] + 1 - VAR_14);
  VAR_17->type = (VAR_14 ? VAR_3 + VAR_5 : VAR_2);
  VAR_17->user_id = VAR_7;
  VAR_17->legacy_id = VAR_0[VAR_9];
  VAR_17->peer_id = (int) 2e9;
  VAR_17->peer_msg_id = 0;
  VAR_17->date = VAR_0[VAR_8];
  VAR_17->ip = 0;
  VAR_17->port = 0;
  VAR_17->front = 0;
  VAR_17->ua_hash = 0;
  VAR_17->text_len = VAR_13 = VAR_1[VAR_10] - VAR_14;
  VAR_15 = VAR_17->text;
  VAR_16 = VAR_4[VAR_10] + VAR_14;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
    if ((unsigned char) VAR_16[VAR_12] < ' ' && VAR_16[VAR_12] != '\t') {
      *VAR_15++ = ' ';
    } else {
      *VAR_15++ = VAR_16[VAR_12];
    }
  }
  *VAR_15++ = 0;

  VAR_6++;
}
