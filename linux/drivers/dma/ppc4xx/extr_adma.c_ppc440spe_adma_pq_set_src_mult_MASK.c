
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int chan; } ;
struct ppc440spe_adma_desc_slot {int dst_cnt; int descs_per_op; struct ppc440spe_adma_desc_slot* group_head; int flags; TYPE_1__ async_tx; } ;
struct ppc440spe_adma_chan {TYPE_2__* device; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ppc440spe_adma_desc_slot*) ;
 int FUNC_1 (struct ppc440spe_adma_desc_slot*,int,unsigned char) ;
 int FUNC_2 (struct ppc440spe_adma_desc_slot*,struct ppc440spe_adma_chan*,int ,int ,int) ;
 struct ppc440spe_adma_desc_slot* FUNC_3 (struct ppc440spe_adma_desc_slot*,int) ;
 int FUNC_4 (int ,int *) ;
 struct ppc440spe_adma_chan* FUNC_5 (int ) ;
 int FUNC_6 (struct ppc440spe_adma_desc_slot*) ;

__attribute__((used)) static void FUNC_7(
  struct ppc440spe_adma_desc_slot *VAR_8,
  unsigned char VAR_9, int VAR_10, int VAR_11)
{
 struct ppc440spe_adma_chan *VAR_12;
 u32 VAR_13, VAR_14;
 struct ppc440spe_adma_desc_slot *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

 VAR_12 = FUNC_5(VAR_8->async_tx.chan);

 switch (VAR_12->device->id) {
 case 130:
 case 129:
  if (FUNC_4(VAR_4, &VAR_8->flags)) {
   int VAR_17 = FUNC_4(VAR_5,
     &VAR_8->flags) ? 2 : 3;

   if (VAR_10 < VAR_17) {

    VAR_15 = FUNC_3(VAR_8,
     VAR_8->dst_cnt - 1);
    if (VAR_8->dst_cnt == 2)
     VAR_16 = FUNC_3(
       VAR_8, 0);

    VAR_13 = VAR_3 + (VAR_10 << 3);
    VAR_14 = VAR_2;
   } else {

    VAR_15 = FUNC_3(VAR_8,
       VAR_10 - VAR_17 +
       VAR_8->dst_cnt);
    VAR_13 = VAR_3;
    VAR_14 = VAR_11 ? VAR_1 :
           VAR_0;
   }
  } else {
   int VAR_18 = 0;





   if (FUNC_4(VAR_6, &VAR_8->flags))
    VAR_18++;
   if (FUNC_4(VAR_7, &VAR_8->flags))
    VAR_18++;

   VAR_15 = FUNC_3(VAR_8, VAR_10 + VAR_18);
   VAR_13 = VAR_3;
   VAR_14 = VAR_11 ? VAR_1 : VAR_0;
  }

  if (FUNC_0(VAR_15)) {
   FUNC_2(VAR_15, VAR_12,
    VAR_13, VAR_14, VAR_9);

   if (FUNC_6(VAR_16)) {



    FUNC_2(VAR_16, VAR_12,
     VAR_13, VAR_14, 1);
   }

  }
  break;

 case 128:
  VAR_15 = VAR_8->group_head;
  if (VAR_8->dst_cnt == 2) {

   FUNC_1(VAR_15, VAR_10, 1);


   VAR_15 = FUNC_3(VAR_8,
          VAR_8->descs_per_op);
  }
  FUNC_1(VAR_15, VAR_10, VAR_9);
  break;
 }
}
