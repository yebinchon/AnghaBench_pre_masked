
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int stretch; } ;
struct TYPE_3__ {unsigned char dma_lo; unsigned char dma_md; unsigned char dma_hi; int dma_mode_status; int fdc_acces_seccount; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 () ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 TYPE_2__* VAR_9 ;
 int FUNC_6 (unsigned long,int,int) ;
 TYPE_1__ VAR_10 ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 unsigned short VAR_12 ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13( void )
{
 unsigned long VAR_13, VAR_14;
 unsigned int VAR_15;

 FUNC_1(("fd_writetrack() Tr=%d Si=%d\n", VAR_8, VAR_7 ));

 VAR_13 = VAR_6;
 FUNC_6( VAR_13, VAR_0, 1 );

 FUNC_7( VAR_7 );


 if (VAR_9->stretch) {
  VAR_15 = FUNC_2( VAR_3);
  FUNC_4();
  FUNC_3(VAR_3,VAR_15 >> VAR_9->stretch);
 }
 FUNC_12(40);


 FUNC_10(VAR_14);
 VAR_10.dma_lo = (unsigned char)VAR_13;
 FUNC_4();
 VAR_13 >>= 8;
 VAR_10.dma_md = (unsigned char)VAR_13;
 FUNC_4();
 VAR_13 >>= 8;
 if (FUNC_0( VAR_1 ))
  VAR_12 = (unsigned short)VAR_13;
 else
  VAR_10.dma_hi = (unsigned char)VAR_13;
 FUNC_4();
 FUNC_9(VAR_14);


 VAR_10.dma_mode_status = 0x190;
 FUNC_4();
 VAR_10.dma_mode_status = 0x90;
 FUNC_4();
 VAR_10.dma_mode_status = 0x190;
 FUNC_4();


 VAR_10.fdc_acces_seccount = VAR_0/512;
 FUNC_12(40);


 VAR_10.dma_mode_status = VAR_4 | 0x100;
 FUNC_12(40);
 FUNC_5( VAR_11 );
 VAR_10.fdc_acces_seccount = VAR_2 | FUNC_8();

 VAR_5 = 1;
 FUNC_11();

}
