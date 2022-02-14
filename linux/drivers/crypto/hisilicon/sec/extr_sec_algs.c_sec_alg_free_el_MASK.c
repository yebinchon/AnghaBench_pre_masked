
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_request_el {struct sec_request_el* sgl_out; struct sec_request_el* sgl_in; int dma_in; int in; int dma_out; int out; } ;
struct sec_dev_info {int dummy; } ;


 int FUNC_0 (struct sec_request_el*) ;
 int FUNC_1 (int ,int ,struct sec_dev_info*) ;

__attribute__((used)) static void FUNC_2(struct sec_request_el *VAR_0,
       struct sec_dev_info *VAR_1)
{
 FUNC_1(VAR_0->out, VAR_0->dma_out, VAR_1);
 FUNC_1(VAR_0->in, VAR_0->dma_in, VAR_1);
 FUNC_0(VAR_0->sgl_in);
 FUNC_0(VAR_0->sgl_out);
 FUNC_0(VAR_0);
}
