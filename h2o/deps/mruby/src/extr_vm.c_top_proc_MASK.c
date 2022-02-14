
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {struct RProc* upper; } ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (struct RProc*) ;
 scalar_t__ FUNC_1 (struct RProc*) ;

__attribute__((used)) static inline struct RProc*
FUNC_2(mrb_state *VAR_0, struct RProc *VAR_1)
{
  while (VAR_1->upper) {
    if (FUNC_0(VAR_1) || FUNC_1(VAR_1))
      return VAR_1;
    VAR_1 = VAR_1->upper;
  }
  return VAR_1;
}
