
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t lit_utf8_size_t ;
typedef char lit_utf8_byte_t ;
typedef int bytes ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (lit_utf8_byte_t *VAR_0, lit_utf8_size_t VAR_1)
{
  static const lit_utf8_byte_t VAR_2[] = "!@#$%^&*()_+abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
  static const lit_utf8_size_t VAR_3 = (lit_utf8_size_t) (sizeof (VAR_2) - 1);
  for (lit_utf8_size_t VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  {
    VAR_0[VAR_4] = VAR_2[(unsigned long) FUNC_0 () % VAR_3];
  }
}
