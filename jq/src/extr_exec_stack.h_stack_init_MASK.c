
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ limit; int bound; scalar_t__ mem_end; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct stack* VAR_1) {
  VAR_1->mem_end = 0;
  VAR_1->bound = VAR_0;
  VAR_1->limit = 0;
}
