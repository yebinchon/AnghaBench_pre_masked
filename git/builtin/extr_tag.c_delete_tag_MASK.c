
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const*,struct object_id const*,int ) ;
 char* FUNC_2 (struct object_id const*,int ) ;
 int FUNC_3 (char*,char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2,
        const struct object_id *VAR_3, const void *VAR_4)
{
 if (FUNC_1(((void*)0), VAR_2, VAR_3, 0))
  return 1;
 FUNC_3(FUNC_0("Deleted tag '%s' (was %s)\n"), VAR_1,
        FUNC_2(VAR_3, VAR_0));
 return 0;
}
