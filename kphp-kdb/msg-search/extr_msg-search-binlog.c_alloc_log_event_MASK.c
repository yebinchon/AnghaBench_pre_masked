
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_event {int type; int user_id; int msg_id; } ;
typedef int hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;

hash_t *FUNC_3 (int VAR_11, int VAR_12, int VAR_13, int VAR_14) {
  int VAR_15 = 12 + 8 * VAR_14;
  struct log_event *VAR_16;
  if (!VAR_2) {
    return 0;
  }
  if (VAR_11 == VAR_0) {
    VAR_15 = 8;
    VAR_12 = VAR_9 ? VAR_9 : FUNC_2(0);
    if (VAR_5 < VAR_12) {
      VAR_5 = VAR_12;
    }
  } else if (VAR_9 > VAR_5 + VAR_1) {
    FUNC_3 (VAR_0, 0, 0, 0);
  }
  if (VAR_15 > VAR_3 - VAR_8) {
    VAR_4 = VAR_8;
    VAR_8 = VAR_7;
  }
  if (VAR_8 < VAR_6 && VAR_8 + VAR_15 >= VAR_6) {
    FUNC_1 (VAR_10, "fatal: binlog buffer overflow!\n");
    FUNC_0(3);
  }
  VAR_16 = (struct log_event *) VAR_8;
  VAR_8 += VAR_15;

  VAR_16->type = VAR_11;
  VAR_16->user_id = VAR_12;

  if (VAR_11 == VAR_0) {
    return 0;
  }

  VAR_16->msg_id = VAR_13;
  return (hash_t *) (((char *) VAR_16) + 12);
}
