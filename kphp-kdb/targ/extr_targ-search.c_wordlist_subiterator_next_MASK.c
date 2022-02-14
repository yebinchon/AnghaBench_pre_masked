
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordlist_subiterator {int pos; int mult; int mdec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int FUNC_1 (struct wordlist_subiterator *VAR_1) {
  int VAR_2 = FUNC_0 (VAR_1->mdec, &VAR_1->mult);
  return VAR_1->pos = (VAR_2 < 0x7fffffff ? VAR_2 : VAR_0);
}
