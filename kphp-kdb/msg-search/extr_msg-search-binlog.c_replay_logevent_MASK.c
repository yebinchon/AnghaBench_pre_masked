
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_event {int type; int user_id; int msg_id; } ;
typedef int hash_t ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;



 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_8 (struct log_event *VAR_10, int VAR_11) {
  int VAR_12 = VAR_10->type - VAR_0;
  hash_t *VAR_13;

  if (VAR_11 < 4) { return -2; }

  if ((unsigned) VAR_12 < VAR_1 - VAR_0) {
    if (VAR_11 < VAR_12 * 8 + 12) { return -1; }
    if (!VAR_6) {
      VAR_13 = FUNC_1 (VAR_10->user_id, VAR_10->msg_id, VAR_12);
      FUNC_0 (VAR_13);
      FUNC_7 (VAR_13, ((char *) VAR_10) + 12, VAR_12 * 8);
    }
    return VAR_12 * 8 + 12;
  }

  switch (VAR_10->type) {
  case 130:
    return 4;
  case 132:
    if (VAR_11 < 12) { return -2; }
    if (!VAR_6) {
      FUNC_3 (FUNC_5 (VAR_10->user_id, 1), VAR_10->msg_id);
    }
    return 12;
  case 128:
    if (VAR_11 < 12) { return -2; }
    FUNC_4 (FUNC_5 (VAR_10->user_id, 1), VAR_10->msg_id);
    return 12;
  case 131:
    if (VAR_11 < 12) { return -2; }
    FUNC_2 (FUNC_5 (VAR_10->user_id, 1), VAR_10->msg_id);
    return 12;
  case 129:
    if (VAR_11 < 8) { return -2; }
    if (!VAR_3) {
      VAR_3 = VAR_10->user_id;
    }
    if (VAR_5 > VAR_10->user_id) {
      FUNC_6 (VAR_8, "time goes back from %d to %d in log file\n", VAR_5, VAR_10->user_id);
    }
    VAR_5 = VAR_10->user_id;
    if (VAR_10->user_id >= VAR_7 && !VAR_6) {
      VAR_2 = VAR_4 - VAR_11;
      VAR_6 = 1;
      if (VAR_9) {
 FUNC_6 (VAR_8, "reached timestamp %d above cutoff %d at binlog position %lld, entering scan mode 1\n",
   VAR_10->user_id, VAR_7, (long long) VAR_2);
      }
    }
    return 8;
  }
  FUNC_6 (VAR_8, "unknown magic in log file: %08x\n", VAR_10->type);
  return -1;
}
