
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 int VAR_1 ;
 long long* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,long long,int ,scalar_t__) ;
 int FUNC_2 (int,char*,long long) ;

void FUNC_3 (long long VAR_4) {
  FUNC_2 (2, "adding cluster with id = %lld\n", VAR_4 & VAR_0);
  VAR_2[VAR_3 ++] = VAR_4 & VAR_0;
  VAR_1 = FUNC_1 (VAR_1, VAR_4 & VAR_0, FUNC_0 (), VAR_3 - 1);
}
