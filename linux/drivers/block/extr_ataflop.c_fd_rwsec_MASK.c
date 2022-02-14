
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int stretch; int spt; } ;
struct TYPE_3__ {unsigned char dma_lo; unsigned char dma_md; unsigned char dma_hi; int dma_mode_status; int fdc_acces_seccount; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_8 ;
 int FUNC_4 () ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ) ;
 TYPE_2__* VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (unsigned long,int,int) ;
 TYPE_1__ VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_22 ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 unsigned short VAR_25 ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 unsigned long FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16( void )
{
 unsigned long VAR_26, VAR_27;
 unsigned int VAR_28, VAR_29;
 unsigned int VAR_30;

 FUNC_1(("fd_rwsec(), Sec=%d, Access=%c\n",VAR_16, VAR_14 == VAR_19 ? 'w' : 'r' ));
 if (VAR_14 == VAR_19) {
  if (FUNC_0(VAR_1)) {
   VAR_26 = FUNC_15(VAR_15);
  }
  else {
   FUNC_6( VAR_15, VAR_0 );
   VAR_26 = VAR_12;
  }
  FUNC_7( VAR_26, 512, 1 );
  VAR_28 = 0x100;
 }
 else {
  if (VAR_23)
   VAR_26 = VAR_13;
  else
   VAR_26 = FUNC_0(VAR_1) ?
    FUNC_15(VAR_15) : VAR_12;
  VAR_28 = 0;
 }

 FUNC_8( VAR_17 );


 FUNC_3( VAR_5, VAR_23 ? 1 : VAR_16 );
 FUNC_4();

 if (VAR_18->stretch) {
  VAR_30 = FUNC_2( VAR_6);
  FUNC_4();
  FUNC_3( VAR_6, VAR_30 >> VAR_18->stretch);
 }
 FUNC_14(25);


 FUNC_11(VAR_27);
 VAR_20.dma_lo = (unsigned char)VAR_26;
 FUNC_4();
 VAR_26 >>= 8;
 VAR_20.dma_md = (unsigned char)VAR_26;
 FUNC_4();
 VAR_26 >>= 8;
 if (FUNC_0(VAR_1))
  VAR_25 = (unsigned short)VAR_26;
 else
  VAR_20.dma_hi = (unsigned char)VAR_26;
 FUNC_4();
 FUNC_10(VAR_27);


 VAR_20.dma_mode_status = 0x90 | VAR_28;
 FUNC_4();
 VAR_20.dma_mode_status = 0x90 | (VAR_28 ^ 0x100);
 FUNC_4();
 VAR_20.dma_mode_status = 0x90 | VAR_28;
 FUNC_4();


 VAR_20.fdc_acces_seccount = VAR_23 ? VAR_18->spt : 1;

 FUNC_14(25);


 VAR_20.dma_mode_status = VAR_7 | VAR_28;
 FUNC_14(25);
 FUNC_5( VAR_21 );
 VAR_20.fdc_acces_seccount =
   (FUNC_9() |
    (VAR_28 ? VAR_4 : (VAR_3 | (VAR_23 ? VAR_2 : 0))));

 VAR_29 = VAR_9;
 VAR_9 = 1;
 VAR_11 = 1;


 if (VAR_23) {





  VAR_10 = 1;
  FUNC_12(&VAR_24,

     VAR_22 + VAR_8/5 + (VAR_29 ? 0 : VAR_8));
 }
 FUNC_13();
}
