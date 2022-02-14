
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static s64 FUNC_3(unsigned long VAR_3)
{
 s64 VAR_4 = VAR_0;

 while (1) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 <= 0)
   break;

  if (VAR_2 < VAR_1)
   FUNC_2(1000 * VAR_4);
  else
   FUNC_0(VAR_4);
 }

 return VAR_4;
}
