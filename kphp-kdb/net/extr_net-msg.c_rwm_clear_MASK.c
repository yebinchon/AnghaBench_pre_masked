
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {scalar_t__ magic; scalar_t__ first; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct raw_message*) ;

void FUNC_3 (struct raw_message *VAR_2) {
  FUNC_0 (VAR_2->magic == VAR_0 || VAR_2->magic == VAR_1);
  if (VAR_2->first) {
    FUNC_1 (VAR_2->first);
  }
  FUNC_2 (VAR_2);
}
