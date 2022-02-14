
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_device {struct ib_device* ib_device; } ;
struct isert_conn {struct isert_device* device; } ;
struct isert_cmd {int dummy; } ;
struct iser_tx_desc {int dma_addr; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isert_device*,struct iser_tx_desc*) ;
 int FUNC_1 (struct ib_device*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct isert_conn *VAR_2,
         struct isert_cmd *VAR_3,
         struct iser_tx_desc *VAR_4)
{
 struct isert_device *VAR_5 = VAR_2->device;
 struct ib_device *VAR_6 = VAR_5->ib_device;

 FUNC_1(VAR_6, VAR_4->dma_addr,
       VAR_1, VAR_0);

 FUNC_0(VAR_5, VAR_4);
}
