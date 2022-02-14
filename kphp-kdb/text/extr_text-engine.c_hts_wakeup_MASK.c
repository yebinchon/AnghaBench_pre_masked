
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts_data {int extra_int3; int query_flags; int extra_int2; int extra_int; } ;
struct connection {scalar_t__ status; int parse_state; } ;


 struct hts_data* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int * VAR_5 ;
 int FUNC_7 (struct connection*,char*,int) ;
 int FUNC_8 (struct connection*,int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (struct connection*,int) ;

int FUNC_11 (struct connection *VAR_9) {
  struct hts_data *VAR_10 = FUNC_0(VAR_9);
  static char VAR_11[4096];
  int VAR_12, VAR_13, VAR_14;

  VAR_6 = VAR_10->extra_int;
  VAR_8 = VAR_10->extra_int2;
  VAR_7 = VAR_10->extra_int3;

  FUNC_1 (VAR_9->status == VAR_2 || VAR_9->status == VAR_3);
  VAR_9->status = VAR_2;
  FUNC_2 (VAR_9);

  if (!(VAR_10->query_flags & VAR_0)) {
    VAR_9->status = VAR_4;
    VAR_9->parse_state = -1;
  }

  if (VAR_7 & 16) {
    VAR_12 = FUNC_4 (VAR_6, VAR_8, 0, VAR_1);
    VAR_14 = FUNC_5 (VAR_6);
  } else {
    VAR_12 = FUNC_3 (VAR_6, VAR_8, 0, VAR_1);
    VAR_14 = FUNC_6 (VAR_6, 1);
  }

  if (VAR_14 < 0) {
    VAR_5[3]++;
    FUNC_7 (VAR_9, "{\"failed\":3}\r\n", -1);
    return 0;
  }

  if (VAR_12 < 0) {
    VAR_5[1]++;
    VAR_13 = FUNC_9 (VAR_11, "{\"failed\":1,\"ts\":%d}\r\n", VAR_14);
    FUNC_7 (VAR_9, VAR_11, VAR_13);
    return 0;
  }
  VAR_12 = FUNC_8 (VAR_9, VAR_1, VAR_12, VAR_14);

  if (VAR_12 < 0) {
    FUNC_10 (VAR_9, -VAR_12);
  }

  return 0;
}
