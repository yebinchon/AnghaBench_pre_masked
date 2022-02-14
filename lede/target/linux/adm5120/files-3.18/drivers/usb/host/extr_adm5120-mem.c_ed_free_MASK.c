
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ed {int dma; } ;
struct admhcd {int ed_cache; } ;


 int FUNC_0 (int ,struct ed*,int ) ;

__attribute__((used)) static void FUNC_1(struct admhcd *VAR_0, struct ed *VAR_1)
{
 FUNC_0(VAR_0->ed_cache, VAR_1, VAR_1->dma);
}
