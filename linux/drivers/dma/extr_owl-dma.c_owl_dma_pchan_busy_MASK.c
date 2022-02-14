
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_dma_pchan {int id; } ;
struct owl_dma {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct owl_dma*,int ) ;

__attribute__((used)) static int FUNC_1(struct owl_dma *VAR_1, struct owl_dma_pchan *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);

 return !(VAR_3 & (1 << VAR_2->id));
}
