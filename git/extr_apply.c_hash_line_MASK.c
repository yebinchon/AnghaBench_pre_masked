
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char const) ;

__attribute__((used)) static uint32_t FUNC_1(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 uint32_t VAR_3;
 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!FUNC_0(VAR_0[VAR_2])) {
   VAR_3 = VAR_3 * 3 + (VAR_0[VAR_2] & 0xff);
  }
 }
 return VAR_3;
}
