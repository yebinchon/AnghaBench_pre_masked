
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {double timeout; int answer_len; int answer; scalar_t__ start_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rpc_query*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct rpc_query*,double) ;
 int FUNC_7 (struct rpc_query*) ;
 struct rpc_query* FUNC_8 (long long) ;

int FUNC_9 (long long VAR_2, double VAR_3) {
  FUNC_0 (VAR_1);
  FUNC_2 (VAR_1);
  struct rpc_query *VAR_4 = FUNC_8 (VAR_2);
  if (!VAR_4) {
    FUNC_1 (VAR_1);
    return -1;
  }
  if (VAR_3 >= 0) {
    VAR_3 += VAR_4->start_time;
  } else {
    VAR_3 = VAR_4->timeout;
  }
  int VAR_5 = FUNC_6 (VAR_4, VAR_3);

  if (VAR_5 < 0) {
    FUNC_1 (VAR_1);
    return -1;
  } else {
    if (VAR_0) {
      VAR_0 = FUNC_5 (VAR_0);
    }

    FUNC_3 (VAR_4);
    VAR_0 = FUNC_4 (VAR_4->answer, VAR_4->answer_len);
    FUNC_7 (VAR_4);
    FUNC_1 (VAR_1);
    return 1;
  }
}
