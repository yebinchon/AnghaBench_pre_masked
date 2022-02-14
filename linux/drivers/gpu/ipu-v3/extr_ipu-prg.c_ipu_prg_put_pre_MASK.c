
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_prg_channel {size_t used_pre; } ;
struct ipu_prg {int * pres; struct ipu_prg_channel* chan; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ipu_prg *VAR_0, int VAR_1)
{
 struct ipu_prg_channel *VAR_2 = &VAR_0->chan[VAR_1];

 FUNC_0(VAR_0->pres[VAR_2->used_pre]);
 VAR_2->used_pre = -1;
}
