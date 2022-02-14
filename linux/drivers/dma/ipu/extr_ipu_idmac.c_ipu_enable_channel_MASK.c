
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct ipu {int lock; } ;
struct TYPE_2__ {int chan_id; } ;
struct idmac_channel {int status; scalar_t__ active_buffer; TYPE_1__ dma_chan; } ;
struct idmac {int dummy; } ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct ipu*,int ) ;
 int FUNC_1 (struct ipu*,unsigned long,int ) ;
 int FUNC_2 (struct ipu*,unsigned long,int ) ;
 int FUNC_3 (struct ipu*,int,int) ;
 int FUNC_4 (struct ipu*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct ipu* FUNC_7 (struct idmac*) ;

__attribute__((used)) static int FUNC_8(struct idmac *VAR_3, struct idmac_channel *VAR_4)
{
 struct ipu *VAR_5 = FUNC_7(VAR_3);
 enum ipu_channel VAR_6 = VAR_4->dma_chan.chan_id;
 uint32_t VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_5->lock, VAR_8);


 FUNC_2(VAR_5, 1UL << VAR_6, VAR_2);
 VAR_4->active_buffer = 0;
 VAR_4->status = VAR_1;

 switch (VAR_6) {
 case 129:
 case 128:
 case 130:
  FUNC_3(VAR_5, VAR_6, 1);
 default:
  break;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_0);

 FUNC_1(VAR_5, VAR_7 | (1UL << VAR_6), VAR_0);

 FUNC_4(VAR_5, VAR_6);

 FUNC_6(&VAR_5->lock, VAR_8);
 return 0;
}
