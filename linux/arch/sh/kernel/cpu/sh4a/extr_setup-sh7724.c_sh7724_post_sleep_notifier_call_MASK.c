
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int spuclk; int irdaclk; int rwtcsr; int rwtcnt; int imr12; int imr11; int imr10; int imr9; int imr8; int imr7; int imr6; int imr5; int imr4; int imr3; int imr2; int imr1; int imr0; int iprl; int iprk; int iprj; int ipri; int iprh; int iprg; int iprf; int ipre; int iprd; int iprc; int iprb; int ipra; int cs6bwcr; int cs6awcr; int cs5bwcr; int cs5awcr; int cs4wcr; int cs6bbcr; int cs6abcr; int cs5bbcr; int cs5abcr; int cs4bcr; int cs0bcr; int mmselr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3,
        unsigned long VAR_4, void *VAR_5)
{
 if (!(VAR_4 & VAR_1))
  return VAR_0;


 FUNC_1(VAR_2.mmselr, 0xff800020);
 FUNC_1(VAR_2.cs0bcr, 0xfec10004);
 FUNC_1(VAR_2.cs4bcr, 0xfec10010);
 FUNC_1(VAR_2.cs5abcr, 0xfec10014);
 FUNC_1(VAR_2.cs5bbcr, 0xfec10018);
 FUNC_1(VAR_2.cs6abcr, 0xfec1001c);
 FUNC_1(VAR_2.cs6bbcr, 0xfec10020);
 FUNC_1(VAR_2.cs4wcr, 0xfec10030);
 FUNC_1(VAR_2.cs5awcr, 0xfec10034);
 FUNC_1(VAR_2.cs5bwcr, 0xfec10038);
 FUNC_1(VAR_2.cs6awcr, 0xfec1003c);
 FUNC_1(VAR_2.cs6bwcr, 0xfec10040);


 FUNC_2(VAR_2.ipra, 0xa4080000);
 FUNC_2(VAR_2.iprb, 0xa4080004);
 FUNC_2(VAR_2.iprc, 0xa4080008);
 FUNC_2(VAR_2.iprd, 0xa408000c);
 FUNC_2(VAR_2.ipre, 0xa4080010);
 FUNC_2(VAR_2.iprf, 0xa4080014);
 FUNC_2(VAR_2.iprg, 0xa4080018);
 FUNC_2(VAR_2.iprh, 0xa408001c);
 FUNC_2(VAR_2.ipri, 0xa4080020);
 FUNC_2(VAR_2.iprj, 0xa4080024);
 FUNC_2(VAR_2.iprk, 0xa4080028);
 FUNC_2(VAR_2.iprl, 0xa408002c);
 FUNC_0(VAR_2.imr0, 0xa4080080);
 FUNC_0(VAR_2.imr1, 0xa4080084);
 FUNC_0(VAR_2.imr2, 0xa4080088);
 FUNC_0(VAR_2.imr3, 0xa408008c);
 FUNC_0(VAR_2.imr4, 0xa4080090);
 FUNC_0(VAR_2.imr5, 0xa4080094);
 FUNC_0(VAR_2.imr6, 0xa4080098);
 FUNC_0(VAR_2.imr7, 0xa408009c);
 FUNC_0(VAR_2.imr8, 0xa40800a0);
 FUNC_0(VAR_2.imr9, 0xa40800a4);
 FUNC_0(VAR_2.imr10, 0xa40800a8);
 FUNC_0(VAR_2.imr11, 0xa40800ac);
 FUNC_0(VAR_2.imr12, 0xa40800b0);


 FUNC_2(VAR_2.rwtcnt, 0xa4520000);
 FUNC_2(VAR_2.rwtcsr, 0xa4520004);


 FUNC_1(VAR_2.irdaclk, 0xa4150018);
 FUNC_1(VAR_2.spuclk, 0xa415003c);

 return VAR_0;
}
