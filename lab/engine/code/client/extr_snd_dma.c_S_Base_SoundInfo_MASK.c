
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; int speed; int submission_chunk; scalar_t__ isfloat; int samplebits; int samples; scalar_t__ channels; } ;


 int FUNC_0 (char*,...) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_1(void) {
 FUNC_0("----- Sound Info -----\n" );
 if (!VAR_3) {
  FUNC_0 ("sound system not started\n");
 } else {
  FUNC_0("%5d stereo\n", VAR_0.channels - 1);
  FUNC_0("%5d samples\n", VAR_0.samples);
  FUNC_0("%5d samplebits (%s)\n", VAR_0.samplebits, VAR_0.isfloat ? "float" : "int");
  FUNC_0("%5d submission_chunk\n", VAR_0.submission_chunk);
  FUNC_0("%5d speed\n", VAR_0.speed);
  FUNC_0("%p dma buffer\n", VAR_0.buffer);
  if ( VAR_2 ) {
   FUNC_0("Background file: %s\n", VAR_1 );
  } else {
   FUNC_0("No background file.\n" );
  }

 }
 FUNC_0("----------------------\n" );
}
