
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct pblk*,int ,int ) ;

void FUNC_3(struct pblk *VAR_0, struct bio *VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_1);
 sector_t VAR_3 = FUNC_1(VAR_1);

 FUNC_2(VAR_0, VAR_2, VAR_3);
}
