
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct udmaspec {int tdh; int tli; int tsr; int tack; scalar_t__ tzah; scalar_t__ trp; scalar_t__ trfs; scalar_t__ tss; scalar_t__ tenv; scalar_t__ taz; scalar_t__ tmli; scalar_t__ tfs; scalar_t__ tdvh; scalar_t__ tdvs; scalar_t__ tds; scalar_t__ tcyc; scalar_t__ t2cyc; } ;
struct mpc52xx_ata_timings {int udma1; int udma2; int udma3; int udma4; int udma5; int using_udma; } ;
struct mpc52xx_ata_priv {struct udmaspec* udmaspec; struct mpc52xx_ata_timings* timings; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mpc52xx_ata_priv *VAR_1, int VAR_2,
     int VAR_3)
{
 struct mpc52xx_ata_timings *VAR_4 = &VAR_1->timings[VAR_2];
 const struct udmaspec *VAR_5 = &VAR_1->udmaspec[VAR_3];

 if (VAR_3 < 0 || VAR_3 > 2)
  return -VAR_0;

 VAR_4->udma1 = ((u32)VAR_5->t2cyc << 24) | ((u32)VAR_5->tcyc << 16) | ((u32)VAR_5->tds << 8) | VAR_5->tdh;
 VAR_4->udma2 = ((u32)VAR_5->tdvs << 24) | ((u32)VAR_5->tdvh << 16) | ((u32)VAR_5->tfs << 8) | VAR_5->tli;
 VAR_4->udma3 = ((u32)VAR_5->tmli << 24) | ((u32)VAR_5->taz << 16) | ((u32)VAR_5->tenv << 8) | VAR_5->tsr;
 VAR_4->udma4 = ((u32)VAR_5->tss << 24) | ((u32)VAR_5->trfs << 16) | ((u32)VAR_5->trp << 8) | VAR_5->tack;
 VAR_4->udma5 = (u32)VAR_5->tzah << 24;
 VAR_4->using_udma = 1;

 return 0;
}
