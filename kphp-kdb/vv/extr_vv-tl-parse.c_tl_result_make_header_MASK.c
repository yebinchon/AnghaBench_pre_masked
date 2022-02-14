
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long FUNC_0 (int) ;
 long long FUNC_1 () ;
 int FUNC_2 (int ) ;

int FUNC_3 (int *VAR_3, struct tl_query_header *VAR_4) {
  int *VAR_5 = VAR_3;
  if (!VAR_4->flags) { return 0; }
  int VAR_6 = FUNC_2 (VAR_4->flags);
  *VAR_5 = VAR_0;
  VAR_5++;
  *VAR_5 = VAR_6;
  VAR_5 ++;
  if (VAR_6 & VAR_1) {
    *(long long *)VAR_5 = FUNC_1 ();
    VAR_5 += 2;
  }
  if (VAR_6 & VAR_2) {
    *(long long *)VAR_5 = FUNC_0 (1000000);
    VAR_5 += 2;
  }
  return (VAR_5 - VAR_3) * 4;
}
