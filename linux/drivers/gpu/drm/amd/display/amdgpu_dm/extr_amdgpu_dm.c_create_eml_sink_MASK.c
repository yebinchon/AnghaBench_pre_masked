
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct edid {int extensions; } ;
struct dc_sink_init_data {int sink_signal; TYPE_3__* link; } ;
struct TYPE_5__ {scalar_t__ force; int override_edid; TYPE_1__* edid_blob_ptr; int name; } ;
struct amdgpu_dm_connector {scalar_t__ dc_sink; scalar_t__ dc_em_sink; TYPE_3__* dc_link; TYPE_2__ base; struct edid* edid; } ;
struct TYPE_6__ {scalar_t__ local_sink; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int,struct dc_sink_init_data*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_dm_connector *VAR_4)
{
 struct dc_sink_init_data VAR_5 = {
   .link = VAR_4->dc_link,
   .sink_signal = VAR_3
 };
 struct edid *VAR_6;

 if (!VAR_4->base.edid_blob_ptr) {
  FUNC_0("No EDID firmware found on connector: %s ,forcing to OFF!\n",
    VAR_4->base.name);

  VAR_4->base.force = VAR_0;
  VAR_4->base.override_edid = 0;
  return;
 }

 VAR_6 = (struct edid *) VAR_4->base.edid_blob_ptr->data;

 VAR_4->edid = VAR_6;

 VAR_4->dc_em_sink = FUNC_1(
  VAR_4->dc_link,
  (uint8_t *)VAR_6,
  (VAR_6->extensions + 1) * VAR_2,
  &VAR_5);

 if (VAR_4->base.force == VAR_1) {
  VAR_4->dc_sink = VAR_4->dc_link->local_sink ?
  VAR_4->dc_link->local_sink :
  VAR_4->dc_em_sink;
  FUNC_2(VAR_4->dc_sink);
 }
}
