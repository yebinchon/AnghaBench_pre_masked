
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ jerry_value_t ;
typedef scalar_t__ jerry_length_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,unsigned int,unsigned int,void*,unsigned int) ;

__attribute__((used)) static jerry_value_t
FUNC_2 (const jerry_value_t VAR_1,
                    const jerry_value_t VAR_2,
                    const jerry_value_t VAR_3[],
                    const jerry_length_t VAR_4)
{
  FUNC_1 ("ok %u %u %p %u\n",
          (unsigned int) VAR_1, (unsigned int) VAR_2, (void *) VAR_3, (unsigned int) VAR_4);

  return FUNC_0 (VAR_0, (jerry_char_t *) "error");
}
