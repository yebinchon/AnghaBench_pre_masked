
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int edid; } ;
struct TYPE_5__ {int test_active; TYPE_1__ test_data; } ;
struct TYPE_6__ {int i2c_defer_count; scalar_t__ i2c_nack_count; } ;
struct intel_dp {TYPE_2__ compliance; TYPE_3__ aux; struct intel_connector* attached_connector; } ;
struct drm_connector {scalar_t__ edid_corrupt; } ;
struct intel_connector {struct edid* detect_edid; struct drm_connector base; } ;
struct edid {int checksum; int extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct intel_dp *VAR_5)
{
 u8 VAR_6 = VAR_0;
 struct intel_connector *VAR_7 = VAR_5->attached_connector;
 struct drm_connector *VAR_8 = &VAR_7->base;

 if (VAR_7->detect_edid == ((void*)0) ||
     VAR_8->edid_corrupt ||
     VAR_5->aux.i2c_defer_count > 6) {







  if (VAR_5->aux.i2c_nack_count > 0 ||
   VAR_5->aux.i2c_defer_count > 0)
   FUNC_0("EDID read had %d NACKs, %d DEFERs\n",
          VAR_5->aux.i2c_nack_count,
          VAR_5->aux.i2c_defer_count);
  VAR_5->compliance.test_data.edid = VAR_3;
 } else {
  struct edid *VAR_9 = VAR_7->detect_edid;




  VAR_9 += VAR_7->detect_edid->extensions;

  if (FUNC_1(&VAR_5->aux, VAR_1,
           VAR_9->checksum) <= 0)
   FUNC_0("Failed to write EDID checksum\n");

  VAR_6 = VAR_0 | VAR_2;
  VAR_5->compliance.test_data.edid = VAR_4;
 }


 VAR_5->compliance.test_active = 1;

 return VAR_6;
}
