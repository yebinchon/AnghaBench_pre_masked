
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isert_conn {struct iser_rx_desc* rx_descs; TYPE_1__* device; } ;
struct iser_rx_desc {int dma_addr; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct ib_device* ib_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;
 int FUNC_1 (struct iser_rx_desc*) ;

__attribute__((used)) static void
FUNC_2(struct isert_conn *VAR_3)
{
 struct ib_device *VAR_4 = VAR_3->device->ib_device;
 struct iser_rx_desc *VAR_5;
 int VAR_6;

 if (!VAR_3->rx_descs)
  return;

 VAR_5 = VAR_3->rx_descs;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
  FUNC_0(VAR_4, VAR_5->dma_addr,
        VAR_2, VAR_0);
 }

 FUNC_1(VAR_3->rx_descs);
 VAR_3->rx_descs = ((void*)0);
}
