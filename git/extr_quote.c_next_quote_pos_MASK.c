
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (char const) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0, ssize_t VAR_1)
{
 size_t VAR_2;
 if (VAR_1 < 0) {
  for (VAR_2 = 0; !FUNC_0(VAR_0[VAR_2]); VAR_2++);
 } else {
  for (VAR_2 = 0; VAR_2 < VAR_1 && !FUNC_0(VAR_0[VAR_2]); VAR_2++);
 }
 return VAR_2;
}
