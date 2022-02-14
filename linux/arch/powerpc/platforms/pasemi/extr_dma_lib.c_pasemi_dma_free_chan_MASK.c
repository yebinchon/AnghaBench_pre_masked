
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_dmachan {int chan_type; int priv; int chno; scalar_t__ ring_virt; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct pasemi_dmachan*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct pasemi_dmachan *VAR_0)
{
 if (VAR_0->ring_virt)
  FUNC_1(VAR_0);

 switch (VAR_0->chan_type & (129|128)) {
 case 129:
  FUNC_2(VAR_0->chno);
  break;
 case 128:
  FUNC_3(VAR_0->chno);
  break;
 }

 FUNC_0(VAR_0->priv);
}
