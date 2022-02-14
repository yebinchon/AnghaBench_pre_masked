
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum notes_merge_strategy { ____Placeholder_notes_merge_strategy } notes_merge_strategy ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char**) ;
 int FUNC_3 (char const*,int ,char*) ;
 scalar_t__ FUNC_4 (char*,int*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0,
      enum notes_merge_strategy *VAR_1)
{
 char *VAR_2;

 if (FUNC_2(VAR_0, &VAR_2))
  return 1;
 if (FUNC_4(VAR_2, VAR_1))
  FUNC_3(VAR_0, FUNC_0("unknown notes merge strategy %s"), VAR_2);

 FUNC_1(VAR_2);
 return 0;
}
