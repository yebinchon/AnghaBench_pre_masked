
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4 (void) {
  VAR_2 = VAR_4 + 1 + FUNC_2 (VAR_0);
  VAR_1 = FUNC_3 (VAR_2 + 1);
  FUNC_0 (FUNC_1 (VAR_1, "%s/%s", VAR_3, VAR_0) == VAR_2);
}
