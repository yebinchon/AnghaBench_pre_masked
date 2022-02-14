
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct condition_with_hash {void* word2; void* word; void* false_branch; void* true_branch; int eval; } ;
typedef void* hash_t ;
typedef void* condition_t ;
typedef int condition_func_t ;


 struct condition_with_hash* FUNC_0 (int) ;

__attribute__((used)) static condition_t FUNC_1 (hash_t VAR_0, hash_t VAR_1, condition_t VAR_2, condition_t VAR_3, condition_func_t VAR_4) {
  struct condition_with_hash *VAR_5 = FUNC_0 (sizeof (struct condition_with_hash));
  VAR_5->eval = VAR_4;
  VAR_5->true_branch = VAR_2;
  VAR_5->false_branch = VAR_3;
  VAR_5->word = VAR_0;
  VAR_5->word2 = VAR_1;
  return (condition_t) VAR_5;
}
