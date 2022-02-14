
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int EDID_CHECKSUM_WRITE; } ;
struct TYPE_14__ {int member_0; } ;
union test_response {int raw; TYPE_7__ bits; TYPE_5__ member_0; } ;
struct TYPE_15__ {int EDID_READ; } ;
struct TYPE_13__ {int member_0; } ;
union test_request {TYPE_6__ bits; int raw; TYPE_4__ member_0; } ;
typedef int uint8_t ;
typedef int test_response ;
struct i2c_adapter {int dummy; } ;
struct edid {int extensions; } ;
struct TYPE_18__ {int length; int * raw_edid; } ;
struct dc_sink {TYPE_9__ dc_edid; int edid_caps; } ;
struct dc_link {scalar_t__ aux_mode; struct amdgpu_dm_connector* priv; } ;
struct dc_context {int dummy; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_10__ {struct i2c_adapter ddc; } ;
struct TYPE_11__ {TYPE_1__ aux; } ;
struct amdgpu_dm_connector {TYPE_8__ base; TYPE_3__* i2c; TYPE_2__ dm_dp_aux; } ;
typedef enum dc_edid_status { ____Placeholder_dc_edid_status } dc_edid_status ;
struct TYPE_12__ {struct i2c_adapter base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dc_context*,struct dc_link*,int ,int *,int) ;
 int FUNC_2 (struct dc_context*,struct dc_link*,int ,int *,int) ;
 int FUNC_3 (struct dc_context*,TYPE_9__*,int *) ;
 struct edid* FUNC_4 (TYPE_8__*,struct i2c_adapter*) ;
 int FUNC_5 (struct edid*) ;
 int FUNC_6 (int *,int *,int) ;

enum dc_edid_status FUNC_7(
  struct dc_context *VAR_7,
  struct dc_link *VAR_8,
  struct dc_sink *VAR_9)
{
 struct amdgpu_dm_connector *VAR_10 = VAR_8->priv;
 struct i2c_adapter *VAR_11;
 int VAR_12 = 3;
 enum dc_edid_status VAR_13;
 struct edid *VAR_14;

 if (VAR_8->aux_mode)
  VAR_11 = &VAR_10->dm_dp_aux.aux.ddc;
 else
  VAR_11 = &VAR_10->i2c->base;




 do {

  VAR_14 = FUNC_4(&VAR_10->base, VAR_11);

  if (!VAR_14)
   return VAR_5;

  VAR_9->dc_edid.length = VAR_4 * (VAR_14->extensions + 1);
  FUNC_6(VAR_9->dc_edid.raw_edid, (uint8_t *)VAR_14, VAR_9->dc_edid.length);


  FUNC_5(VAR_14);

  VAR_13 = FUNC_3(
      VAR_7,
      &VAR_9->dc_edid,
      &VAR_9->edid_caps);

 } while (VAR_13 == VAR_3 && --VAR_12 > 0);

 if (VAR_13 != VAR_6)
  FUNC_0("EDID err: %d, on connector: %s",
    VAR_13,
    VAR_10->base.name);
 if (VAR_8->aux_mode) {
  union test_request VAR_15 = { {0} };
  union test_response VAR_16 = { 0 };

  FUNC_1(VAR_7,
     VAR_8,
     VAR_1,
     &VAR_15.raw,
     sizeof(union test_request));

  if (!VAR_15.bits.EDID_READ)
   return VAR_13;

  VAR_16.bits.EDID_CHECKSUM_WRITE = 1;

  FUNC_2(VAR_7,
     VAR_8,
     VAR_0,
     &VAR_9->dc_edid.raw_edid[VAR_9->dc_edid.length-1],
     1);

  FUNC_2(VAR_7,
     VAR_8,
     VAR_2,
     &VAR_16.raw,
     sizeof(VAR_16));

 }

 return VAR_13;
}
