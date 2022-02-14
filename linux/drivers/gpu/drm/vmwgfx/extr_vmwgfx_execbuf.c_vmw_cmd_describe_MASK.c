
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vmw_cmd_entry {char* cmd_name; } ;
struct TYPE_2__ {size_t size; size_t id; } ;
typedef int SVGAFifoCmdUpdate ;
typedef int SVGAFifoCmdDefineGMRFB ;
typedef int SVGAFifoCmdBlitGMRFBToScreen ;
typedef TYPE_1__ SVGA3dCmdHeader ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;



 size_t VAR_2 ;

 struct vmw_cmd_entry* VAR_3 ;

bool FUNC_0(const void *VAR_4, u32 *VAR_5, char const **VAR_6)
{
 u32 VAR_7 = ((u32 *) VAR_4)[0];

 if (VAR_7 >= VAR_2) {
  SVGA3dCmdHeader *VAR_8 = (SVGA3dCmdHeader *) VAR_4;
  const struct vmw_cmd_entry *VAR_9;

  *VAR_5 = VAR_8->size + sizeof(SVGA3dCmdHeader);
  VAR_7 = VAR_8->id;
  if (VAR_7 >= VAR_1)
   return 0;

  VAR_7 -= VAR_0;
  VAR_9 = &VAR_3[VAR_7];
  *VAR_6 = VAR_9->cmd_name;
  return 1;
 }

 switch (VAR_7) {
 case 128:
  *VAR_6 = "SVGA_CMD_UPDATE";
  *VAR_5 = sizeof(u32) + sizeof(SVGAFifoCmdUpdate);
  break;
 case 129:
  *VAR_6 = "SVGA_CMD_DEFINE_GMRFB";
  *VAR_5 = sizeof(u32) + sizeof(SVGAFifoCmdDefineGMRFB);
  break;
 case 131:
  *VAR_6 = "SVGA_CMD_BLIT_GMRFB_TO_SCREEN";
  *VAR_5 = sizeof(u32) + sizeof(SVGAFifoCmdBlitGMRFBToScreen);
  break;
 case 130:
  *VAR_6 = "SVGA_CMD_BLIT_SCREEN_TO_GMRFB";
  *VAR_5 = sizeof(u32) + sizeof(SVGAFifoCmdBlitGMRFBToScreen);
  break;
 default:
  *VAR_6 = "UNKNOWN";
  *VAR_5 = 0;
  return 0;
 }

 return 1;
}
