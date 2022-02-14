
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tca6507_chip {TYPE_1__* bank; } ;
struct TYPE_2__ {int level; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tca6507_chip*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct tca6507_chip *VAR_2, int VAR_3, int VAR_4)
{
 switch (VAR_3) {
 case 130:
 case 129:
  FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_0(VAR_2, VAR_0, 0, VAR_4);
  break;
 }
 VAR_2->bank[VAR_3].level = VAR_4;
}
