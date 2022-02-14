
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* jerry_value_t ;
typedef size_t jerry_size_t ;
typedef int jerry_char_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (void* const,int *,int) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_4 (const jerry_value_t VAR_0,
                   const jerry_value_t VAR_1,
                   void *VAR_2)
{
  FUNC_0 (VAR_1);
  FUNC_0 (VAR_2);
  char VAR_3[128];
  jerry_size_t VAR_4 = FUNC_2 (VAR_0, (jerry_char_t *) VAR_3, 128);
  VAR_3[VAR_4] = '\0';

  if (!FUNC_3 (VAR_3, "foxtrot", (size_t) VAR_4))
  {
    FUNC_1 (0);
  }

  return 1;
}
