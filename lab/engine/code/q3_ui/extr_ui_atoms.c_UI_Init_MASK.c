
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double vidWidth; double vidHeight; } ;
struct TYPE_3__ {double xscale; double yscale; double bias; scalar_t__ menusp; int * activemenu; TYPE_2__ glconfig; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;

void FUNC_4( void ) {
 FUNC_2();

 FUNC_1();


 FUNC_3( &VAR_0.glconfig );


 VAR_0.xscale = VAR_0.glconfig.vidWidth * (1.0/640.0);
 VAR_0.yscale = VAR_0.glconfig.vidHeight * (1.0/480.0);
 if ( VAR_0.glconfig.vidWidth * 480 > VAR_0.glconfig.vidHeight * 640 ) {

  VAR_0.bias = 0.5 * ( VAR_0.glconfig.vidWidth - ( VAR_0.glconfig.vidHeight * (640.0/480.0) ) );
  VAR_0.xscale = VAR_0.yscale;
 }
 else {

  VAR_0.bias = 0;
 }


 FUNC_0();

 VAR_0.activemenu = ((void*)0);
 VAR_0.menusp = 0;
}
