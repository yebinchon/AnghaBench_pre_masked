
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_request_context {scalar_t__ sksg_list; int sksg_dma_address; void* sg; int state; } ;
struct skd_device {int dummy; } ;
struct request {int dummy; } ;
struct blk_mq_tag_set {struct skd_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skd_request_context* FUNC_0 (struct request*) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 (struct skd_device*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct blk_mq_tag_set *VAR_3, struct request *VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 struct skd_device *VAR_7 = VAR_3->driver_data;
 struct skd_request_context *VAR_8 = FUNC_0(VAR_4);

 VAR_8->state = VAR_1;
 VAR_8->sg = (void *)(VAR_8 + 1);
 FUNC_1(VAR_8->sg, VAR_2);
 VAR_8->sksg_list = FUNC_2(VAR_7, VAR_2,
         &VAR_8->sksg_dma_address);

 return VAR_8->sksg_list ? 0 : -VAR_0;
}
