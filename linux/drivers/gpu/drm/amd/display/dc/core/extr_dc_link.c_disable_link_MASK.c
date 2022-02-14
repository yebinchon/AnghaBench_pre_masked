
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int link_active; } ;
struct TYPE_7__ {scalar_t__ stream_count; } ;
struct dc_link {TYPE_2__ link_status; TYPE_3__ mst_stream_alloc_table; TYPE_4__* link_enc; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* disable_output ) (TYPE_4__*,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dc_link*,int) ;
 int FUNC_3 (struct dc_link*,int) ;
 int FUNC_4 (struct dc_link*,int) ;
 int FUNC_5 (struct dc_link*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_7(struct dc_link *VAR_1, enum signal_type VAR_2)
{
 if (FUNC_0(VAR_2)) {

  if (FUNC_1(VAR_2))
   FUNC_2(VAR_1, VAR_2);
  else
   FUNC_3(VAR_1, VAR_2);
 } else
  VAR_1->link_enc->funcs->disable_output(VAR_1->link_enc, VAR_2);

 if (VAR_2 == VAR_0) {

  if (VAR_1->mst_stream_alloc_table.stream_count <= 0)
   VAR_1->link_status.link_active = 0;
 } else {
  VAR_1->link_status.link_active = 0;
 }
}
