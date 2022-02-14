
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*,struct object_id*,char const**) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, int *VAR_1, int *VAR_2,
       struct object_id *VAR_3, struct object_id *VAR_4,
       char *VAR_5)
{
 if (*VAR_0 != ':')
  return FUNC_0("expected ':', got '%c'", *VAR_0);
 *VAR_1 = (int)FUNC_3(VAR_0 + 1, &VAR_0, 8);
 if (*VAR_0 != ' ')
  return FUNC_0("expected ' ', got '%c'", *VAR_0);
 *VAR_2 = (int)FUNC_3(VAR_0 + 1, &VAR_0, 8);
 if (*VAR_0 != ' ')
  return FUNC_0("expected ' ', got '%c'", *VAR_0);
 if (FUNC_2(++VAR_0, VAR_3, (const char **)&VAR_0))
  return FUNC_0("expected object ID, got '%s'", VAR_0);
 if (*VAR_0 != ' ')
  return FUNC_0("expected ' ', got '%c'", *VAR_0);
 if (FUNC_2(++VAR_0, VAR_4, (const char **)&VAR_0))
  return FUNC_0("expected object ID, got '%s'", VAR_0);
 if (*VAR_0 != ' ')
  return FUNC_0("expected ' ', got '%c'", *VAR_0);
 *VAR_5 = *++VAR_0;
 if (!*VAR_5)
  return FUNC_0("missing status");
 if (VAR_0[1] && !FUNC_1(VAR_0[1]))
  return FUNC_0("unexpected trailer: '%s'", VAR_0 + 1);
 return 0;
}
