
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {int status; int qid; } ;


 int FUNC_0 (int (*) (struct rpc_query*,double)) ;
 int FUNC_1 (int (*) (struct rpc_query*,double)) ;
 double VAR_0 ;
 int VAR_1 ;





 int FUNC_2 (double) ;
 int FUNC_3 (struct rpc_query*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6 (struct rpc_query *VAR_3, double VAR_4) {
  if (!VAR_3) {

    return -1;
  }
  FUNC_1 (FUNC_6);
  FUNC_5 ();
  while (VAR_4 > VAR_0 && (VAR_3->status == 128 || VAR_3->status == 129 || VAR_3->status == 130)) {
    FUNC_2 (VAR_4);
    FUNC_5 ();
  }
  switch (VAR_3->status) {
  case 128:
  case 129:
  case 130:
    FUNC_3 (VAR_3);
    VAR_2 ++;
    FUNC_0 (FUNC_6);
    return -1;
  case 131:
    VAR_1 = FUNC_4 (VAR_1, VAR_3->qid);
    FUNC_0 (FUNC_6);
    return 1;
  case 132:
    VAR_1 = FUNC_4 (VAR_1, VAR_3->qid);
    FUNC_3 (VAR_3);
    FUNC_0 (FUNC_6);
    return -1;
  }
  FUNC_0 (FUNC_6);
  return 0;
}
