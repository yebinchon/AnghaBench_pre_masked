
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,long long) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int*,char*) ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

void FUNC_3 (int *VAR_5) {


  char VAR_6[10000];
  FUNC_2 (VAR_5, VAR_6);

  if (VAR_1) {
    FUNC_1 (VAR_2, "WORD %s\n", VAR_6);
  }

  ll VAR_7 = 0;
  while (*VAR_5) {
    VAR_7 = (VAR_7 * VAR_0) + *VAR_5++;
  }

  FUNC_0 ("WORD %s | %lld\n", VAR_6, (long long)((ll)VAR_7));

  VAR_3[VAR_4++] = VAR_7;
}
