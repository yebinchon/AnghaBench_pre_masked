
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int processor_id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_14 ;
 int const FUNC_2 () ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_3 (int,int) ;
 void* FUNC_4 (int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_5(void)
{
 if (VAR_8 || VAR_9)
  VAR_6 = 8;
 else
  VAR_6 = 4;

 if (VAR_8)
  VAR_7 = 8;
 else
  VAR_7 = 4;
 if (VAR_13) {




  VAR_5 = FUNC_0();
  switch (FUNC_2()) {
  case 131:
  case 128:

   VAR_18 = 256;
   break;

  case 135:
  case 134:
  case 133:
  case 132:




   VAR_17 = 512;
   VAR_18 = 256;
   VAR_19 = 256;
   VAR_21 = VAR_1;
   VAR_20 = VAR_4;
   break;

  case 130:
  case 129:
   VAR_17 = 128;
   VAR_18 = 128;
   VAR_19 = 128;




   if (FUNC_2() == 130 &&
       (VAR_14.processor_id & 0xff) < 0x02) {
    VAR_21 = VAR_0;
    VAR_20 = VAR_3;
   } else {
    VAR_21 = VAR_1;
    VAR_20 = VAR_4;
   }
   break;

  case 136:

   VAR_17 = 128;
   VAR_18 = 128;
   VAR_19 = 128;
   VAR_21 = VAR_0;
   VAR_20 = VAR_3;
   break;

  default:
   VAR_17 = 128;
   VAR_18 = 256;
   VAR_19 = 128;
   VAR_21 = VAR_1;
   if (VAR_12)





    VAR_20 = VAR_4;
   else
    VAR_20 = VAR_2;
   break;
  }
 } else {
  if (VAR_11)
   VAR_5 = FUNC_1();
  else if (VAR_10)
   VAR_5 = FUNC_0();
 }




 VAR_15 = FUNC_4(16 * VAR_6,
       FUNC_3(VAR_5 >> 1,
           4 * VAR_6));
 VAR_16 = FUNC_4(16 * VAR_7,
      FUNC_3(VAR_5 >> 1,
          4 * VAR_7));
}
