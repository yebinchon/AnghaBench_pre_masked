
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code_len; int len; char* str; } ;
typedef TYPE_1__ word_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

int FUNC_2 (word_t *VAR_0) {
  static char VAR_1[8];
  int VAR_2, VAR_3 = 1;
  FUNC_0 (VAR_0->code_len > 0 && VAR_0->code_len <= 32 && VAR_0->len < 256);
  VAR_1[0] = VAR_0->code_len;
  VAR_1[1] = VAR_0->len;
  FUNC_1 (VAR_1, 2);
  FUNC_1 (VAR_0->str, VAR_0->len);
  VAR_2 = VAR_0->len + 2;
  VAR_3 = -VAR_2 & 3;
  FUNC_1 (VAR_1+2, VAR_3);
  return VAR_2 + VAR_3;
}
