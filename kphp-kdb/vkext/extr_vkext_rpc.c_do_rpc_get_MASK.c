
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {double timeout; char* answer; int answer_len; scalar_t__ start_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rpc_query*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct rpc_query*,double) ;
 int FUNC_5 (struct rpc_query*) ;
 struct rpc_query* FUNC_6 (long long) ;

int FUNC_7 (long long VAR_2, double VAR_3, char **VAR_4) {
  FUNC_0 (VAR_0);
  FUNC_2 (VAR_0);
  struct rpc_query *VAR_5 = FUNC_6 (VAR_2);
  if (!VAR_5) {
    FUNC_1 (VAR_0);
    return -1;
  }
  if (VAR_3 >= 0) {
    VAR_3 += VAR_5->start_time;
  } else {
    VAR_3 = VAR_5->timeout;
  }
  int VAR_6 = FUNC_4 (VAR_5, VAR_3);
  if (VAR_6 < 0) {
    FUNC_1 (VAR_0);
    return -1;
  } else {

    FUNC_3 (VAR_5);
    *VAR_4 = VAR_5->answer;
    int VAR_7 = VAR_5->answer_len;
    FUNC_5 (VAR_5);
    FUNC_1 (VAR_1);
    return VAR_7;
  }
}
