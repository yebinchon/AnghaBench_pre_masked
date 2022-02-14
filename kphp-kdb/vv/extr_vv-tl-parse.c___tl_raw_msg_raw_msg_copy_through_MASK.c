
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct raw_message*,int ) ;
 int FUNC_1 (struct raw_message*,int ,int) ;
 int FUNC_2 (struct raw_message*,int) ;
 int FUNC_3 (int ,struct raw_message*) ;

__attribute__((used)) static inline void FUNC_4 (int VAR_2, int VAR_3) {
  if (!VAR_3) {
    struct raw_message VAR_4;
    FUNC_0 (&VAR_4, VAR_0);
    FUNC_2 (&VAR_4, VAR_2);
    FUNC_3 (VAR_1, &VAR_4);
  } else {
    struct raw_message VAR_5;
    FUNC_1 (&VAR_5, VAR_0, VAR_2);
    FUNC_3 (VAR_1, &VAR_5);
  }
}
