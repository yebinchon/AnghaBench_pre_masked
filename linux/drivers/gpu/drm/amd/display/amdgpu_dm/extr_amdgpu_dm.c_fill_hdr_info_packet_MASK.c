
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_drm_infoframe {int dummy; } ;
struct drm_connector_state {TYPE_1__* connector; int hdr_output_metadata; } ;
struct dc_info_packet {int hb0; int hb1; int hb2; unsigned char* sb; int hb3; int valid; } ;
typedef int ssize_t ;
typedef int buf ;
struct TYPE_2__ {int connector_type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdmi_drm_infoframe*,struct drm_connector_state const*) ;
 int FUNC_1 (struct hdmi_drm_infoframe*,unsigned char*,int) ;
 int FUNC_2 (int*,unsigned char*,int) ;
 int FUNC_3 (struct dc_info_packet*,int ,int) ;
 int FUNC_4 (int ,char*,int ,int,int,int*,int,int) ;

__attribute__((used)) static int FUNC_5(const struct drm_connector_state *VAR_3,
    struct dc_info_packet *VAR_4)
{
 struct hdmi_drm_infoframe VAR_5;
 unsigned char VAR_6[30];
 ssize_t VAR_7;
 int VAR_8, VAR_9;

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));

 if (!VAR_3->hdr_output_metadata)
  return 0;

 VAR_8 = FUNC_0(&VAR_5, VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_1(&VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return (int)VAR_7;


 if (VAR_7 != 30)
  return -VAR_1;


 switch (VAR_3->connector->connector_type) {
 case 129:
  VAR_4->hb0 = 0x87;
  VAR_4->hb1 = 0x01;
  VAR_4->hb2 = 0x1A;
  VAR_4->sb[0] = VAR_6[3];
  VAR_9 = 1;
  break;

 case 130:
 case 128:
  VAR_4->hb0 = 0x00;
  VAR_4->hb1 = 0x87;
  VAR_4->hb2 = 0x1D;
  VAR_4->hb3 = (0x13 << 2);
  VAR_4->sb[0] = 0x01;
  VAR_4->sb[1] = 0x1A;
  VAR_9 = 2;
  break;

 default:
  return -VAR_1;
 }

 FUNC_2(&VAR_4->sb[VAR_9], &VAR_6[4], 26);
 VAR_4->valid = 1;

 FUNC_4(VAR_2, "HDR SB:", VAR_0, 16, 1, VAR_4->sb,
         sizeof(VAR_4->sb), 0);

 return 0;
}
