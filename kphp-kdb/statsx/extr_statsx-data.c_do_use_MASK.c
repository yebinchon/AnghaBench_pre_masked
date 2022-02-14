
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {scalar_t__ next_use; scalar_t__ prev_use; } ;


 int FUNC_0 (struct counter*) ;
 int FUNC_1 (struct counter*) ;

__attribute__((used)) static void FUNC_2 (struct counter *VAR_0) {
  if (VAR_0->prev_use && VAR_0->next_use) {
    FUNC_1 (VAR_0);
    FUNC_0 (VAR_0);
  }
}
