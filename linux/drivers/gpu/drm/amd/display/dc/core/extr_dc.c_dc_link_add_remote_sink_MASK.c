
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct dc_sink_init_data {int link; } ;
struct TYPE_2__ {int length; int raw_edid; } ;
struct dc_sink {TYPE_1__ dc_edid; int edid_caps; } ;
struct dc_link {int ctx; } ;
typedef enum dc_edid_status { ____Placeholder_dc_edid_status } dc_edid_status ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct dc_sink* FUNC_1 (struct dc_sink_init_data*) ;
 int FUNC_2 (struct dc_sink*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (struct dc_link*,struct dc_sink*) ;
 int FUNC_6 (int ,int const*,int) ;

struct dc_sink *FUNC_7(
  struct dc_link *VAR_2,
  const uint8_t *VAR_3,
  int VAR_4,
  struct dc_sink_init_data *VAR_5)
{
 struct dc_sink *VAR_6;
 enum dc_edid_status VAR_7;

 if (VAR_4 > VAR_0) {
  FUNC_3("Max EDID buffer size breached!\n");
  return ((void*)0);
 }

 if (!VAR_5) {
  FUNC_0();
  return ((void*)0);
 }

 if (!VAR_5->link) {
  FUNC_0();
  return ((void*)0);
 }

 VAR_6 = FUNC_1(VAR_5);

 if (!VAR_6)
  return ((void*)0);

 FUNC_6(VAR_6->dc_edid.raw_edid, VAR_3, VAR_4);
 VAR_6->dc_edid.length = VAR_4;

 if (!FUNC_5(
   VAR_2,
   VAR_6))
  goto fail_add_sink;

 VAR_7 = FUNC_4(
   VAR_2->ctx,
   &VAR_6->dc_edid,
   &VAR_6->edid_caps);





 if (VAR_7 != VAR_1) {
  VAR_6->dc_edid.length = 0;
  FUNC_3("Bad EDID, status%d!\n", VAR_7);
 }

 return VAR_6;

fail_add_sink:
 FUNC_2(VAR_6);
 return ((void*)0);
}
