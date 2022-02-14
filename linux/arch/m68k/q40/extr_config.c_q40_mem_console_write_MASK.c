
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 unsigned int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(struct console *VAR_2, const char *VAR_3,
      unsigned int VAR_4)
{
 const char *VAR_5 = VAR_3;

 if (VAR_4 < VAR_0) {
  while (VAR_4-- > 0) {
   *VAR_1 = *VAR_5++;
   VAR_1 += 4;
   VAR_0--;
  }
 }
}
