
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*) ;

void FUNC_9(void)
{
 u32 VAR_14, VAR_15[2] = { 0, 0 };
 unsigned int VAR_16;


 switch (FUNC_3()) {
 case 134:
  VAR_15[0] = VAR_4;
  break;
 case 133:
  VAR_15[0] = VAR_5;
  break;
 case 132:
  VAR_15[0] = VAR_6;
  break;
 case 131:
  VAR_15[0] = VAR_7;
  break;
 case 130:
  VAR_15[0] = VAR_8;
  break;
 case 129:
  VAR_15[0] = VAR_9;
  break;
 case 128:
  VAR_15[0] = VAR_10;
  break;
 }

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  if (!VAR_15[VAR_16])
   break;

  VAR_14 = FUNC_5(VAR_15[VAR_16]);
  if (FUNC_1()) {
   VAR_14 &= ~VAR_3;
   VAR_14 |= VAR_1;
  } else {
   VAR_14 &= ~VAR_2;
   VAR_14 |= VAR_0;
  }
  FUNC_6(VAR_14, VAR_15[VAR_16]);
 }

 if (FUNC_1() && (FUNC_4() == 0xa1))
  FUNC_2();

 FUNC_8("triggering watchdog soft-reset...\n");
 if (FUNC_0()) {
  FUNC_7(1, VAR_13);
 } else {
  VAR_14 = FUNC_5(VAR_11);
  VAR_14 |= VAR_12;
  FUNC_6(VAR_14, VAR_11);
 }
 while (1)
  ;
}
