
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {long long prog_id; struct forth_request* hnext; } ;


 struct forth_request** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0 (struct forth_request *VAR_3) {
  long long VAR_4 = VAR_3->prog_id;
  unsigned VAR_5 = ((unsigned) VAR_4) & (VAR_1 - 1);
  struct forth_request **VAR_6 = VAR_0 + VAR_5, *VAR_7;
  while (*VAR_6) {
    VAR_7 = *VAR_6;
    if (VAR_7 == VAR_3) {
      *VAR_6 = VAR_7->hnext;
      VAR_2--;
      return 1;
    }
    VAR_6 = &VAR_7->hnext;
  }
  return 0;
}
