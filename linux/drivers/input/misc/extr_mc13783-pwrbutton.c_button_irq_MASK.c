
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13783_pwrb {int flags; int pwr; int * keymap; int mc13783; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct mc13783_pwrb *VAR_10 = VAR_9;
 int VAR_11;

 FUNC_2(VAR_10->mc13783, VAR_8);
 FUNC_3(VAR_10->mc13783, VAR_7, &VAR_11);

 switch (VAR_8) {
 case 130:
  VAR_11 = VAR_11 & VAR_1 ? 1 : 0;
  if (VAR_10->flags & VAR_4)
   VAR_11 ^= 1;
  FUNC_0(VAR_10->pwr, VAR_10->keymap[0], VAR_11);
  break;

 case 129:
  VAR_11 = VAR_11 & VAR_2 ? 1 : 0;
  if (VAR_10->flags & VAR_5)
   VAR_11 ^= 1;
  FUNC_0(VAR_10->pwr, VAR_10->keymap[1], VAR_11);
  break;

 case 128:
  VAR_11 = VAR_11 & VAR_3 ? 1 : 0;
  if (VAR_10->flags & VAR_6)
   VAR_11 ^= 1;
  FUNC_0(VAR_10->pwr, VAR_10->keymap[2], VAR_11);
  break;
 }

 FUNC_1(VAR_10->pwr);

 return VAR_0;
}
