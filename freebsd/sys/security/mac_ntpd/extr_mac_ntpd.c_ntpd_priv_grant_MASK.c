
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_uid; } ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct ucred *VAR_3, int VAR_4)
{

 if (VAR_1 && VAR_3->cr_uid == VAR_2) {
  switch (VAR_4) {
  case 132:
  case 131:
  case 128:
  case 130:
  case 129:
   return (0);
  default:
   break;
  }
 }
 return (VAR_0);
}
