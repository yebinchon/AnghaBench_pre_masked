
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucred*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_4, int VAR_5)
{


 if ((VAR_3 & VAR_1) == 0)
  return (0);

 switch (VAR_5) {
 case 128:
  if (!FUNC_0(VAR_4, VAR_2))
   return (VAR_0);
  break;
 default:
  break;
 }
 return (0);
}
