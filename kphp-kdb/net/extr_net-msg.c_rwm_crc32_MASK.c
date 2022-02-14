
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct raw_message*,int,void*,unsigned int*) ;

unsigned FUNC_2 (struct raw_message *VAR_1, int VAR_2) {
  unsigned VAR_3 = ~0;

  FUNC_0 (FUNC_1 (VAR_1, VAR_2, (void *)VAR_0, &VAR_3) == VAR_2);

  return ~VAR_3;
}
