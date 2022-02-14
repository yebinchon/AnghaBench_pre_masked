
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char const*,struct object_id const*,int,void*) ;
 int FUNC_1 (char const*,struct object_id const*,int ) ;
 int FUNC_2 (char const*,struct object_id const*,int,void*) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, const struct object_id *VAR_3,
          int VAR_4, void *VAR_5)
{




 const char *VAR_6;
 int VAR_7 = FUNC_3(VAR_2);
 for (VAR_6 = VAR_2; *VAR_6 && VAR_1 < VAR_7; )
  if (*VAR_6++ == '/')
   VAR_7--;
 if (!*VAR_6)
  return 0;
 if (FUNC_5(VAR_0, VAR_6, 0))
  return 0;
 if (FUNC_4(VAR_2, "refs/heads/"))
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (FUNC_4(VAR_2, "refs/tags/"))
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 return FUNC_1(VAR_2, VAR_3, 0);
}
