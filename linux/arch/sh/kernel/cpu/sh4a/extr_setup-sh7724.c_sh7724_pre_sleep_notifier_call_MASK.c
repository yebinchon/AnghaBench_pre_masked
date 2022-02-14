
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int mmselr; int rwtcnt; int rwtcsr; void* spuclk; void* irdaclk; void* imr12; void* imr11; void* imr10; void* imr9; void* imr8; void* imr7; void* imr6; void* imr5; void* imr4; void* imr3; void* imr2; void* imr1; void* imr0; void* iprl; void* iprk; void* iprj; void* ipri; void* iprh; void* iprg; void* iprf; void* ipre; void* iprd; void* iprc; void* iprb; void* ipra; void* cs6bwcr; void* cs6awcr; void* cs5bwcr; void* cs5awcr; void* cs4wcr; void* cs6bbcr; void* cs6abcr; void* cs5bbcr; void* cs5abcr; void* cs4bcr; void* cs0bcr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 if (!(VAR_4 & VAR_1))
  return VAR_0;


 VAR_2.mmselr = FUNC_1(0xff800020);
 VAR_2.mmselr |= 0xa5a50000;
 VAR_2.cs0bcr = FUNC_1(0xfec10004);
 VAR_2.cs4bcr = FUNC_1(0xfec10010);
 VAR_2.cs5abcr = FUNC_1(0xfec10014);
 VAR_2.cs5bbcr = FUNC_1(0xfec10018);
 VAR_2.cs6abcr = FUNC_1(0xfec1001c);
 VAR_2.cs6bbcr = FUNC_1(0xfec10020);
 VAR_2.cs4wcr = FUNC_1(0xfec10030);
 VAR_2.cs5awcr = FUNC_1(0xfec10034);
 VAR_2.cs5bwcr = FUNC_1(0xfec10038);
 VAR_2.cs6awcr = FUNC_1(0xfec1003c);
 VAR_2.cs6bwcr = FUNC_1(0xfec10040);


 VAR_2.ipra = FUNC_2(0xa4080000);
 VAR_2.iprb = FUNC_2(0xa4080004);
 VAR_2.iprc = FUNC_2(0xa4080008);
 VAR_2.iprd = FUNC_2(0xa408000c);
 VAR_2.ipre = FUNC_2(0xa4080010);
 VAR_2.iprf = FUNC_2(0xa4080014);
 VAR_2.iprg = FUNC_2(0xa4080018);
 VAR_2.iprh = FUNC_2(0xa408001c);
 VAR_2.ipri = FUNC_2(0xa4080020);
 VAR_2.iprj = FUNC_2(0xa4080024);
 VAR_2.iprk = FUNC_2(0xa4080028);
 VAR_2.iprl = FUNC_2(0xa408002c);
 VAR_2.imr0 = FUNC_0(0xa4080080);
 VAR_2.imr1 = FUNC_0(0xa4080084);
 VAR_2.imr2 = FUNC_0(0xa4080088);
 VAR_2.imr3 = FUNC_0(0xa408008c);
 VAR_2.imr4 = FUNC_0(0xa4080090);
 VAR_2.imr5 = FUNC_0(0xa4080094);
 VAR_2.imr6 = FUNC_0(0xa4080098);
 VAR_2.imr7 = FUNC_0(0xa408009c);
 VAR_2.imr8 = FUNC_0(0xa40800a0);
 VAR_2.imr9 = FUNC_0(0xa40800a4);
 VAR_2.imr10 = FUNC_0(0xa40800a8);
 VAR_2.imr11 = FUNC_0(0xa40800ac);
 VAR_2.imr12 = FUNC_0(0xa40800b0);


 VAR_2.rwtcnt = FUNC_0(0xa4520000);
 VAR_2.rwtcnt |= 0x5a00;
 VAR_2.rwtcsr = FUNC_0(0xa4520004);
 VAR_2.rwtcsr |= 0xa500;
 FUNC_3(VAR_2.rwtcsr & 0x07, 0xa4520004);


 VAR_2.irdaclk = FUNC_1(0xa4150018);
 VAR_2.spuclk = FUNC_1(0xa415003c);

 return VAR_0;
}
