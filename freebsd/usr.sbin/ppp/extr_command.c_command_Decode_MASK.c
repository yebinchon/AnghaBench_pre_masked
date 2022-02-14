
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int dummy; } ;
struct bundle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char**,int ) ;
 int FUNC_1 (struct bundle*,int,char const* const*,struct prompt*,char const*,int *) ;

int
FUNC_2(struct bundle *VAR_1, char *VAR_2, int VAR_3, struct prompt *VAR_4,
              const char *VAR_5)
{
  int VAR_6;
  char *VAR_7[VAR_0];

  if ((VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_7, 0)) < 0)
    return 0;

  FUNC_1(VAR_1, VAR_6, (char const *const *)VAR_7, VAR_4, VAR_5, ((void*)0));
  return 1;
}
