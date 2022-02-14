
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {size_t qid; double timeout; int start_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct rpc_query*,int ,int) ;
 int VAR_5 ;
 struct rpc_query* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;

__attribute__((used)) static struct rpc_query *FUNC_5 (double VAR_10) {
  FUNC_0 (VAR_9);
  FUNC_2 (VAR_9);
  if (VAR_8 > VAR_0 / 2) {
    FUNC_1 (VAR_9);
    return 0;
  }
  VAR_3 ++;
  while (VAR_6[(VAR_3 - VAR_2) & VAR_1].qid >= VAR_2) { VAR_3 ++; }
  int VAR_11 = (VAR_3 - VAR_2) & VAR_1;
  if (VAR_11 >= VAR_4) {
    VAR_4 = VAR_11 + 1;
  }

  long long VAR_12 = VAR_3;
  FUNC_4 ();
  struct rpc_query *VAR_13 = &VAR_6[(VAR_12 - VAR_2) & VAR_1];
  FUNC_3 (VAR_13, 0, sizeof (*VAR_13));
  VAR_13->qid = VAR_12;
  VAR_13->start_time = VAR_5;
  VAR_13->timeout = VAR_10;




  VAR_8 ++;
  VAR_7 ++;
  FUNC_1 (VAR_9);
  return VAR_13;
}
