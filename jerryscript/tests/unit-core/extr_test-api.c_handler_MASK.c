
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ jerry_value_t ;
typedef int jerry_size_t ;
typedef int jerry_length_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (scalar_t__ const,int *,int) ;
 int FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (scalar_t__ const) ;
 int FUNC_6 (char*,unsigned int,unsigned int,void*,unsigned int) ;
 int FUNC_7 (char*,char*,size_t) ;

__attribute__((used)) static jerry_value_t
FUNC_8 (const jerry_value_t VAR_0,
         const jerry_value_t VAR_1,
         const jerry_value_t VAR_2[],
         const jerry_length_t VAR_3)
{
  char VAR_4[32];
  jerry_size_t VAR_5;

  FUNC_6 ("ok %u %u %p %u\n",
          (unsigned int) VAR_0, (unsigned int) VAR_1, (void *) VAR_2, (unsigned int) VAR_3);

  FUNC_0 (VAR_3 == 2);

  FUNC_0 (FUNC_5 (VAR_2[0]));
  VAR_5 = FUNC_2 (VAR_2[0]);
  FUNC_0 (VAR_5 == 1);
  VAR_5 = FUNC_3 (VAR_2[0],
                                    (jerry_char_t *) VAR_4,
                                    VAR_5);
  FUNC_0 (VAR_5 == 1);
  FUNC_0 (!FUNC_7 (VAR_4, "1", (size_t) VAR_5));

  FUNC_0 (FUNC_4 (VAR_2[1]));

  return FUNC_1 ((jerry_char_t *) "string from handler");
}
