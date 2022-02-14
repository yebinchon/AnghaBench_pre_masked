
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_replace_text_long {int type; char* text; int text_len; int user_id; } ;
struct lev_replace_text {char* text; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

void FUNC_4 (struct lev_replace_text_long *VAR_14) {
  int VAR_15;
  char *VAR_16;

  if (VAR_14->type == VAR_1) {
    VAR_16 = VAR_14->text;
    VAR_15 = VAR_14->text_len;
  } else {
    FUNC_0 ((VAR_14->type & -0x1000) == VAR_0);
    VAR_16 = ((struct lev_replace_text *) VAR_14)->text;
    VAR_15 = VAR_14->type & 0xfff;
  }

  int VAR_17 = FUNC_2 (VAR_14->user_id);

  if (VAR_17 < 0) {
    VAR_6++;
    return;
  }

  FUNC_0 (VAR_2[VAR_17]);

  FUNC_3 (VAR_16, VAR_15);

  if (VAR_12) {
    int VAR_18 = FUNC_1 (VAR_16, VAR_15);
    VAR_13 += VAR_18;
    VAR_5[VAR_17] += VAR_18;
    if (VAR_5[VAR_17] > VAR_9) {
      VAR_9 = VAR_5[VAR_17];
      VAR_8 = VAR_14->user_id;
    }
  }

  VAR_11++;
  VAR_10 += VAR_15;

  FUNC_0 (VAR_17 <= VAR_7);

  VAR_4[VAR_17]++;
  VAR_3[VAR_17] += VAR_15;
}
