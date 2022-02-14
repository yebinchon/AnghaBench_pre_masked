
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {scalar_t__ priority; } ;


 struct forth_request** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0 (struct forth_request *VAR_2, int VAR_3) {
  while (1) {
    int VAR_4 = VAR_3 << 1;
    if (VAR_4 > VAR_1) { break; }
    if (VAR_4 < VAR_1 && VAR_0[VAR_4]->priority > VAR_0[VAR_4+1]->priority) {
      VAR_4++;
    }
    if (VAR_2->priority <= VAR_0[VAR_4]->priority) { break; }
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_3 = VAR_4;
  }
  VAR_0[VAR_3] = VAR_2;
}
