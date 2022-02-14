
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_failure {scalar_t__ size; int * prog; int prog_id; int total; } ;
struct forth_request {scalar_t__ size; int * prog; int prog_id; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (struct stat_failure *VAR_0, struct forth_request *VAR_1) {
  VAR_0->total++;
  VAR_0->prog_id = VAR_1->prog_id;
  if (VAR_0->prog) {
    FUNC_0 (VAR_0->prog);
  }
  VAR_0->prog = VAR_1->prog;
  VAR_0->size = VAR_1->size;
  VAR_1->prog = ((void*)0);
  VAR_1->size = 0;
}
