
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn_query {scalar_t__ start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (int ,char*,struct conn_query*,double) ;
 double FUNC_2 (int ) ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct conn_query*,int) ;

int FUNC_4 (struct conn_query *VAR_5) {
  if (VAR_5->start_time > 0) {
    double VAR_6 = FUNC_2 (VAR_0) - VAR_5->start_time;
    VAR_3 += VAR_6;
    if (VAR_4 > 1) {
      FUNC_1 (VAR_2, "delete_aio_query(%p): query time %.6f\n", VAR_5, VAR_6);
    }
  }
  VAR_1--;
  FUNC_0 (VAR_5);
  FUNC_3 (VAR_5, sizeof (struct conn_query));
  return 0;
}
