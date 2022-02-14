
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mode_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;

void FUNC_2 (int VAR_1, mode_t VAR_2) {
  if (VAR_1) {
    if (FUNC_0 (VAR_0, VAR_2) < 0) {
      FUNC_1 ("chmod 0%o \"%s\" fail. %m\n", (int) VAR_2, VAR_0);
    }
  }
}
