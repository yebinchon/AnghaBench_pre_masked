
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int,long long) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 scalar_t__* VAR_0 ;

int FUNC_3 (struct connection *VAR_1, long long VAR_2, int VAR_3) {
  FUNC_0 (FUNC_2 (&VAR_1->In, VAR_0, VAR_3) == VAR_3);
  VAR_0[VAR_3] = 0;
  return FUNC_1 (VAR_0, VAR_3, VAR_2);
}
