
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_channel {int peripheral_type; scalar_t__ watermark_level; scalar_t__ per_address2; scalar_t__ per_addr; scalar_t__ per_address; scalar_t__ shp_addr; scalar_t__* event_mask; int event_id0; scalar_t__ event_id1; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (struct sdma_channel*,int,int,int) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct sdma_channel*,int) ;
 int FUNC_4 (struct sdma_channel*) ;
 int FUNC_5 (struct sdma_channel*) ;
 struct sdma_channel* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_2)
{
 struct sdma_channel *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 FUNC_2(VAR_2);

 VAR_3->event_mask[0] = 0;
 VAR_3->event_mask[1] = 0;
 VAR_3->shp_addr = 0;
 VAR_3->per_addr = 0;

 switch (VAR_3->peripheral_type) {
 case 129:
  FUNC_1(VAR_3, 0, 1, 1);
  break;
 case 128:
  FUNC_1(VAR_3, 0, 1, 0);
  break;
 default:
  FUNC_1(VAR_3, 1, 1, 0);
  break;
 }

 FUNC_3(VAR_3, VAR_3->peripheral_type);

 if ((VAR_3->peripheral_type != 128) &&
   (VAR_3->peripheral_type != 129)) {

  if (VAR_3->event_id1) {
   if (VAR_3->peripheral_type == VAR_1 ||
       VAR_3->peripheral_type == VAR_0)
    FUNC_5(VAR_3);
  } else
   FUNC_0(VAR_3->event_id0, VAR_3->event_mask);


  VAR_3->shp_addr = VAR_3->per_address;
  VAR_3->per_addr = VAR_3->per_address2;
 } else {
  VAR_3->watermark_level = 0;
 }

 VAR_4 = FUNC_4(VAR_3);

 return VAR_4;
}
