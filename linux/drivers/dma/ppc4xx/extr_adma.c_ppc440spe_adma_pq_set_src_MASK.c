
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chan; } ;
struct ppc440spe_adma_desc_slot {int dst_cnt; int descs_per_op; struct ppc440spe_adma_desc_slot* group_head; int flags; TYPE_1__ async_tx; } ;
struct ppc440spe_adma_chan {TYPE_2__* device; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct ppc440spe_adma_desc_slot*) ;
 int FUNC_2 (struct ppc440spe_adma_desc_slot*,int,int) ;
 int FUNC_3 (struct ppc440spe_adma_desc_slot*,struct ppc440spe_adma_chan*,int ,int,int) ;
 struct ppc440spe_adma_desc_slot* FUNC_4 (struct ppc440spe_adma_desc_slot*,int) ;
 int FUNC_5 (int ,int *) ;
 struct ppc440spe_adma_chan* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ppc440spe_adma_desc_slot *VAR_14,
  dma_addr_t VAR_15, int VAR_16)
{
 struct ppc440spe_adma_chan *VAR_17;
 dma_addr_t VAR_18 = 0;
 struct ppc440spe_adma_desc_slot *VAR_19 = ((void*)0);

 VAR_17 = FUNC_6(VAR_14->async_tx.chan);

 switch (VAR_17->device->id) {
 case 130:
 case 129:


  if (FUNC_5(VAR_7, &VAR_14->flags)) {

   int VAR_20 = FUNC_5(VAR_8,
    &VAR_14->flags) ? 2 : 3;

   if (VAR_16 == 0) {




    if (FUNC_5(VAR_8,
      &VAR_14->flags))
     VAR_18 = VAR_3 <<
      VAR_0;
    else if (FUNC_5(VAR_9,
        &VAR_14->flags))
     VAR_18 = VAR_4 <<
      VAR_0;
    else if (FUNC_5(VAR_10,
        &VAR_14->flags))
     VAR_18 = VAR_5 <<
      VAR_0;
    else if (FUNC_5(VAR_11,
        &VAR_14->flags))
     VAR_18 = VAR_6 <<
      VAR_0;
    else
     FUNC_0();
    VAR_18 |= VAR_1;
    VAR_19 = FUNC_4(VAR_14, 0);
   } else if (VAR_16 < VAR_20) {




    VAR_19 = ((void*)0);
   } else {



    VAR_18 = VAR_2;
    VAR_19 = FUNC_4(VAR_14,
        VAR_16 - VAR_20 + VAR_14->dst_cnt);
   }
  } else {
   int VAR_21 = 0;




   if (FUNC_5(VAR_12, &VAR_14->flags))
    VAR_21++;
   if (FUNC_5(VAR_13, &VAR_14->flags))
    VAR_21++;

   VAR_18 = VAR_2;
   VAR_19 = FUNC_4(VAR_14,
     VAR_16 + VAR_21);
  }

  if (FUNC_1(VAR_19)) {
   FUNC_3(VAR_19, VAR_17, 0, VAR_18, VAR_15);

   if (!VAR_16 &&
       FUNC_5(VAR_7, &VAR_14->flags) &&
       VAR_14->dst_cnt == 2) {



    VAR_19 = FUNC_4(VAR_14, 1);
    FUNC_3(VAR_19, VAR_17, 0,
     VAR_18, VAR_15);
   }
  }
  break;

 case 128:

  VAR_19 = VAR_14->group_head;
  if (VAR_19->dst_cnt == 2) {

   FUNC_2(VAR_19, VAR_16, VAR_15);


   VAR_19 = FUNC_4(VAR_14,
    VAR_14->descs_per_op);
  }
  FUNC_2(VAR_19, VAR_16, VAR_15);
  break;
 }
}
