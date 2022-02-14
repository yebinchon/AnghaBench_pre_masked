
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {char* buf; int len; } ;
typedef TYPE_1__ out_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int const*,int const) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (out_t *VAR_1, const u8 *VAR_2, const int VAR_3)
{
  char *VAR_4 = VAR_1->buf + VAR_1->len;

  FUNC_0 (VAR_4, VAR_2, VAR_3);
  VAR_4[VAR_3] = '\n';

  VAR_1->len += VAR_3 + 1;



  if (VAR_1->len >= VAR_0 - 300)
  {
    FUNC_1 (VAR_1);
  }
}
