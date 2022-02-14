
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alias_link {int dummy; } ;



 int VAR_0 ;

 int FUNC_0 (struct alias_link*) ;
 int FUNC_1 (struct alias_link*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(u_char VAR_4, struct alias_link *VAR_5)
{

 switch (FUNC_0(VAR_5)) {
 case 128:
  if (VAR_4 & VAR_2)
   FUNC_1(VAR_5, VAR_0);
  else if (VAR_4 & VAR_3)
   FUNC_1(VAR_5, 129);
  break;
 case 129:
  if (VAR_4 & (VAR_1 | VAR_2))
   FUNC_1(VAR_5, VAR_0);
  break;
 }
}
