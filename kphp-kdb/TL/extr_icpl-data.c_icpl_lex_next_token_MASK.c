
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int start; int type; } ;
typedef TYPE_1__ icpl_token_t ;


 int FUNC_0 (char const*,int,TYPE_1__*) ;
 int FUNC_1 (int,char*,int,char const*,int ) ;

__attribute__((used)) static int FUNC_2 (const char *VAR_0, int *VAR_1, icpl_token_t *VAR_2) {
  int VAR_3 = FUNC_0 (VAR_0, *VAR_1, VAR_2);
  if (VAR_3 < 0) {
    return VAR_3;
  }
  FUNC_1 (4, "token: %.*s, type: %d\n", VAR_2->length, VAR_0 + VAR_2->start, VAR_2->type);
  *VAR_1 = VAR_2->start + VAR_2->length;
  return VAR_3;
}
