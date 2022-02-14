
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_sw_context {int kernel; } ;
struct vmw_private {int dummy; } ;
typedef int SVGAFifoCmdUpdate ;
typedef int SVGAFifoCmdDefineGMRFB ;
typedef int SVGAFifoCmdBlitGMRFBToScreen ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vmw_private*,struct vmw_sw_context*,void*) ;

__attribute__((used)) static int FUNC_3(struct vmw_private *VAR_2,
    struct vmw_sw_context *VAR_3,
    void *VAR_4, uint32_t *VAR_5)
{
 uint32_t VAR_6 = *VAR_5;
 uint32_t VAR_7;

 VAR_7 = ((uint32_t *)VAR_4)[0];
 switch (VAR_7) {
 case 128:
  *VAR_5 = sizeof(uint32_t) + sizeof(SVGAFifoCmdUpdate);
  break;
 case 129:
  *VAR_5 = sizeof(uint32_t) + sizeof(SVGAFifoCmdDefineGMRFB);
  break;
 case 131:
  *VAR_5 = sizeof(uint32_t) + sizeof(SVGAFifoCmdBlitGMRFBToScreen);
  break;
 case 130:
  *VAR_5 = sizeof(uint32_t) + sizeof(SVGAFifoCmdBlitGMRFBToScreen);
  break;
 default:
  FUNC_0("Unsupported SVGA command: %u.\n", VAR_7);
  return -VAR_0;
 }

 if (*VAR_5 > VAR_6) {
  FUNC_0("Invalid SVGA command (size mismatch): %u.\n",
          VAR_7);
  return -VAR_0;
 }

 if (FUNC_1(!VAR_3->kernel)) {
  FUNC_0("Kernel only SVGA command: %u.\n", VAR_7);
  return -VAR_1;
 }

 if (VAR_7 == 129)
  return FUNC_2(VAR_2, VAR_3, VAR_4);

 return 0;
}
