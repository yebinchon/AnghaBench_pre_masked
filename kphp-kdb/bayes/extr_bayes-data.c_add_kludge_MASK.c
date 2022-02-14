
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,int,long long) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;

void FUNC_2 (int VAR_6, int VAR_7) {
  if (VAR_2) {
    FUNC_1 (VAR_3, "KLUDGE %d %d\n", VAR_6, VAR_7);
  }
  FUNC_0 ("KLUDGE %d %d | %lld\n", VAR_6, VAR_7, (long long)(ll)((ll)(VAR_1 + VAR_6) * VAR_0 + VAR_7));
  VAR_4[VAR_5++] = (ll)(VAR_1 + VAR_6) * VAR_0 + VAR_7;
}
