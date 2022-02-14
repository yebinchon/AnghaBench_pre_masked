
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4 (const int VAR_3) {
  FUNC_3 (VAR_2, "%s caught, terminating program\n", VAR_3 == VAR_1 ? "SIGSEGV" : "SIGABRT");
  FUNC_1();
  FUNC_2();
  FUNC_0 (VAR_0);
}
