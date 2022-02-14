
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,char*,long long,long long,long long) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;

void FUNC_3 (void) {
  long long VAR_5 = VAR_0[0];
  char *VAR_6 = (char*)VAR_1[1];
  long long VAR_7 = VAR_5 / 1000000000000ll;
  long long VAR_8 = VAR_5 / 1000 % 1000000000;
  long long VAR_9 = VAR_5 % 1000;
  FUNC_2 (VAR_4, "lu%lld.%lld.%lld", VAR_8, VAR_7, VAR_9);
  if (VAR_3 > 1) {
    FUNC_1 (VAR_2, "store: %s\n", VAR_4);
  }
  FUNC_0 (VAR_4, VAR_6);
}
