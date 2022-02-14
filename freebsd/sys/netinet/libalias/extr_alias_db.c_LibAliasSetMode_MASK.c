
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {unsigned int packetAliasMode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;
 int FUNC_3 (struct libalias*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_4 (struct libalias*) ;
 int FUNC_5 (struct libalias*) ;

unsigned int
FUNC_6(
    struct libalias *VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5

)
{
 int VAR_6 = -1;

 FUNC_2(VAR_3);

 if (VAR_4 & VAR_5 & VAR_1) {

  if (FUNC_0(VAR_3) == VAR_0)
   goto getout;
 } else

 if (~VAR_4 & VAR_5 & VAR_1) {
  FUNC_4(VAR_3);
 }


 if (VAR_4 & VAR_5 & VAR_2) {
  FUNC_1(VAR_3);
 } else

 if (~VAR_4 & VAR_5 & VAR_2) {
  FUNC_5(VAR_3);
 }



 VAR_3->packetAliasMode = (VAR_4 & VAR_5) | (VAR_3->packetAliasMode & ~VAR_5);
 VAR_6 = VAR_3->packetAliasMode;
getout:
 FUNC_3(VAR_3);
 return (VAR_6);
}
