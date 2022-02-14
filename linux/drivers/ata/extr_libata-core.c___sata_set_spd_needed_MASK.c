
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ata_link {int sata_spd_limit; int sata_spd; TYPE_1__* ap; } ;
struct TYPE_2__ {struct ata_link link; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ata_link *VAR_1, u32 *VAR_2)
{
 struct ata_link *VAR_3 = &VAR_1->ap->link;
 u32 VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_1->sata_spd_limit;





 if (!FUNC_0(VAR_1) && VAR_3->sata_spd)
  VAR_4 &= (1 << VAR_3->sata_spd) - 1;

 if (VAR_4 == VAR_0)
  VAR_5 = 0;
 else
  VAR_5 = FUNC_1(VAR_4);

 VAR_6 = (*VAR_2 >> 4) & 0xf;
 *VAR_2 = (*VAR_2 & ~0xf0) | ((VAR_5 & 0xf) << 4);

 return VAR_6 != VAR_5;
}
