
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static bool
FUNC_2(unsigned int VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, unsigned int VAR_5,
    bool VAR_6)
{
 if (VAR_2 == VAR_4 && VAR_3 == VAR_5)
  return 1;

 if (VAR_6 || !VAR_2 || !VAR_3 || !VAR_4 || !VAR_5)
  return 0;

 FUNC_0(VAR_0 > VAR_1);

 if (VAR_3 > VAR_5) {
  while (VAR_3 > VAR_5) {
   VAR_4 <<= 1;
   VAR_5 <<= 1;
  }
 } else if (VAR_3 < VAR_5) {
  while (VAR_3 < VAR_5) {
   VAR_2 <<= 1;
   VAR_3 <<= 1;
  }
 }

 if (VAR_3 != VAR_5)
  return 0;

 return FUNC_1(VAR_2, VAR_4);
}
