
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mem_input {int dummy; } ;
struct TYPE_2__ {int single_head_rdreq_dmif_limit; } ;
struct dce_mem_input {struct mem_input base; TYPE_1__ wa; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct dce_mem_input*,struct dc_context*,size_t,int *,int *,int *) ;
 struct dce_mem_input* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct mem_input *FUNC_3(
 struct dc_context *VAR_4,
 uint32_t VAR_5)
{
 struct dce_mem_input *VAR_6 = FUNC_2(sizeof(struct dce_mem_input),
            VAR_0);

 if (!VAR_6) {
  FUNC_0();
  return ((void*)0);
 }

 FUNC_1(VAR_6, VAR_4, VAR_5, &VAR_2[VAR_5], &VAR_3, &VAR_1);
 VAR_6->wa.single_head_rdreq_dmif_limit = 2;
 return &VAR_6->base;
}
