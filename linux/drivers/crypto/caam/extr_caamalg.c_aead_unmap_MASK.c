
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct aead_request {int dst; int src; } ;
struct aead_edesc {int sec4_sg_bytes; int sec4_sg_dma; int dst_nents; int src_nents; } ;


 int FUNC_0 (struct device*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
         struct aead_edesc *VAR_1,
         struct aead_request *VAR_2)
{
 FUNC_0(VAR_0, VAR_2->src, VAR_2->dst,
     VAR_1->src_nents, VAR_1->dst_nents, 0, 0,
     VAR_1->sec4_sg_dma, VAR_1->sec4_sg_bytes);
}
