
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather_entry {int res_read; int* data; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0 (struct gather_entry *VAR_3) {
  int VAR_4 = (VAR_3->res_read >> 2) - 1;
  int *VAR_5 = VAR_3->data;
  int VAR_6;

  if (VAR_4 > VAR_0) { VAR_4 = VAR_0; }
  if (VAR_4 > VAR_2) { VAR_2 = VAR_4; }
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    VAR_1[VAR_6] += *VAR_5++;
  }
}
