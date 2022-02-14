
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {int argc; int argn; char** argv; scalar_t__ prompt; int cx; int bundle; } ;


 int FUNC_0 (int ,scalar_t__,int,int,char const**,scalar_t__,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (char*,unsigned int*,unsigned int*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (scalar_t__,char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_4)
{
  if (VAR_4->argc > VAR_4->argn) {
    char const *VAR_5[3];
    unsigned VAR_6, VAR_7;
    int VAR_8;

    if ((VAR_5[0] = FUNC_1(VAR_4->argv[VAR_4->argn-1], &VAR_6, &VAR_7)) == ((void*)0))
      return -1;
    VAR_5[2] = ((void*)0);

    for (VAR_8 = VAR_4->argn; VAR_8 < VAR_4->argc; VAR_8++) {
      VAR_5[1] = VAR_4->argv[VAR_8];
      FUNC_0(VAR_4->bundle, VAR_3 + (VAR_6 == VAR_1 ?
               0 : VAR_2), 2, 1, VAR_5, VAR_4->prompt, VAR_4->cx);
    }
  } else if (VAR_4->prompt)
    FUNC_3(VAR_4->prompt, "Use `%s ?' to get a list.\n",
     VAR_4->argv[VAR_4->argn-1]);
  else
    FUNC_2(VAR_0, "%s command must have arguments\n",
              VAR_4->argv[VAR_4->argn] );

  return 0;
}
