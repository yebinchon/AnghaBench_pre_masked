
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mem_input {int request_address; int current_address; } ;
struct TYPE_2__ {int ctx; } ;
struct dce_mem_input {TYPE_1__ base; } ;


 int VAR_0 ;
 struct dce_mem_input* FUNC_0 (struct mem_input*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;

bool FUNC_3(struct mem_input *VAR_3)
{
 struct dce_mem_input *VAR_4 = FUNC_0(VAR_3);
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_4->base.ctx, VAR_2);

 if (FUNC_2(VAR_5, VAR_1,
   VAR_0))
  return 1;

 VAR_3->current_address = VAR_3->request_address;
 return 0;
}
