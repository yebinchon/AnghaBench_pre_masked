
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_size_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static bool
FUNC_5 (const jerry_value_t VAR_2,
             jerry_value_t *VAR_3)
{
  jerry_size_t VAR_4 = FUNC_2 (VAR_2);
  FUNC_0 (VAR_0, VAR_1, VAR_4);
  FUNC_3 (VAR_2, VAR_1, VAR_4);

  if (!FUNC_4 ((char *) VAR_1, "cache-check", VAR_4))
  {
    (*VAR_3) = FUNC_1 ();
    return 1;
  }
  return 0;
}
