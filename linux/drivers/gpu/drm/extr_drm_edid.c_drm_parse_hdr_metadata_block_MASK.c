
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int min_cll; int max_fall; int max_cll; int metadata_type; int eotf; } ;
struct TYPE_4__ {TYPE_1__ hdmi_type1; } ;
struct drm_connector {TYPE_2__ hdr_sink_metadata; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_0, const u8 *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 VAR_0->hdr_sink_metadata.hdmi_type1.eotf =
      FUNC_1(VAR_1);
 VAR_0->hdr_sink_metadata.hdmi_type1.metadata_type =
      FUNC_2(VAR_1);

 if (VAR_2 >= 4)
  VAR_0->hdr_sink_metadata.hdmi_type1.max_cll = VAR_1[4];
 if (VAR_2 >= 5)
  VAR_0->hdr_sink_metadata.hdmi_type1.max_fall = VAR_1[5];
 if (VAR_2 >= 6)
  VAR_0->hdr_sink_metadata.hdmi_type1.min_cll = VAR_1[6];
}
