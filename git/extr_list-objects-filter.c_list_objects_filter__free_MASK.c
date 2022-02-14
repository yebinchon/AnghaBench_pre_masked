
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter {int filter_data; int (* free_fn ) (int ) ;scalar_t__ omits; int (* finalize_omits_fn ) (scalar_t__,int ) ;} ;


 int FUNC_0 (struct filter*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct filter *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->finalize_omits_fn && VAR_0->omits)
  VAR_0->finalize_omits_fn(VAR_0->omits, VAR_0->filter_data);
 VAR_0->free_fn(VAR_0->filter_data);
 FUNC_0(VAR_0);
}
