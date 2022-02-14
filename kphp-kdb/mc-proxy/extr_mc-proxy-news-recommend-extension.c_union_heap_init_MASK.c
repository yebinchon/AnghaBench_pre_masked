
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct union_heap_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (int VAR_5) {
  if (VAR_1 < VAR_5) {
    if (VAR_1) {
      FUNC_1 (VAR_0);
    }
    VAR_0 = FUNC_2 (sizeof (struct union_heap_entry) * (VAR_5 + 1));
    FUNC_0 (VAR_0);
    VAR_1 = VAR_5;
  }
  FUNC_0 (VAR_5 <= VAR_1);
  VAR_2 = VAR_5;
  VAR_3 = 0;
  VAR_4 = 0;
}
