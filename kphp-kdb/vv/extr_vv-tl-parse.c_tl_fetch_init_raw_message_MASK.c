
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int dummy; } ;


 int FUNC_0 (struct raw_message*,int ,int ,int *,int) ;
 int FUNC_1 (struct raw_message*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3 (struct raw_message *VAR_3, int VAR_4) {
  struct raw_message *VAR_5 = (struct raw_message *)FUNC_2 (sizeof (*VAR_5));
  *VAR_5 = *VAR_3;
  VAR_0 ++;
  FUNC_1 (VAR_3);
  return FUNC_0 (VAR_5, 0, VAR_2, &VAR_1, VAR_4);
}
