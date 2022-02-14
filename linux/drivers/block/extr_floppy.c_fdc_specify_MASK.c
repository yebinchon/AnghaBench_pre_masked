
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long srt; unsigned long hlt; unsigned long hut; } ;
struct TYPE_5__ {scalar_t__ version; unsigned char spec1; unsigned char spec2; scalar_t__ need_configure; } ;
struct TYPE_4__ {int rate; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned long,int ) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_7(void)
{
 unsigned char VAR_13;
 unsigned char VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18 = VAR_8;
 unsigned long VAR_19 = VAR_8;
 int VAR_20 = 0x7f;
 int VAR_21 = 0xf;

 if (VAR_1->need_configure && VAR_1->version >= VAR_3) {
  FUNC_4();
  VAR_1->need_configure = 0;
 }

 switch (VAR_10->rate & 0x03) {
 case 3:
  VAR_18 = 1000;
  break;
 case 1:
  VAR_18 = 300;
  if (VAR_1->version >= VAR_4) {


   FUNC_6(VAR_5);
   if (FUNC_5() == VAR_7) {
    FUNC_6(FUNC_3(VAR_9));
    FUNC_6(0xc0);
   }
  }
  break;
 case 2:
  VAR_18 = 250;
  break;
 }

 if (VAR_1->version >= VAR_2) {
  VAR_19 = VAR_18;
  VAR_20 = 0x00;
  VAR_21 = 0x0;
 }


 VAR_15 = 16 - FUNC_0(VAR_0->srt * VAR_19 / 1000, VAR_8);
 if (VAR_11)
  VAR_15 = VAR_15 / 4;

 FUNC_2(VAR_15, 0xf);
 FUNC_1(VAR_15, 0);

 VAR_16 = FUNC_0(VAR_0->hlt * VAR_19 / 2, VAR_8);
 if (VAR_16 < 0x01)
  VAR_16 = 0x01;
 else if (VAR_16 > 0x7f)
  VAR_16 = VAR_20;

 VAR_17 = FUNC_0(VAR_0->hut * VAR_19 / 16, VAR_8);
 if (VAR_17 < 0x1)
  VAR_17 = 0x1;
 else if (VAR_17 > 0xf)
  VAR_17 = VAR_21;

 VAR_13 = (VAR_15 << 4) | VAR_17;
 VAR_14 = (VAR_16 << 1) | (VAR_12 & 1);


 if (VAR_1->spec1 != VAR_13 || VAR_1->spec2 != VAR_14) {

  FUNC_6(VAR_6);
  FUNC_6(VAR_1->spec1 = VAR_13);
  FUNC_6(VAR_1->spec2 = VAR_14);
 }
}
