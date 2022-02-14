
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int str; } ;
typedef TYPE_1__ word_t ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1 (word_t *VAR_0, word_t *VAR_1) {
  int VAR_2 = VAR_0->len, VAR_3 = VAR_1->len;
  int VAR_4 = FUNC_0 (VAR_0->str, VAR_1->str, VAR_2 < VAR_3 ? VAR_2 : VAR_3);
  return VAR_4 ? VAR_4 : VAR_2 - VAR_3;
}
