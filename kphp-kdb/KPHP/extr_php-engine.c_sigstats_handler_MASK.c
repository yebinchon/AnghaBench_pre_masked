
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sival_int; } ;
struct TYPE_5__ {scalar_t__ si_code; TYPE_1__ si_value; } ;
typedef TYPE_2__ siginfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2 (int VAR_5, siginfo_t *VAR_6, void *VAR_7) {
  FUNC_0 (VAR_6 != ((void*)0), "SIGPOLL with no info");
  if (VAR_6->si_code == VAR_0) {
    int VAR_8 = VAR_6->si_value.sival_int;
    if ((VAR_8 & 0xFFFF0000)== VAR_3) {
      if (VAR_8 & VAR_1) {
        VAR_4++;
      }
      if (VAR_8 & VAR_2) {
        FUNC_1();
      }
    }
  }
}
