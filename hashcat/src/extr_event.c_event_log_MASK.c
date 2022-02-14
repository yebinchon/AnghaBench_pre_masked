
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 size_t FUNC_0 (size_t,size_t const) ;
 size_t FUNC_1 (char*,size_t const,char const*,int ) ;

__attribute__((used)) __attribute__ ((format (printf, 1, 0)))
static int FUNC_2 (const char *VAR_0, va_list VAR_1, char *VAR_2, const size_t VAR_3)
{
  size_t VAR_4;

  VAR_4 = FUNC_1 (VAR_2, VAR_3, VAR_0, VAR_1);
  VAR_4 = FUNC_0 (VAR_4, VAR_3);

  VAR_2[VAR_4] = 0;

  return (int) VAR_4;
}
