
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {int xsize; int ysize; int maxsize; int minsize; int CIN_HEIGHT; int CIN_WIDTH; int samplesPerLine; int samplesPerPixel; int screenDelta; int* t; int drawX; int drawY; int VQBuffer; int VQ1; int VQNormal; int VQ0; void* smootheddouble; void* half; } ;
struct TYPE_4__ {scalar_t__ hardwareType; int maxTextureSize; } ;
struct TYPE_5__ {TYPE_1__ glconfig; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_1( byte *VAR_5 )
{
 if (VAR_3 < 0) return;

 VAR_1[VAR_3].xsize = VAR_5[0]+VAR_5[1]*256;
 VAR_1[VAR_3].ysize = VAR_5[2]+VAR_5[3]*256;
 VAR_1[VAR_3].maxsize = VAR_5[4]+VAR_5[5]*256;
 VAR_1[VAR_3].minsize = VAR_5[6]+VAR_5[7]*256;

 VAR_1[VAR_3].CIN_HEIGHT = VAR_1[VAR_3].ysize;
 VAR_1[VAR_3].CIN_WIDTH = VAR_1[VAR_3].xsize;

 VAR_1[VAR_3].samplesPerLine = VAR_1[VAR_3].CIN_WIDTH*VAR_1[VAR_3].samplesPerPixel;
 VAR_1[VAR_3].screenDelta = VAR_1[VAR_3].CIN_HEIGHT*VAR_1[VAR_3].samplesPerLine;

 VAR_1[VAR_3].half = VAR_4;
 VAR_1[VAR_3].smootheddouble = VAR_4;

 VAR_1[VAR_3].VQ0 = VAR_1[VAR_3].VQNormal;
 VAR_1[VAR_3].VQ1 = VAR_1[VAR_3].VQBuffer;

 VAR_1[VAR_3].t[0] = VAR_1[VAR_3].screenDelta;
 VAR_1[VAR_3].t[1] = -VAR_1[VAR_3].screenDelta;

        VAR_1[VAR_3].drawX = VAR_1[VAR_3].CIN_WIDTH;
        VAR_1[VAR_3].drawY = VAR_1[VAR_3].CIN_HEIGHT;


 if ( VAR_2.glconfig.hardwareType == VAR_0 || VAR_2.glconfig.maxTextureSize <= 256) {
                if (VAR_1[VAR_3].drawX>256) {
                        VAR_1[VAR_3].drawX = 256;
                }
                if (VAR_1[VAR_3].drawY>256) {
                        VAR_1[VAR_3].drawY = 256;
                }
  if (VAR_1[VAR_3].CIN_WIDTH != 256 || VAR_1[VAR_3].CIN_HEIGHT != 256) {
   FUNC_0("HACK: approxmimating cinematic for Rage Pro or Voodoo\n");
  }
 }
}
