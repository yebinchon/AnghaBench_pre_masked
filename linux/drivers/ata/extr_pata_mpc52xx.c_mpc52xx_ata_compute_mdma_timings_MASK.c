
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc52xx_ata_timings {int mdma1; int mdma2; scalar_t__ using_udma; } ;
struct mpc52xx_ata_priv {struct mdmaspec* mdmaspec; struct mpc52xx_ata_timings* timings; } ;
struct mdmaspec {int tm; scalar_t__ tn; scalar_t__ tj; scalar_t__ th; scalar_t__ tkw; scalar_t__ td; scalar_t__ t0M; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mpc52xx_ata_priv *VAR_1, int VAR_2,
     int VAR_3)
{
 struct mpc52xx_ata_timings *VAR_4 = &VAR_1->timings[VAR_2];
 const struct mdmaspec *VAR_5 = &VAR_1->mdmaspec[VAR_3];

 if (VAR_3 < 0 || VAR_3 > 2)
  return -VAR_0;

 VAR_4->mdma1 = ((u32)VAR_5->t0M << 24) | ((u32)VAR_5->td << 16) | ((u32)VAR_5->tkw << 8) | VAR_5->tm;
 VAR_4->mdma2 = ((u32)VAR_5->th << 24) | ((u32)VAR_5->tj << 16) | ((u32)VAR_5->tn << 8);
 VAR_4->using_udma = 0;

 return 0;
}
