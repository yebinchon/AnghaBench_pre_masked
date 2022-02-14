
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_cmdbuf_suballoc {int paddr; int vaddr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct etnaviv_cmdbuf_suballoc*) ;

void FUNC_2(struct etnaviv_cmdbuf_suballoc *VAR_1)
{
 FUNC_0(VAR_1->dev, VAR_0, VAR_1->vaddr,
      VAR_1->paddr);
 FUNC_1(VAR_1);
}
