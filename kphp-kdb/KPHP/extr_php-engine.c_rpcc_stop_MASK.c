
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
struct conn_target {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct conn_target* VAR_1 ;
 int FUNC_0 () ;
 struct connection* FUNC_1 (struct conn_target*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct connection*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_3 () {
  if (VAR_3 != -1) {
    struct conn_target *VAR_6 = &VAR_1[VAR_3];
    struct connection *VAR_7 = FUNC_1 (VAR_6, 0);
    if (VAR_7 != ((void*)0)) {
      FUNC_2 (VAR_7);
    }
    FUNC_0();
  }
  VAR_4 = 1;
  VAR_5 = VAR_2 + VAR_0;
}
