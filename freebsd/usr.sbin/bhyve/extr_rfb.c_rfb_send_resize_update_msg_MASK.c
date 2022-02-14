
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfb_srvr_updt_msg {int encoding; void* height; void* width; void* y; void* x; void* numrects; scalar_t__ pad; scalar_t__ type; } ;
struct rfb_srvr_rect_hdr {int encoding; void* height; void* width; void* y; void* x; void* numrects; scalar_t__ pad; scalar_t__ type; } ;
struct rfb_softc {int width; int height; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,struct rfb_srvr_updt_msg*,int) ;

__attribute__((used)) static void
FUNC_3(struct rfb_softc *VAR_1, int VAR_2)
{
 struct rfb_srvr_updt_msg VAR_3;
 struct rfb_srvr_rect_hdr VAR_4;


 VAR_3.type = 0;
 VAR_3.pad = 0;
 VAR_3.numrects = FUNC_1(1);
 FUNC_2(VAR_2, &VAR_3, sizeof(struct rfb_srvr_updt_msg));


 VAR_4.x = FUNC_1(0);
 VAR_4.y = FUNC_1(0);
 VAR_4.width = FUNC_1(VAR_1->width);
 VAR_4.height = FUNC_1(VAR_1->height);
 VAR_4.encoding = FUNC_0(VAR_0);
 FUNC_2(VAR_2, &VAR_4, sizeof(struct rfb_srvr_rect_hdr));
}
