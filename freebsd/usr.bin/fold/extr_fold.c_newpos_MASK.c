
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, wint_t VAR_3)
{
 char VAR_4[VAR_0];
 size_t VAR_5;
 int VAR_6;

 if (VAR_1) {
  VAR_5 = FUNC_0(VAR_4, VAR_3, ((void*)0));
  VAR_2 += VAR_5;
 } else
  switch (VAR_3) {
  case '\b':
   if (VAR_2 > 0)
    --VAR_2;
   break;
  case '\r':
   VAR_2 = 0;
   break;
  case '\t':
   VAR_2 = (VAR_2 + 8) & ~7;
   break;
  default:
   if ((VAR_6 = FUNC_1(VAR_3)) > 0)
    VAR_2 += VAR_6;
   break;
  }

 return (VAR_2);
}
