
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int baud ;
struct TYPE_2__ {int bi_plb_busfreq; int bi_intfreq; int bi_procfreq; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*,char*,unsigned long*,int) ;
 int FUNC_6 (unsigned char*) ;

__attribute__((used)) static void FUNC_7(void)
{
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22, VAR_23, VAR_24, VAR_25;
 unsigned long VAR_26;
 unsigned long VAR_27;
 unsigned short VAR_28;
 unsigned long VAR_29;
 unsigned short VAR_30;
 unsigned short VAR_31;
 unsigned long VAR_32;
 unsigned long VAR_33;
 void *VAR_34;


 VAR_11 = (FUNC_6((unsigned char *)0x80000000) == 0xc) ? 66666666 : 33333000;




 VAR_12 = FUNC_0(VAR_1);
 VAR_13 = FUNC_0(VAR_0);




 VAR_17 = ((VAR_12 & VAR_5) >> 16);




 VAR_18 = ((VAR_12 & VAR_6) >> 8);
 if (VAR_18 == 0)
  VAR_18 = 8;




 VAR_19 = ((VAR_12 & VAR_4) >> 24);
 if (VAR_19 == 0)
  VAR_19 = 256;




 VAR_14 = FUNC_0(VAR_2);




 VAR_20 = ((VAR_14 & VAR_9) >> 16);
 if (VAR_20 == 0)
  VAR_20 = 16;




 VAR_21 = (VAR_14 & VAR_7);
 if (VAR_21 == 0)
  VAR_21 = 16;




 VAR_22 = ((VAR_14 & VAR_8) >> 8);
 if (VAR_22 == 0)
  VAR_22 = 16;





 VAR_25 = (VAR_11 *VAR_19) /VAR_22;

 VAR_23 = (VAR_11 * VAR_19) / VAR_21;

 VAR_15 = ((VAR_11 * ((VAR_13 & VAR_3) ?
        VAR_18 : VAR_17) *
      VAR_19) / VAR_18);

 VAR_34 = FUNC_4("serial0");
 if (FUNC_5(VAR_34, "current-speed", &VAR_33, sizeof(VAR_33)) != sizeof(VAR_33))
  FUNC_3("no current-speed property\n\r");

 VAR_29 = 256;
 VAR_26 = VAR_15 / (16 * VAR_33);
 VAR_27 = (VAR_15 / VAR_25) << 1;
 VAR_28 = 256;





 for (VAR_16 = 256; VAR_16 > VAR_27; VAR_16--) {
  VAR_31 = VAR_26 / VAR_16;
  VAR_32 = VAR_16 * VAR_31;
  VAR_30 = (VAR_32 > VAR_26) ? (VAR_32-VAR_26) : (VAR_26-VAR_32);
  if (VAR_30 == 0) {
   VAR_29 = VAR_16;
   break;
  } else if (VAR_30 < VAR_28) {
   VAR_29 = VAR_16;
   VAR_28 = VAR_30;
  }
 }
 VAR_24 = VAR_15 / VAR_29;

 FUNC_2(VAR_10.bi_procfreq, VAR_10.bi_intfreq, VAR_10.bi_plb_busfreq);
 FUNC_1("/plb/ebc", VAR_23);
 FUNC_1("/plb/opb", VAR_25);
 FUNC_1("/plb/opb/serial@ef600300", VAR_24);
 FUNC_1("/plb/opb/serial@ef600400", VAR_24);
}
