
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {long long prog_id; struct forth_request* hnext; } ;


 struct forth_request** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct forth_request *FUNC_0 (long long VAR_2) {
  unsigned VAR_3 = ((unsigned) VAR_2) & (VAR_1 - 1);
  struct forth_request **VAR_4 = VAR_0 + VAR_3, *VAR_5;
  while (*VAR_4) {
    VAR_5 = *VAR_4;
    if (VAR_5->prog_id == VAR_2) {
      *VAR_4 = VAR_5->hnext;
      VAR_5->hnext = VAR_0[VAR_3];
      VAR_0[VAR_3] = VAR_5;
      return VAR_5;
    }
    VAR_4 = &VAR_5->hnext;
  }
  return 0;
}
