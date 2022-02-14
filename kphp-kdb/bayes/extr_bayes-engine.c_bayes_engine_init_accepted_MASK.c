
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
typedef int message ;


 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4 (struct connection *VAR_2) {
  if (VAR_1 > 1) {
    FUNC_1 (VAR_0, "bayes_engine_init_accepted\n");
  }
  FUNC_3 (FUNC_0 (VAR_2), 0, sizeof (message));
  return FUNC_2 (VAR_2);
}
