
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct frameheader {int len; int * data; } ;


 struct frameheader* VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;

int
FUNC_1(u_char const **VAR_1, unsigned VAR_2, int VAR_3)
{
  const struct frameheader *VAR_4;
  const u_char *VAR_5;
  size_t VAR_6, VAR_7;

  while (VAR_2) {
    for (VAR_4 = VAR_0; VAR_4->len; VAR_4++) {
      VAR_5 = VAR_3 ? VAR_4->data + 1 : VAR_4->data;
      VAR_6 = VAR_3 ? VAR_4->len - 1 : VAR_4->len;
      VAR_7 = VAR_2 >= VAR_6 ? VAR_6 : VAR_2;
      if (FUNC_0(*VAR_1, VAR_5, VAR_7) == 0)
        return VAR_7 == VAR_6;
    }
    VAR_2--;
    (*VAR_1)++;
  }

  return 0;
}
