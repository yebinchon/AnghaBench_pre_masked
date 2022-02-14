
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int dummy; } ;
struct connection {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct raw_message*,void*,int) ;
 int FUNC_2 (struct connection*,struct raw_message*,int ) ;

void FUNC_3 (struct connection *VAR_0, int VAR_1, void *VAR_2) {
  FUNC_0 (!(VAR_1 & 3));
  struct raw_message VAR_3;
  FUNC_0 (FUNC_1 (&VAR_3, VAR_2, VAR_1) == VAR_1);
  FUNC_2 (VAR_0, &VAR_3, 0);
}
