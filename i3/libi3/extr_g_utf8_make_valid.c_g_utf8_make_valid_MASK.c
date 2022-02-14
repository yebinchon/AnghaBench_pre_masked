
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ gssize ;
typedef int gsize ;
typedef int gchar ;
struct TYPE_7__ {int const* str; } ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,int const*,int) ;
 int * FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (int) ;
 int * FUNC_7 (int const*,scalar_t__) ;
 scalar_t__ FUNC_8 (int const*,int,int const**) ;
 scalar_t__ FUNC_9 (int const*) ;

gchar *
FUNC_10 (const gchar *VAR_1,
                   gssize VAR_2)
{
  GString *VAR_3;
  const gchar *VAR_4, *VAR_5;
  gsize VAR_6, VAR_7;

  FUNC_1 (VAR_1 != ((void*)0), ((void*)0));

  if (VAR_2 < 0)
    VAR_2 = FUNC_9 (VAR_1);

  VAR_3 = ((void*)0);
  VAR_4 = VAR_1;
  VAR_6 = VAR_2;

  while (VAR_6 != 0)
    {
      if (FUNC_8 (VAR_4, VAR_6, &VAR_5))
 break;
      VAR_7 = VAR_5 - VAR_4;

      if (VAR_3 == ((void*)0))
 VAR_3 = FUNC_6 (VAR_6);

      FUNC_4 (VAR_3, VAR_4, VAR_7);

      FUNC_2 (VAR_3, "\357\277\275");

      VAR_6 -= VAR_7 + 1;
      VAR_4 = VAR_5 + 1;
    }

  if (VAR_3 == ((void*)0))
    return FUNC_7 (VAR_1, VAR_2);

  FUNC_4 (VAR_3, VAR_4, VAR_6);
  FUNC_3 (VAR_3, '\0');

  FUNC_0 (FUNC_8 (VAR_3->str, -1, ((void*)0)));

  return FUNC_5 (VAR_3, VAR_0);
}
