
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u32 ;
struct xor_cb {unsigned char sg1u; unsigned char sg2u; unsigned char sg3u; } ;
struct ppc440spe_adma_desc_slot {struct xor_cb* hw_desc; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; } ;
struct dma_cdb {unsigned char sg1u; unsigned char sg2u; unsigned char sg3u; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 () ;






 unsigned char FUNC_1 (unsigned char) ;

__attribute__((used)) static void FUNC_2(struct ppc440spe_adma_desc_slot *VAR_0,
   struct ppc440spe_adma_chan *VAR_1, u32 VAR_2,
   int VAR_3, unsigned char VAR_4)
{
 struct dma_cdb *VAR_5;
 struct xor_cb *VAR_6;
 u32 *VAR_7;

 switch (VAR_1->device->id) {
 case 130:
 case 129:
  VAR_5 = VAR_0->hw_desc;

  switch (VAR_3) {



  case 131:
   VAR_7 = &VAR_5->sg1u;
   break;



  case 133:
   VAR_7 = &VAR_5->sg2u;
   break;
  case 132:
   VAR_7 = &VAR_5->sg3u;
   break;
  default:
   FUNC_0();
  }

  *VAR_7 |= FUNC_1(VAR_4 << VAR_2);
  break;
 case 128:
  VAR_6 = VAR_0->hw_desc;
  break;
 default:
  FUNC_0();
 }
}
