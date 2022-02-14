
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct raw_message* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct raw_message*) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_3 (void) {
  FUNC_0 (VAR_0);
  FUNC_1 (VAR_3);
  *VAR_3 = *(struct raw_message *)VAR_0;
  FUNC_2 (VAR_0, sizeof (struct raw_message));
  VAR_0 = 0;
  int VAR_5 = VAR_2 - VAR_1;
  VAR_2 -= VAR_5;
  VAR_4 += VAR_5;
}
