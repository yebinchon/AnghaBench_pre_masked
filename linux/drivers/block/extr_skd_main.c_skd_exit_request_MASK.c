
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_request_context {int sksg_dma_address; int sksg_list; } ;
struct skd_device {int dummy; } ;
struct request {int dummy; } ;
struct blk_mq_tag_set {struct skd_device* driver_data; } ;


 struct skd_request_context* FUNC_0 (struct request*) ;
 int FUNC_1 (struct skd_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
        unsigned int VAR_2)
{
 struct skd_device *VAR_3 = VAR_0->driver_data;
 struct skd_request_context *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_4->sksg_list, VAR_4->sksg_dma_address);
}
