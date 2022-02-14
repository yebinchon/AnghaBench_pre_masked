
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct raw_message*,int ) ;
 int FUNC_2 (struct raw_message*,void*,int) ;
 int FUNC_3 (struct raw_message*) ;

__attribute__((used)) static inline void FUNC_4 (void *VAR_1, int VAR_2) {
  struct raw_message VAR_3;
  FUNC_1 (&VAR_3, VAR_0);
  FUNC_0 (FUNC_2 (&VAR_3, VAR_1, VAR_2) == VAR_2);
  FUNC_3 (&VAR_3);
}
