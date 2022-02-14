
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stream_count; } ;
struct dc_link {TYPE_1__ mst_stream_alloc_table; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 int FUNC_0 (struct dc_link*,int) ;
 int FUNC_1 (struct dc_link*,int) ;

void FUNC_2(struct dc_link *VAR_0, enum signal_type VAR_1)
{

 if (VAR_0->mst_stream_alloc_table.stream_count > 0)
  return;

 FUNC_0(VAR_0, VAR_1);


 FUNC_1(VAR_0, 0);
}
