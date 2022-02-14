
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_word {int sum; int num; int word_tree; } ;
typedef int hash_t ;


 int VAR_0 ;
 struct hash_word* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int,int,int *) ;

void FUNC_2 (int VAR_1, hash_t VAR_2) {
  struct hash_word *VAR_3 = FUNC_0 (VAR_2, 1);
  VAR_3->word_tree = FUNC_1 (VAR_0, VAR_3->word_tree, VAR_1, 1, &VAR_3->num);
  ++VAR_3->sum;
}
