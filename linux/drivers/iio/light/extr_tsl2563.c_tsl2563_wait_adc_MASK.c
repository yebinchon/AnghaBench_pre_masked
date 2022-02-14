
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsl2563_chip {TYPE_1__* gainlevel; } ;
struct TYPE_2__ {int gaintime; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tsl2563_chip *VAR_1)
{
 unsigned int VAR_2;

 switch (VAR_1->gainlevel->gaintime & VAR_0) {
 case 128:
  VAR_2 = 14;
  break;
 case 129:
  VAR_2 = 101;
  break;
 default:
  VAR_2 = 402;
 }




 FUNC_1(FUNC_0(VAR_2) + 2);
}
