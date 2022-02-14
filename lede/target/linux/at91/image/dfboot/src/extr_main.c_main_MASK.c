
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_24__ {unsigned int pData; } ;
struct TYPE_23__ {int (* Read ) (TYPE_3__*,char*,unsigned int volatile,int ,int ) ;} ;
struct TYPE_22__ {int (* Stop ) (TYPE_2__*) ;int (* Start ) (TYPE_2__*,int ,int ,int (*) (),int *) ;} ;
struct TYPE_21__ {int pages_number; int pages_size; } ;
struct TYPE_20__ {TYPE_1__ Device; int id; } ;
struct TYPE_19__ {int (* CRC32 ) (unsigned char const*,unsigned int volatile,unsigned int*) ;int (* OpenPipe ) (TYPE_3__*,int ,int ) ;int (* OpenSvcXmodem ) (TYPE_4__*,int ,TYPE_10__*) ;int (* OpenSBuffer ) (int *) ;int SYSTIMER_DESC; int (* OpenCtlTempo ) (TYPE_10__*,void*) ;} ;
struct TYPE_18__ {int (* CtlTempoCreate ) (TYPE_10__*,TYPE_2__*) ;int (* CtlTempoStart ) (void*) ;} ;
typedef TYPE_2__ AT91S_SvcTempo ;
typedef int AT91PS_USART ;
typedef int AT91PS_SvcComm ;
typedef int AT91PS_Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int volatile VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_14__* VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (char*,char*) ;
 int VAR_11 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,unsigned int*) ;


 scalar_t__ FUNC_10 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 () ;
 TYPE_10__ VAR_14 ;
 TYPE_15__* VAR_15 ;
 int FUNC_12 (unsigned int) ;
 char* VAR_16 ;
 TYPE_14__* VAR_17 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (unsigned int,unsigned int volatile,char*) ;
 int VAR_18 ;
 int FUNC_15 (TYPE_10__*,void*) ;
 int FUNC_16 (unsigned char const*,unsigned int volatile,unsigned int*) ;
 int FUNC_17 (unsigned char const*,unsigned int volatile,unsigned int*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (TYPE_10__*,TYPE_2__*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_4__*,int ,TYPE_10__*) ;
 int FUNC_22 (TYPE_3__*,int ,int ) ;
 int FUNC_23 (TYPE_2__*,int ,int ,int (*) (),int *) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_3__*,char*,unsigned int volatile,int ,int ) ;
 TYPE_4__ VAR_19 ;
 int FUNC_26 (unsigned int,unsigned int volatile,unsigned int volatile) ;
 TYPE_3__ VAR_20 ;

int FUNC_27(void)
{




 AT91S_SvcTempo VAR_21;
 unsigned int VAR_22;
 volatile unsigned int VAR_23, VAR_24;
  unsigned int VAR_25 = 0;
 char VAR_26 = 0;






 volatile int VAR_27 = 0;
 int VAR_28 = 0;

 VAR_17 = VAR_10;

 if (!FUNC_6())
 {
  FUNC_13("F SetPLL");
  while(1);
 }

 FUNC_11();


 VAR_17->OpenCtlTempo(&VAR_14, (void *) &(VAR_17->SYSTIMER_DESC));
 VAR_14.CtlTempoStart((void *) &(VAR_17->SYSTIMER_DESC));


 VAR_14.CtlTempoCreate(&VAR_14, &VAR_21);
 FUNC_0(
  VAR_2,
  VAR_8,
  VAR_0,
  VAR_1,
  VAR_11
 );

 FUNC_1(VAR_2, VAR_8);




 VAR_21.Start(&VAR_21, VAR_5,
                    0, FUNC_7, ((void*)0));


 while(1)
 {
  while(VAR_26 == 0)
  {
   VAR_23 = VAR_6;
   VAR_24 = VAR_7;
   VAR_25 = 0;


   if (!VAR_27)
    VAR_27 = FUNC_2();

   VAR_28 = FUNC_3();
   VAR_16[0] = 0;
   FUNC_5 ("Enter: ", VAR_16);



   VAR_21.Stop(&VAR_21);


   VAR_26 = VAR_16[0];
   for(VAR_22 = 1; (VAR_16[VAR_22] == ' ') && (VAR_22 < 12); VAR_22++);

   if(!FUNC_9(&VAR_16[VAR_22], &VAR_25) )
    VAR_25 = 0;

   switch(VAR_26)
   {
    case '3':
     if (VAR_28)
      FUNC_10();
     VAR_26 = 0;
     break;

    case '4':
     FUNC_7();
     VAR_26 = 0;
    break;
    case '7':
     switch(VAR_25 & 0xFF000000)
     {
      case 129:
       break;
      case 128:
       break;
      default:
       VAR_26 = 0;
       break;
     }

     if (VAR_26 != 0) {
      FUNC_5 ("RDY ERA\nSure?",
        VAR_16);
      if(VAR_16[0] == 'Y' || VAR_16[0] == 'y') {
       FUNC_12(VAR_25 & 0xFF000000);

      }


     }
     VAR_26 = 0;

    break;

    default:
     VAR_26 = 0;
    break;
   }
  }
  }
}
