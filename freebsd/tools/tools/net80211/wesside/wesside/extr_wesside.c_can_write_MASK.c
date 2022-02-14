
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cipher; } ;
struct TYPE_3__ {int prga; int len; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 unsigned char* VAR_12 ;
 int FUNC_6 (int,int ,int ,int ,char*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ,int ) ;
 int VAR_13 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (char*,char*) ;

void FUNC_13(int VAR_16) {
 static char VAR_17[16];

 switch (VAR_13) {
  case 130:
   FUNC_8(VAR_16);
   VAR_13 = VAR_2;
   break;

  case 128:
   FUNC_7(VAR_16);
   VAR_13 = VAR_1;
   break;

  case 129:
   if (VAR_11.prga && VAR_11.len < VAR_6) {
    FUNC_2(VAR_16);
    break;
   }

   if (VAR_4.cipher) {
    FUNC_1(VAR_16);
    break;
   }

   if (!VAR_11.prga)
    break;

   if (VAR_15) {
    FUNC_9(VAR_16, VAR_14, VAR_15);
    VAR_15 = 0;
    break;
   }


   if (VAR_9 && !VAR_12) {
    char* VAR_18;

    FUNC_11(VAR_17, VAR_9);
    if (!VAR_10) {
     VAR_18 = FUNC_10(VAR_17, '.');
     FUNC_0(VAR_18);
     VAR_18 = FUNC_10(++VAR_18, '.');
     FUNC_0(VAR_18);
     VAR_18 = FUNC_10(++VAR_18, '.');
     FUNC_0(VAR_18);
     FUNC_11(++VAR_18, "1");
    }

    if (FUNC_5(&VAR_3, ((void*)0)) == -1)
     FUNC_3(1, "gettimeofday()");

    FUNC_12("Sending arp request for: %s\n", VAR_17);
    FUNC_6(VAR_16, VAR_0, VAR_7, VAR_8,
      VAR_17, "\x00\x00\x00\x00\x00\x00");


    VAR_12 = (unsigned char*)1;
    break;
   }


   if (VAR_12 > (unsigned char*)1 && VAR_9) {
    if (VAR_5)
     FUNC_4(VAR_16);
    else {




     FUNC_6(VAR_16, VAR_0, VAR_7, VAR_8,
       VAR_17, "\x00\x00\x00\x00\x00\x00");
    }

    break;
   }

   break;
 }
}
