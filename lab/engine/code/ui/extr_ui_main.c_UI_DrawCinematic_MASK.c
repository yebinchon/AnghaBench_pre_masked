
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vidHeight; scalar_t__ vidWidth; } ;
struct TYPE_5__ {TYPE_1__ glconfig; } ;
struct TYPE_6__ {TYPE_2__ uiDC; } ;


 float VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (float*,float*,float*,float*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,float,float,float,float) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7) {

 FUNC_0( &VAR_4, &VAR_5, &VAR_6, &VAR_7 );


 VAR_4 *= VAR_1 / (float)VAR_2.uiDC.glconfig.vidWidth;
 VAR_6 *= VAR_1 / (float)VAR_2.uiDC.glconfig.vidWidth;
 VAR_5 *= VAR_0 / (float)VAR_2.uiDC.glconfig.vidHeight;
 VAR_7 *= VAR_0 / (float)VAR_2.uiDC.glconfig.vidHeight;

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_1(VAR_3);
}
