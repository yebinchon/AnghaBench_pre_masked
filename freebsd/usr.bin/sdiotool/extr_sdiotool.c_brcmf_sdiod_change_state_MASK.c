
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_sdio_dev {int state; int bus_if; } ;
typedef enum brcmf_sdiod_state { ____Placeholder_brcmf_sdiod_state } brcmf_sdiod_state ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct brcmf_sdio_dev *VAR_3,
         enum brcmf_sdiod_state VAR_4)
{
 if (VAR_3->state == VAR_2 ||
     VAR_4 == VAR_3->state)
  return;


 switch (VAR_3->state) {
 case 129:

  FUNC_0(VAR_3->bus_if, VAR_0);
  break;
 case 128:

  if (VAR_4 == 129)
   FUNC_0(VAR_3->bus_if, VAR_1);
  break;
 default:
  break;
 }
 VAR_3->state = VAR_4;
}
