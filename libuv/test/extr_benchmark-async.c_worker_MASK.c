
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {int loop; int main_async; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(void* VAR_1) {
  struct ctx* VAR_2 = VAR_1;
  FUNC_0(0 == FUNC_1(&VAR_2->main_async));
  FUNC_0(0 == FUNC_3(&VAR_2->loop, VAR_0));
  FUNC_2(&VAR_2->loop);
}
