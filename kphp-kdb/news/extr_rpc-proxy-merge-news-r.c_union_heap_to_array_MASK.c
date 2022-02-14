
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct news_item {scalar_t__ weight; } ;
struct TYPE_2__ {struct news_item entry; } ;


 TYPE_1__* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct news_item) ;

__attribute__((used)) static void FUNC_2 (void) {
  int VAR_4;
  VAR_3 = VAR_2;
  for (VAR_4 = VAR_2; VAR_4 >= 2; VAR_4--) {
    struct news_item VAR_5 = VAR_0[VAR_4].entry;
    FUNC_0 (VAR_0[1].entry.weight <= VAR_5.weight);
    VAR_0[VAR_4].entry = VAR_0[1].entry;
    VAR_2 --;
    VAR_1 = VAR_2;
    FUNC_1 (VAR_5);
  }
}
