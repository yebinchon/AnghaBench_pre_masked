
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordlist_subiterator {int pos; int mult; int mdec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (struct wordlist_subiterator*) ;

int FUNC_3 (struct wordlist_subiterator *VAR_1, int VAR_2) {
  if (VAR_2 == VAR_1->pos + 1) {
    return FUNC_2 (VAR_1);
  } else {
    FUNC_0 (VAR_2 > VAR_1->pos);
    int VAR_3 = FUNC_1 (VAR_1->mdec, VAR_2, &VAR_1->mult);
    return VAR_1->pos = (VAR_3 < 0x7fffffff ? VAR_3 : VAR_0);
  }
}
