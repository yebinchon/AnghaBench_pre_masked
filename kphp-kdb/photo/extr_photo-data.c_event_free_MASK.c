
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int event ;


 int FUNC_0 (int *,long long) ;
 int VAR_0 ;
 long long VAR_1 ;
 long long FUNC_1 (int *) ;

void FUNC_2 (event *VAR_2) {
  if (VAR_2 == ((void*)0)) {
    return;
  }

  long long VAR_3 = FUNC_1 (VAR_2);
  VAR_1 -= VAR_3;

  VAR_0--;

  FUNC_0 (VAR_2, VAR_3);
}
