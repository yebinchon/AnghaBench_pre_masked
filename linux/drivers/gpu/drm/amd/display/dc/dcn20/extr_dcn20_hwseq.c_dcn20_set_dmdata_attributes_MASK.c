
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct hubp* hubp; } ;
struct pipe_ctx {TYPE_4__* stream; TYPE_1__ plane_res; } ;
struct hubp {TYPE_5__* funcs; } ;
struct TYPE_7__ {int quad_part; } ;
struct dc_dmdata_attributes {int dmdata_size; int dmdata_repeat; int dmdata_updated; int * dmdata_sw_data; scalar_t__ dmdata_qos_level; scalar_t__ dmdata_qos_mode; scalar_t__ dmdata_dl_delta; TYPE_2__ address; int dmdata_mode; int member_0; } ;
struct TYPE_10__ {int (* dmdata_set_attributes ) (struct hubp*,struct dc_dmdata_attributes*) ;} ;
struct TYPE_8__ {int quad_part; } ;
struct TYPE_9__ {TYPE_3__ dmdata_address; int signal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hubp*,struct dc_dmdata_attributes*) ;

void FUNC_2(struct pipe_ctx *VAR_1)
{
 struct dc_dmdata_attributes VAR_2 = { 0 };
 struct hubp *VAR_3 = VAR_1->plane_res.hubp;

 VAR_2.dmdata_mode = VAR_0;
 VAR_2.dmdata_size =
  FUNC_0(VAR_1->stream->signal) ? 32 : 36;
 VAR_2.address.quad_part =
   VAR_1->stream->dmdata_address.quad_part;
 VAR_2.dmdata_dl_delta = 0;
 VAR_2.dmdata_qos_mode = 0;
 VAR_2.dmdata_qos_level = 0;
 VAR_2.dmdata_repeat = 1;
 VAR_2.dmdata_updated = 1;
 VAR_2.dmdata_sw_data = ((void*)0);

 VAR_3->funcs->dmdata_set_attributes(VAR_3, &VAR_2);
}
